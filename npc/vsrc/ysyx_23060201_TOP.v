module ysyx_23060201_TOP(
	input clk,
	input rst,
	input [31:0] inst,
	output [31:0] inst_rd_val_res,
	output [31:0] pc
);// pc -> ifu -> idu -> exu
	
	// pc
	ysyx_23060201_PC ysyx_23060201_PC(
		.clk(clk),
		.rst(rst),
		.pc(pc)
	);

	// idu
	wire [6:0] inst_op;
	wire [2:0] inst_func3;
	wire [4:0] inst_rs1, inst_rd;
	wire [31:0] inst_imm;

	ysyx_23060201_IDU ysyx_23060201_IDU(
		.inst(inst),
		.inst_op(inst_type),
		.inst_func3(inst_func3),
		.inst_rs1(inst_rs1),
		.inst_rd(inst_rd),
		.inst_imm(inst_imm)
	);
	
	// exu
	ysyx_23060201_EXU ysyx_23060201_EXU(
		.rst(rst),
		.inst_op(inst_op),
		.inst_func3(inst_func3),
		.inst_rs1(inst_rs1),
		.inst_rd(inst_rd),
		.inst_imm(inst_imm),
		.inst_rd_val_res(inst_rd_val_res)
	);

endmodule
	
