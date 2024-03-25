module ysyx_23060201_EXU(
	input rst,
	input [9:0] inst_type,
	input [4:0] inst_rd,
	input [31:0] inst_imm,
	input [31:0] inst_rd_val_sfin,
	output [31:0] inst_rd_val_out
);

	// reg: sel -> fetch -> execute -> rewrite
	
	ysyx_23060201_REG ysyx_23060201_REG(
		.rst(rst),
		.inst_rd(inst_rd),
		.inst_rd_val_sfin(inst_rd_val_sfin),
		.inst_rd_val_out(inst_rd_val_out)
	);

	wire [2:0] ctrl;
	assign ctrl = inst_type[9:7];

	ysyx_23060201_ALU ysyx_23060201_ALU(
		.a(inst_rd_val_in),
		.b(inst_imm),
		.ctrl(ctrl),
		.res(inst_rd_val_out),
		.nf(),
		.zf(),
		.cf(),
		.vf()
	);

endmodule
