#include <stdlib.h>
#include <stdint.h>

static Vysyx_23060201_TOP dut;
uint32_t *init_mem(size_t size);
uint32_t guest_to_host(uint32_t addr);
uint32_t pmem_read(uint32_t *memory, uint32_t vaddr);
void single_cycle() {
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

	Verilated::traceEverOn(true);
	VerilatedContext *contextp = new VerilatedContext;
	VerilatedVcdC *m_trace = new VerilatedVcdC;
	dut.trace(m_trace, 5);
	m_trace->open("builds/wave.vcd");

	rst(10);
	for (int i=0; i<4; i++) {
		dut.inst = pmem_read(memory, dut.pc);
		single_cycle();
		m_trace->dump(contextp -> time());
		contextp -> timeInc(1);
	}
	m_trace -> close();
}
