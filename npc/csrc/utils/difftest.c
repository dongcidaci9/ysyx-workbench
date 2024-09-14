#include <dlfcn.h>

#include <debug.h>
#include <utils.h>
#include <memory.h>
#include <cpu.h>

#ifdef CONFIG_DIFFTEST

extern CPU_state cpu;

void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_init)(int port) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;

enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };

static bool is_skip_ref = false;
static int skip_dut_nr_inst = 0;

void difftest_skip_ref() {
    is_skip_ref = true;
    skip_dut_nr_inst = 0;
}

void difftest_skip_dut(int nr_ref, int nr_dut) {
    skip_dut_nr_inst += nr_dut;

    while (nr_ref -- > 0) {
        ref_difftest_exec(1);
    }
}

void init_difftest(char *ref_so_file, long img_size, int port) {
    assert(ref_so_file != NULL);

    void *handle;
    handle = dlopen(ref_so_file, RTLD_LAZY);
    assert(handle);

    ref_difftest_memcpy = (void (*)(paddr_t, void*, size_t, bool))dlsym(handle, "difftest_memcpy");
    assert(ref_difftest_memcpy);

    ref_difftest_regcpy = (void (*)(void*, bool))dlsym(handle, "difftest_regcpy");
    assert(ref_difftest_regcpy);
    
    ref_difftest_exec = (void (*)(uint64_t))dlsym(handle, "difftest_exec");
    assert(ref_difftest_exec);
    
    ref_difftest_init = (void (*)(int))dlsym(handle, "difftest_init");
    assert(ref_difftest_init);
    
    Log("Differential testing: %s", ANSI_FMT("ON", ANSI_FG_GREEN));
    Log("The result of every instruction will be compared with %s. "
      "This will help you a lot for debugging, but also significantly reduce the performance. "
      "If it is not necessary, you can turn it off in menuconfig.", ref_so_file);

    ref_difftest_init(port);
    ref_difftest_memcpy(CONFIG_MBASE, guest_to_host(CONFIG_MBASE), img_size, DIFFTEST_TO_REF);
    ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
}

static bool difftest_checkregs(CPU_state *ref_r, paddr_t npc) {
    if (ref_r -> pc != npc) {
		printf("\npc:\nShould: %#x\t Not: %#x\n", ref_r -> pc, npc);
		return false;
	}
    for (int i = 0 ; i < NR_GPR; i ++) {
        if (ref_r -> gpr[i] != cpu.gpr[i]) {
		    printf("\ngpr[%d]@pc%#x:\nShould: %#x\t Not: %#x\n", i, ref_r -> pc, ref_r -> gpr[i], cpu.gpr[i]);
		    return false;
        }
    }
    return true;
}

static void checkregs(CPU_state *ref, paddr_t pc) {
  if (!difftest_checkregs(ref, pc)) {
    npc_state.state = NPC_ABORT;
    npc_state.halt_pc = pc;
    reg_display();
  }
}

void difftest_step(paddr_t npc) {
  CPU_state ref_r;

  ref_difftest_exec(1);
  ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);

  checkregs(&ref_r, npc);
}

#endif