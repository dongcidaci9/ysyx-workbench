#include "Vysyx_23060201_TOP.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

static Vysyx_23060201_TOP* top;

VerilatedContext* contextp = NULL;
VerilatedVcdC* vcd = NULL;

static void step_and_dump_wave(){
	top->eval();
	vcd->dump(contextp->time());
	contextp->timeInc(1);
}

// Initialize
static void sim_init(){
	contextp = new VerilatedContext;
	vcd = new VerilatedVcdC;
	top = new Vysyx_23060201_TOP;
	contextp->traceEverOn(true);
	top->trace(vcd, 99);
	vcd->open("wave.vcd");
}

// Exit
static void sim_exit(){
	step_and_dump_wave();
	vcd->close();
}

int main() {
	uint32_t *memory;
	memory = init_mem(5);
	
	sim_init();

	top->rst = 1;
	top->rst = 0;

	top->inst = 0b000000000001 00000 000 00001 0010011; // x1 = x0 + 1
	step_and_dump_wave;
	printf("pc = %d, inst_rd_val_res = %d\n", top->pc ,top->inst_rd_val_res);

	top->inst = 0b000000000010 00000 000 00001 0010011; // x1 = x0 + 2
	step_and_dump_wave;
	printf("pc = %d, inst_rd_val_res = %d\n", top->pc ,top->inst_rd_val_res);

	top->inst = 0b000000000001 00001 000 00010 0010011; // x2 = x1 + 1
	step_and_dump_wave;
	printf("pc = %d, inst_rd_val_res = %d\n", top->pc ,top->inst_rd_val_res);

	top->inst = 0b000000000011 00010 000 00010 0010011; // x2 = x2 + 3
	step_and_dump_wave;
	printf("pc = %d, inst_rd_val_res = %d\n", top->pc ,top->inst_rd_val_res);

	sim_exit();
}
