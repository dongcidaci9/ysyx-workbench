#include "Vysyx_23060201_TOP.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vysyx_23060201_TOP__Dpi.h"

static Vysyx_23060201_TOP* top;

VerilatedContext* contextp = NULL;
VerilatedVcdC* vcd = NULL;

static void step_and_dump_wave(){
	top->eval(); // State update
	contextp->timeInc(1); // Time step
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

	top->clk = 1; step_and_dump_wave();
	top->clk = 0; step_and_dump_wave();

	top->clk = 1; top->rst = 1; step_and_dump_wave();
	printf("0x%x, inst_rd_val = %d\n", top->pc ,top->inst_rd_val);
	top->clk = 0; top->rst = 0; step_and_dump_wave();
	// rd = 0
	top->clk = 1; step_and_dump_wave();
	top->inst = 0b00000000000100000000000010010011; // addi x1 = x0 + 1
	top->clk = 0; step_and_dump_wave();
	printf("0x%x, inst_rd_val = %d\n", top->pc ,top->inst_rd_val);
	// rd = 1
	top->clk = 1; step_and_dump_wave();
	top->inst = 0b00000000001000000000000010010011; // addi x1 = x0 + 2
	top->clk = 0; step_and_dump_wave();
	printf("0x%x, inst_rd_val = %d\n", top->pc ,top->inst_rd_val);
	// rd = 2
	top->clk = 1; step_and_dump_wave();
	top->inst = 0b00000000000100001000000100010011; // addi x2 = x1 + 1
	top->clk = 0; step_and_dump_wave();
	printf("0x%x, inst_rd_val = %d\n", top->pc ,top->inst_rd_val);
	// rd = 3

	top->clk = 1; step_and_dump_wave();
	top->inst = 0b00000000000100000000000001110011; // ebreak
	top->clk = 0; step_and_dump_wave();

	// ebreak
	top->clk = 1; step_and_dump_wave();
	top->inst = 0b00000000001100010000000100010011; // addi x2 = x2 + 3
	top->clk = 0; step_and_dump_wave();
	printf("0x%x, inst_rd_val = %d\n", top->pc ,top->inst_rd_val);
	// rd = 6
	top->clk = 1; step_and_dump_wave(); top->inst = 0b00000000000100010000000100010011; // addi x2 = x2 + 1
	top->clk = 0; step_and_dump_wave();
	printf("0x%x, inst_rd_val = %d\n", top->pc ,top->inst_rd_val);
	// rd = 7
	
	sim_exit();
}

// DPI-C
extern "C" void npc_trap(){
	printf("0x%x <ebreak>\n", top->pc);
	sim_exit();
	exit(0);
}

