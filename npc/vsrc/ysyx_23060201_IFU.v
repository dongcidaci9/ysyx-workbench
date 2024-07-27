module inst_mem(
    input [31:0] pc;
    output [31:0] inst
);

    wire [31:0] addr = pc - 32'h8000000;
    assign inst = rom[addr];

endmodule
/*
    top->rst = 1; step_and_dump_wave();

	top->clk = 1; step_and_dump_wave();
	top->clk = 0; step_and_dump_wave();

	top->clk = 1; top->rst = 1; step_and_dump_wave();
	printf("0x%x <addi> inst_rd_val = %d\n", top->pc ,top->inst_rd_val);
	top->clk = 0; top->rst = 0; step_and_dump_wave();
	// rd = 0
	top->clk = 1; step_and_dump_wave();
	top->inst = 0b00000000000100000000000010010011; // addi x1 = x0 + 1
	top->clk = 0; step_and_dump_wave();
	printf("0x%x <addi> inst_rd_val = %d\n", top->pc ,top->inst_rd_val);
	// rd = 1
	top->clk = 1; step_and_dump_wave();
	top->inst = 0b00000000001000000000000010010011; // addi x1 = x0 + 2
	top->clk = 0; step_and_dump_wave();
	printf("0x%x <addi> inst_rd_val = %d\n", top->pc ,top->inst_rd_val);
	// rd = 2
	top->clk = 1; step_and_dump_wave();
	top->inst = 0b00000000000100001000000100010011; // addi x2 = x1 + 1
	top->clk = 0; step_and_dump_wave();
	printf("0x%x <addi> inst_rd_val = %d\n", top->pc ,top->inst_rd_val);
	// rd = 3

	top->clk = 1; step_and_dump_wave();
	top->inst = 0b00000000000100000000000001110011; // ebreak
	top->clk = 0; step_and_dump_wave();
*/