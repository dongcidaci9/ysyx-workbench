#include "Vysyx_23060201_TOP.h"
#include "Vysyx_23060201_TOP___024root.h"
#include "verilated.h"
#include "verilated_vcd_c.h" // generate wave.vcd
// dpi-c
#include "Vysyx_23060201_TOP__Dpi.h"
#include <verilated_dpi.h>
// include
#include "include/utils.h"
#include "include/debug.h"
#include "include/macro.h"
#include "include/cpu.h"
#include "include/sdb.h"
#include "include/monitor.h"
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

void reg_display() {
	printf(ANSI_FMT("GPR information:\n", ANSI_FG_GREEN));
	for (int i = 0; i < REG_NUM; i ++) {
		printf("(%02d) %3s: 0x%08x\t", i, regs[i], top->rootp->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[i]);
		if((i + 1) % 2 == 0) {
			printf("\n");
		}	
	}
}

/////////////////////////////////////////////
/*                cpu-exec	               */	
/////////////////////////////////////////////

NPCState npc_state = { .state = NPC_RUNNING };

uint64_t g_nr_guest_inst = 0;
static uint64_t g_timer = 0; // unit: us

static void statistic() {
#define NUMBERIC_FMT "%lu"
	Log("host time spent = " NUMBERIC_FMT " us", g_timer);
	Log("total guest instructions = " NUMBERIC_FMT " us", g_nr_guest_inst);
	if (g_timer > 0) Log("simulation frequency = " NUMBERIC_FMT " inst/s", g_nr_guest_inst * 1000000 / g_timer);
	else Log("Finish running in less than 1 us and can not calculate the simulation frequency");
}

static void execute(uint64_t n) {
	for (;n > 0; n --) {
		uint32_t pc = top->pc;
		top->inst = inst_fetch(&pc);
		g_nr_guest_inst ++;
		printf("pc: 0x%08x, inst: 0x%08x\n", top->pc, top->inst);
		top->clk = 0; step_and_dump_wave();
		top->clk = 1; step_and_dump_wave();
		if (npc_state.state != NPC_RUNNING) break;
	}
}

void cpu_exec(uint64_t n) {
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
	NPCTRAP(top->pc, 0);
}

