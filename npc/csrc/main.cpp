#include "Vysyx_23060201_TOP.h"
#include "Vysyx_23060201_TOP___024root.h"
#include "verilated.h"
#include "verilated_vcd_c.h" // generate wave.vcd
// dpi-c
#include "Vysyx_23060201_TOP__Dpi.h"
#include <verilated_dpi.h>
// include
#include <utils.h>
#include <debug.h>
#include <macro.h>
#include <cpu.h>
#include <sdb.h>

/////////////////////////////////////////////
/*                Simulation               */	
/////////////////////////////////////////////

static Vysyx_23060201_TOP* top = nullptr;

VerilatedContext* contextp = nullptr;
VerilatedVcdC* vcd = nullptr;

static void step_and_dump_wave() {
	top->eval(); // State update
	contextp->timeInc(1); // Time step in
	vcd->dump(contextp->time()); // Dump wave
}

// Initialize
static void sim_init() {
	contextp = new VerilatedContext;
	vcd = new VerilatedVcdC;
	top = new Vysyx_23060201_TOP;
	contextp->traceEverOn(true);
	top->trace(vcd, 0);
	vcd->open("wave.vcd");
}

// Exit
static void sim_exit() {
	vcd->close();
	Log("total simulation time: %ld", contextp->time());
	delete top;
	delete vcd;
}

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

#define REG_NUM ARRLEN(top->rootp->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file)

static word_t cpu_gpr(int n) {
	word_t ret = top->rootp->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[n];
	return ret;
} 

void reg_display() {
	printf(ANSI_FMT("GPR information:\n", ANSI_FG_GREEN));
	for (int i = 0; i < REG_NUM; i ++) {
		printf("(%02d) %3s: 0x%08x\t", i, regs[i], cpu_gpr(i));
		if((i + 1) % 2 == 0) {
			printf("\n");
		}	
	}
}

/////////////////////////////////////////////
/*                cpu-exec	               */	
/////////////////////////////////////////////
#define MAX_INST_TO_PRINT 100

word_t inst_fetch(addr_t* pc);
void init_monitor(int argc, char *argv[]);

NPCState npc_state = { .state = NPC_RUNNING };
uint64_t g_nr_guest_inst = 0;
static uint64_t g_timer = 0; // unit: us
static bool g_print_step = false;

static void statistic() {
#define NUMBERIC_FMT "%lu"
	Log("host time spent = " NUMBERIC_FMT " us", g_timer);
	Log("total guest instructions = " NUMBERIC_FMT " us", g_nr_guest_inst);
	if (g_timer > 0) Log("simulation frequency = " NUMBERIC_FMT " inst/s", g_nr_guest_inst * 1000000 / g_timer);
	else Log("Finish running in less than 1 us and can not calculate the simulation frequency");
}


typedef struct Decode {
	IFDEF(CONFIG_ITRACE, char logbuf[128]);
} Decode;

static void trace_and_difftest(Decode *_this) {
	if (g_print_step) {
		IFDEF(CONFIG_ITRACE, puts(_this->logbuf));
	}
}

#ifdef CONFIG_ITRACE

void disassemble(char *str, int size, uint64_t pc, uint8_t* code, int nbyte);

static void inst_trace(Decode *s) {
	char *p = s->logbuf;
	p += snprintf(p, sizeof(s->logbuf), FMT_WORD ":", top->pc);

	int ilen = 4;
	uint8_t* inst = (uint8_t *)&top->inst;
	for (int i = ilen - 1; i >= 0; i --) {
		p += snprintf(p, 4, " %02x", inst[i]);
	}
	int ilen_max = 4;
	int space_len = ilen_max - ilen;
	if (space_len < 0) space_len = 0;
	space_len = space_len * 3 + 1;
	memset(p, ' ', space_len);
	p += space_len;
	disassemble(p, s->logbuf + sizeof(s->logbuf) - p, top->pc, inst, ilen);
}

#endif

#ifdef CONFIG_FTRACE

void trace_func_call(addr_t pc, addr_t target, bool is_tail);
void trace_func_ret(addr_t pc);

static void func_trace()
{
	uint32_t inst 	= top->inst;
	word_t pc 		= top->pc;
	word_t snpc 	= top->pc + 4;
	word_t dnpc 	= top->rootp->ysyx_23060201_TOP__DOT__wire_dnpc;
	word_t imm 		= top->rootp->ysyx_23060201_TOP__DOT__wire_imm;
	
	uint8_t	opcode 	= BITS(inst, 6, 0);
	uint8_t rd 		= BITS(inst, 11, 7);
	if (opcode == 1101111) {
		if (rd == 1) trace_func_call(pc, dnpc, false);
	}
	if (opcode == 1100111) {
		if (inst == 0x00008067) trace_func_ret(pc);
		else if (rd == 1) trace_func_call(pc, dnpc, false);
		else if (rd == 0 && imm == 0) trace_func_call(pc, dnpc, true);
	}
}

#endif

static void exec_once(Decode *s) {
	word_t pc = top->pc;	
	top->inst = inst_fetch(&pc);
	
	IFDEF(CONFIG_ITRACE, inst_trace(s));
	IFDEF(CONFIG_FTRACE, func_trace());

	top->clk = 0; step_and_dump_wave();
	top->clk = 1; step_and_dump_wave();
}

static void execute(uint64_t n) {
	Decode s;
	for (;n > 0; n --) {
		exec_once(&s);
		g_nr_guest_inst ++;
		trace_and_difftest(&s);

		if (npc_state.state != NPC_RUNNING) break;
	}
}

void cpu_exec(uint64_t n) {
	g_print_step = (n < MAX_INST_TO_PRINT);
	switch (npc_state.state) {
		case NPC_END: case NPC_ABORT:
			printf("Program execution has ended. To restart the program, exit NPC and run again.\n");
			return;
		default: npc_state.state = NPC_RUNNING;	
	}
	
	uint64_t timer_start = get_time();

	execute(n);

	uint64_t timer_end = get_time();
	g_timer += timer_end - timer_start;

	switch (npc_state.state) {
		case NPC_RUNNING: npc_state.state = NPC_STOP; break;

		case NPC_END: case NPC_ABORT:
			Log("npc: %s at pc = 0x%08x" , 
				(npc_state.state == NPC_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED) :
					(npc_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) :
						ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))),
					npc_state.halt_pc);
		
		case NPC_QUIT: statistic();
	}
}

/////////////////////////////////////////////
/*                npc-main	               */	
/////////////////////////////////////////////

int main(int argc, char *argv[]) {
	init_monitor(argc, argv);

	sim_init();

	top->clk = 0; step_and_dump_wave();
	top->rst = 1; // reset
	top->clk = 1; step_and_dump_wave();
	top->rst = 0; 

	sdb_mainloop();

	// ebreak
	sim_exit();
}

// DPI-C
extern "C" void npc_trap() {
	NPCTRAP(top->pc, cpu_gpr(10));
}

