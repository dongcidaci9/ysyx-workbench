#include "Vysyx_23060201_TOP.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

static Vysyx_23060201_TOP* top;

VerilatedContext* contextp = NULL;
VerilatedVcdC* vcd = NULL;

static void step_and_dump_wave(){
	top->eval();
	contextp->timeInc(1);
	vcd->dump(contextp->time());
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
	step_and_dump_wave();
	vcd->close();
}

static void one_cycle(){
	top->clk = 1;
	step_and_dump_wave();
	top->clk = 0;
	step_and_dump_wave();
}

int main() {
	sim_init();

	one_cycle();
	top->rst = 1;
	one_cycle();
	printf("pc = %d, inst_rd_val_res = %d\n", top->pc ,top->inst_rd_val_res);

	top->rst = 0;
	// rd = 0
	top->inst = 0b00000000000100000000000010010011; // x1 = x0 + 1
	one_cycle();
	printf("pc = %d, inst_rd_val_res = %d\n", top->pc ,top->inst_rd_val_res);
	// rd = 1
	top->inst = 0b00000000001000000000000010010011; // x1 = x0 + 2
	one_cycle();
	printf("pc = %d, inst_rd_val_res = %d\n", top->pc ,top->inst_rd_val_res);
	// rd = 2
	top->inst = 0b00000000000100001000000100010011; // x2 = x1 + 1
	one_cycle();
	printf("pc = %d, inst_rd_val_res = %d\n", top->pc ,top->inst_rd_val_res);
	// rd = 3
	top->inst = 0b00000000011100010000000100010011; // x2 = x2 + 7
	one_cycle();
	printf("pc = %d, inst_rd_val_res = %d\n", top->pc ,top->inst_rd_val_res);
	// rd = 10
	top->inst = 0b00000000000100010000000100010011; // x2 = x2 + 1
	one_cycle();
	printf("pc = %d, inst_rd_val_res = %d\n", top->pc ,top->inst_rd_val_res);
	sim_exit();
}
