#include <stdlib.h>
#include <stdint.h>

#include "Vysyx_23060201_TOP.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

uint32_t *init_mem(size_t size);
uint32_t guest_to_host(uint32_t addr);
uint32_t pmem_read(uint32_t *memory, uint32_t vaddr);

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vysyx_23060201_TOP top;

static void step_and_dump_wave(){
	top->eval();
	contextp->timeInc(1);
	tfp->dump(contextp->time());
}

// Initialize
static void sim_init(){
	contextp = new VerilatedContext;
	tfp = new VerilatedVcdC;
	top = new Vysyx_23060201_TOP;
	contextp->traceEverOn(true);
	top->trace(tfp, 0);
	tfp->open("wave.vcd");
}

// Exit
static void sim_exit(){
	step_and_dump_wave();
	tfp->close();
}

static void single_cycle() {
	dut.clk = 0; dut.eval();
	dut.clk = 1; dut.eval();
}

static void rst(int n) {
	dut.rst = 1;
	while(n-->0) single_cycle();
	dut.rst = 0;
}

int main() {
	uint32_t *memory;
	memory = init_mem(5);
	
	sim_init();

	rst(10);
	for (int i=0; i<4; i++) {
		dut.inst = pmem_read(memory, dut.pc);
		single_cycle();
		step_and_dump_wave()
	}

	sim_exit();
}
