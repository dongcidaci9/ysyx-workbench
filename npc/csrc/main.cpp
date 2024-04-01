#include "Vysyx_23060201_TOP.h"
#include "../obj_dir/verilated.h"
#include "../obj_dir/verilated_vcd_c.h"

static Vysyx_23060201_TOP* top;

uint32_t *init_mem(size_t size);
uint32_t guest_to_host(uint32_t addr);
uint32_t pmem_read(uint32_t *memory, uint32_t vaddr);
// 
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

static void single_cycle() {
	top.clk = 0; top.eval();
	top.clk = 1; top.eval();
}

static void rst(int n) {
	top.rst = 1;
	while(n-->0) single_cycle();
	top.rst = 0;
}

int main() {
	uint32_t *memory;
	memory = init_mem(5);
	
	sim_init();

	rst(10);
	for (int i=0; i<4; i++) {
		top.inst = pmem_read(memory, dut.pc);
		single_cycle();
		step_and_dump_wave();
	}

	sim_exit();
}
