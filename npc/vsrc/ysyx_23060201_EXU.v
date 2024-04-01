module ysyx_23060201_EXU(
	input clk,
	input rst,
	input [6:0] inst_op,
	input [2:0] inst_func3,
	input [4:0] inst_rs1, inst_rd,
	input [31:0] inst_imm,
	output [31:0] inst_rd_val_res
);

	// reg: sel -> fetch -> execute -> rewrite
	wire [31:0] inst_rs1_val_alu_in;
	wire [31:0] inst_rd_val_alu_out;
	wire inst_addi;
	wire [2:0] ctrl;

	assign inst_addi = (inst_func3 == 3'b000 && inst_op == 7'b0010011) ? 1'b1 : 1'b0;
	assign ctrl = inst_addi ? 3'b000 : 3'b111;

	ysyx_23060201_GPR ysyx_23060201_GPR(
		.clk(clk),
		.rst(rst),
		.inst_rs1(inst_rs1),
		.inst_rd(inst_rd),
		.inst_rs1_val_out(inst_rs1_val_alu_in),
		.inst_rd_val_res(inst_rd_val_alu_out)
	);

	ysyx_23060201_ALU ysyx_23060201_ALU(
		.a(inst_rs1_val_alu_in),
		.b(inst_imm),
		.ctrl(ctrl),
		.res(inst_rd_val_alu_out)
	);
	
	assign inst_rd_val_res = inst_rd_val_alu_out;

endmodule
