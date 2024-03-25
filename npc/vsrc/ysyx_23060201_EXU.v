module ysyx_23060201_EXU(
	input [9:0] inst_type,
	input [4:0] inst_rs1, inst_rs2, inst_rd,
	input [31:0] inst_imm,
	input [31:0] inst_rd_val_in,
	output [31:0] inst_rd_val_out
);

	// reg: sel -> fetch -> execute -> rewrite
	wire [31:0] inst_rs1_val_in, inst_rs1_val_out;
	wire [31:0] inst_rs2_val_in, inst_rs2_val_out;

	wire [2:0] ctrl;
	assign ctrl = inst_type[9:7];

	assign inst_rd_val_in = inst_rs1

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
