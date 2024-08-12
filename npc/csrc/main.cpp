#include "Vysyx_23060201_TOP.h"
#include "verilated.h"
#include "verilated_vcd_c.h" // generate wave.vcd
// dpi-c
#include "Vysyx_23060201_TOP__Dpi.h"
#include <verilated_dpi.h>
// include
#include "include/common.h"
#include "include/utils.h"
#include "include/debug.h"
#include "include/macro.h"
#include "include/cpu.h"

//////////////////////////////////////////////
/*                	Monitor           		*/	
//////////////////////////////////////////////

NPCState npc_state = { .state = NPC_STOP };

void set_npc_state(int state, addr_t pc, int halt_ret) {
	npc_state.state 	= state;
	npc_state.halt_pc 	= pc;
	npc_state.halt_ret 	= halt_ret;
}

static void welcome() {
  Log("Build time: %s, %s", __TIME__, __DATE__);
  printf("Welcome to %s-NPC!\n", ANSI_FMT(str(__GUEST_ISA__), ANSI_FG_YELLOW ANSI_BG_RED));
  printf("For help, type \"help\"\n");
}

//////////////////////////////////////////////
/*                	Timer           		*/	
//////////////////////////////////////////////
#include <sys/time.h>

uint64_t g_nr_guest_inst = 0;
static uint64_t g_timer = 0; // unit: us

static uint64_t get_time() {
	struct timeval now;
	gettimeofday(&now, NULL);
	uint64_t us = now.tv_sec * 1000000 + now.tv_usec;
	return us;
}

static void statistic() {
#define NUMBERIC_FMT "%lu"
	Log("host time spent = " NUMBERIC_FMT " us", g_timer);
	Log("total guest instructions = " NUMBERIC_FMT " us", g_nr_guest_inst);
	if (g_timer > 0) Log("simulation frequency = " NUMBERIC_FMT " inst/s", g_nr_guest_inst * 1000000 / g_timer);
	else Log("Finish running in less than 1 us and can not calculate the simulation frequency");
}

//////////////////////////////////////////////
/*                Memory Init              	*/	
//////////////////////////////////////////////
// getopt
#include <getopt.h>
#include <cassert>
// glibc
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
// readline
#include <readline/readline.h>
#include <readline/history.h>

static uint8_t *mem = NULL;

uint8_t* guest_to_host(addr_t paddr) { return mem + paddr - MBASE; }

static const uint32_t img [] = {
	0x00000287,
	0x00028823,
	0x0102c503,
	0x00100073,
	0xdeadbeef,
};

void init_isa() {
	memcpy(guest_to_host(MBASE), img, sizeof(img));
}

void init_mem() {
	mem = (uint8_t*)malloc(MSIZE);
}

static inline word_t mem_read(void *addr) {
	return *(addr_t *)addr;
}

static word_t inst_fetch(addr_t* pc) {
	uint32_t inst = mem_read(guest_to_host(*pc));
	return inst;
} 

static char *log_file = NULL;
static char *img_file = NULL;

// command line
static int parse_args(int argc, char *argv[]) {
	const struct option table[] = {
		{"log"   , required_argument, NULL, 'l'},
    	{"help"  , no_argument      , NULL, 'h'},
		{0       , 0                , NULL,  0 },
	};
	int o;
	while ( (o = getopt_long(argc, argv, "-hl:", table, NULL)) != -1) {
		switch (o) {
			case 'l': log_file = optarg; break;
			case  1 : img_file = optarg; return 0; // non-option argument
			default:
 				printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        		printf("\t-l,--log=FILE           output log to FILE\n");
        		printf("\n");
        		exit(0);
		}
	}
	return 0;
}

static long load_img() {
	if (img_file == NULL) {
		Log("No image is given. Use the default build-in image.");
		return 4096;
	}

	FILE *fp = fopen(img_file, "rb");
	// assert(fp, "Can not open '%s'", img_file);

	fseek(fp, 0, SEEK_END); // *fp seek to the end of this file
	long size = ftell(fp);

	Log("The image is %s, size = %ld", img_file, size);

	fseek(fp, 0, SEEK_SET); // *fp seek to the start of this file
	int ret = fread(guest_to_host(MLEFT), size, 1, fp); // *fp read the data and save it to host
	assert(ret == 1);

	fclose(fp);
	return size;
}

/////////////////////////////////////////////
/*                Simulation               */	
/////////////////////////////////////////////

static Vysyx_23060201_TOP* top;

VerilatedContext* contextp = NULL;
VerilatedVcdC* vcd = NULL;

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
	printf("Simulation finished. Total simulation time: %ld\n", contextp->time());
	delete top;
	delete vcd;
}

void init_monitor(int argc, char *argv[]) {
	parse_args(argc, argv);
	// init_log(log_file);
	init_mem();
	init_isa();
	long img_size = load_img();
	welcome();
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
			Log("npc %s at pc = 0x%08x" , 
				(npc_state.state == NPC_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED) :
					(npc_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) :
						ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))),
					npc_state.halt_pc);
		
		case NPC_QUIT: statistic();
	}
}

int main(int argc, char *argv[]) {
	init_monitor(argc, argv);

	sim_init();

	top->rst = 1; // reset
	top->clk = 1; step_and_dump_wave();
	printf("(start)\n");
	printf("pc: %#x\n", top->pc);

	top->rst = 0; 
	printf("(NPC running)\n");
	uint64_t n = -1;
	execute(n);

	// ebreak
	sim_exit();
}

// DPI-C
extern "C" void npc_trap() {
	NPCTRAP(top->pc, 0);
	sim_exit();
	exit(0);
}

