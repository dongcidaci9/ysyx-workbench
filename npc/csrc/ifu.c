#include <stdio.h>
#include <stdint.h>

static void welcome() {
	printf("Welcome to riscv32e-NPC!\n");
}


// CPU_state
/*
typedef struct {
	word_t gpr[32];
	vaddr_t pc;
} CPU_state;
*/

CPU_state cpu = {};

// Decode
typedef struct {
	union {
		uint32_t val;
	} inst;
} ISADecodeInfo;

typedef struct Decode {
	vaddr_t pc;
	vaddr_t snpc;
	vaddr_t dnpc;
	ISADecodeInfo isa;
} Decode;

/*
static int isa_exec_once(Decode *s) {
	top->clk = 
	top->inst = inst_fetch(&s->snpc, 4);
}

static void exec_once(Decode *s, vaddr_t pc) {
	s->pc = pc;
	s->snpc = pc;
	isa_exec_once(s);
	cpu.pc = s->dnpc;
}
*/
// configuration


static inline word_t host_read(void *addr, int len) {
	return *(uint32_t *)addr;
}


static word_t pmem_read(paddr_t addr, int len) {
	word_t ret = host_read(guest_to_host(addr), len);
	return ret;
}

word_t paddr_read(paddr_t addr, int len) {
	return pmem_read(addr, len);
}
static word_t vaddr_iftech(vaddr_t addr, int len) {
	return paddr_read(addr, len);
}

static inline uint32_t inst_fetch(vaddr_t *pc, int len) {
	uint32_t inst = vaddr_ifetch(*pc, len);
	(*pc) += len;
	return inst;
}

