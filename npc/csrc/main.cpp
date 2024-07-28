#include "Vysyx_23060201_TOP.h"
#include "verilated.h"
#include "verilated_vcd_c.h" // generate wave.vcd
// dpi-c
#include "Vysyx_23060201_TOP__Dpi.h"
#include <verilated_dpi.h>
// glibc
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <assert.h>
// readline
#include <readline/readline.h>
#include <readline/history.h>
/////////////////////////////////////////////
/*               Memory Init               */	
/////////////////////////////////////////////
#include <getopt.h>

// some defines
typedef uint32_t word_t;
typedef int32_t  sword_t;
typedef word_t   vaddr_t;  
typedef uint32_t paddr_t;

#define MBASE  0x80000000
#define MSIZE  0x8000000
#define	MLEFT  (paddr_t)MBASE
#define	MRIGHT (paddr_t)MBASE + MSIZE - 1;

static uint8_t *pmem = NULL;
void init_mem() {
	pmem = malloc(MSIZE);
}

uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - MBASE; }

static char *log_file = NULL;
static char *img_file = NULL;

// command line
static int parse_args(int argc, char *argv[]) {
	const struct option table[] = {
		{"log"   , required_argument, NULL, 'l'},
		{0       , 0                , NULL,  0 },
	};
	int o;
	while ( (o = getopt_long(argc, argv, "l:", table, NULL)) != -1) {
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
		printf("No image is given. Use the default build-in image");
		return 4096;
	}

	FILE *fp = fopen(img_file, "rb");
	Assert(fp, "Can not open '%s'", img_file);

	fseek(fp, 0, SEEK_END); // *fp seek to the end of this file
	long size = ftell(fp);

	printf("The image is %s, size = %ld\n", img_file, size);

	fseek(fp, 0, SEEK_SET); // *fp seek to the start of this file
	int ret = fread(guest_to_host(MLEFT), size, 1, fp); // *fp read the data and save it to host
	assert(ret == 1);

	fclose(fp);
	return size;
}

	/////////////////////////////////////////
	/*                C P U                */	
	/////////////////////////////////////////

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
	long img_size = load_img();
}

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
static void exec_once(vaddr_t pc) {

}

int main() {
	sim_init();
	init_monitor();

	top->clk = 1; top->rst = 1;
	step_and_dump_wave();
	top->clk = 0; step_and_dump_wave();

	top->clk = 1; step_and_dump_wave();
	top->clk = 0; step_and_dump_wave();

	top->inst = inst_fetch();
	// ebreak
	sim_exit();
}

// DPI-C
extern "C" void npc_trap(){
	printf("0x%x <ebreak>\n", top->pc);
	sim_exit();
	exit(0);
}

