module ysyx_23060201_EXU(
	input rst,
	input [9:0] inst_type,
	input [4:0] inst_rs1, inst_rd,
	input [31:0] inst_imm,
	output [31:0] inst_rd_val_res
);

	// reg: sel -> fetch -> execute -> rewrite
	
	wire [31:0] inst_rs1_val_alu_in;
	wire [31:0] inst_rd_val_alu_in;

	ysyx_23060201_REG ysyx_23060201_REG(
		.rst(rst),
		.inst_rs1(inst_rs1),
		.inst_rd(inst_rd),
		.inst_rs1_val_out(inst_rs1_val_alu_in),
		.inst_rd_val_in(inst_rd_val_alu_out)
	);

	wire [2:0] ctrl;
	assign ctrl = inst_type[9:7];

	ysyx_23060201_ALU ysyx_23060201_ALU(
		.a(inst_rs1_val_alu_in),
		.b(inst_imm),
		.ctrl(ctrl),
		.res(inst_rd_val_alu_out),
		.nf(),
		.zf(),
		.cf(),
		.vf()
	);
	
	assign inst_rd_val_res = inst_rd_val_alu_out;

endmodule
