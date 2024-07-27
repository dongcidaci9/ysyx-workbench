#include "Vysyx_23060201_TOP.h"
#include "verilated.h"
#include "verilated_vcd_c.h" // generate wave.vcd
 
// dpi-c
#include "Vysyx_23060201_TOP__Dpi.h"
#include <verilated_dpi.h>
// glibc
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
// readline
#include <readline/readline.h>
#include <readline/history.h>
// system time
#include <sys/time.h>

	/////////////////////////////////////////
	/*              Memory Init            */	
	/////////////////////////////////////////

	/////////////////////////////////////////
	/*                C P U                */	
	/////////////////////////////////////////
static Vysyx_23060201_TOP* top;

VerilatedContext* contextp = NULL;
VerilatedVcdC* vcd = NULL;

static void step_and_dump_wave(){
	top->eval(); // State update
	contextp->timeInc(1); // Time step in
	vcd->dump(contextp->time()); // Dump wave
}

// Initialize
static void sim_init(){
	contextp = new VerilatedContext;
	vcd = new VerilatedVcdC;
	top = new Vysyx_23060201_TOP;
	contextp->traceEverOn(true);
	top->trace(vcd, 0);
	vcd->open("wave.vcd");
}

// Exit
static void sim_exit(){
	vcd->close();
	printf("Simulation finished. Total simulation time: %ld\n", contextp->time());
	delete top;
	delete vcd;
}

int main() {
	sim_init();
	
	// ebreak
	sim_exit();
}

// DPI-C
extern "C" void npc_trap(){
	printf("0x%x <ebreak>\n", top->pc);
	sim_exit();
	exit(0);
}

