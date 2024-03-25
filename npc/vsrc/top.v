module ysyx_23060201_TOP(
	input clk,
	input rst,
	input inst_rd_val_in,
	input [31:0] inst_in,
	output [31:0] inst_out,
	output inst_rd_val_out,
	output pc
);// pc -> ifu@TOP -> idu -> exu
	
	// pc
	ysyx_23060201_PC ysyx_23060201_PC(
		.clk(clk),
		.rst(rst),
		.pc(pc)
	);

	// idu@TOP
	assign inst_out = inst_in;
	wire [9:0] inst_type;
	wire [4:0] inst_rs1, inst_rs2, inst_rd;
	wire [31:0] inst_imm;

	ysyx_23060201_IDU ysyx_23060201_IDU(
		.inst(inst_out),
		.inst_type(inst_type),
		.inst_rs1(inst_rs1), .inst_rs2(inst_rs2), .inst_rd(inst_rd),
		.inst_imm(inst_imm)
	);
	
	// exu
	ysyx_23060201_EXU ysyx_23060201_EXU(
		.inst_type(inst_type), 
		.inst_rs1(inst_rs1), .inst_rs2(inst_rs2), .inst_rd(inst_rd),
		.inst_imm(inst_imm),
		.inst_rd_val_in(inst_rd_val_in),
		.inst_rd_val_out(inst_rd_val_out)
	);

endmodule
	



