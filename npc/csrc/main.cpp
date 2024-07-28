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
// readline
#include <readline/readline.h>
#include <readline/history.h>
/////////////////////////////////////////////
/*               Memory Init               */	
/////////////////////////////////////////////
#include <getopt.h>
#include <cassert>

// some defines
typedef uint32_t word_t;
typedef uint32_t addr_t; 

#define MBASE  0x80000000
#define MSIZE  0x8000000
#define	MLEFT  (addr_t)MBASE
#define	MRIGHT (addr_t)MBASE + MSIZE - 1;

static uint8_t *mem = NULL;
void init_mem() {
	mem = (uint8_t*)malloc(MSIZE);
}

uint8_t* pc_handler(addr_t paddr) { return mem + paddr - MBASE; }

static inline word_t mem_read(void *addr) {
	return *(addr_t *)addr;
}

static word_t inst_fetch(addr_t *pc) {
	int len = 4;
	uint32_t inst = mem_read(pc_handler(*pc));
	(*pc) += len;
	return inst;
} 

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
	// assert(fp, "Can not open '%s'", img_file);

	fseek(fp, 0, SEEK_END); // *fp seek to the end of this file
	long size = ftell(fp);

	printf("The image is %s, size = %ld\n", img_file, size);

	fseek(fp, 0, SEEK_SET); // *fp seek to the start of this file
	int ret = fread(pc_handler(MLEFT), size, 1, fp); // *fp read the data and save it to host
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
	long img_size = load_img();
}

int main(int argc, char *argv[]) {
	sim_init();
	init_monitor(argc, argv);

	top->clk = 0; top->rst = 1;
	step_and_dump_wave();
	top->clk = 1;
	step_and_dump_wave();

	top->clk = 0; 
	step_and_dump_wave();
	top->clk = 1; 
	step_and_dump_wave();

	uint64_t n = 999;
	for (;n > 0; n --) {
		top->clk = 0; step_and_dump_wave();
		top->inst = inst_fetch((addr_t*)top->pc);
		top->clk = 1; step_and_dump_wave();
	}
	// ebreak
	sim_exit();
}

// DPI-C
extern "C" void npc_trap(){
	printf("0x%x <ebreak>\n", top->pc);
	sim_exit();
	exit(0);
}

