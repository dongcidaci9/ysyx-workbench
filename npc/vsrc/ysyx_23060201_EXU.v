`include "defines.v"

module ysyx_23060201_EXU(
	input clk_a,
	input [31:0] pc,

	input [31:0] imm,
	input [6:0] op,
	input [4:0] rd,
	input [2:0] func3,
	input [31:0] rdata1, rdata2, // read from gpr from ifu

	output clk_b,
	output gpr_wen,
	output [4:0] waddr,
	output [31:0] wdata,
	output [31:0] dnpc
);

	/////////////////////////////////////////////////////
	/*                    A L U                        */ 
	/////////////////////////////////////////////////////

	// alu signal
	wire [31:0] snpc;
	wire [31:0] alu_a, alu_b;
	wire [3:0] alu_ctl;
	
	// gpr
	assign clk_b = clk_a;
	assign gpr_wen = 1'b1;
	// dnpc, snpc
	assign snpc = pc + 4;
	assign waddr = rd;

	// mem read & write

	// alu_a_sel
	MuxKeyWithDefault #(6, 7, 32) alu_a_sel(alu_a, op, 32'b0, {
		`ysyx_23060201_OP_TYPE_R,   rdata1,
		`ysyx_23060201_OP_TYPE_I,   rdata1,
		`ysyx_23060201_OP_TYPE_U,   imm,
		`ysyx_23060201_OP_TYPE_UPC, pc,
		`ysyx_23060201_OP_TYPE_J,   snpc,
		`ysyx_23060201_OP_TYPE_JR,  snpc
	});
	// alu_b_sel
	MuxKeyWithDefault #(3, 7, 32) alu_b_sel(alu_b, op, 32'b0, {
		`ysyx_23060201_OP_TYPE_R,   rdata2,
		`ysyx_23060201_OP_TYPE_I,   imm,
		`ysyx_23060201_OP_TYPE_UPC, imm
	});
	// alu_ctl_sel
	MuxKey #(4, 3, 4) alu_ctl_sel(alu_ctl, func3, {
		`ysyx_23060201_FUNC3_ADDSUB, 4'b0000,
		`ysyx_23060201_FUNC3_XOR,    4'b0100,
		`ysyx_23060201_FUNC3_AND,    4'b0110,
		`ysyx_23060201_FUNC3_OR,     4'b0111
	});
	// ALU work
	ysyx_23060201_ALU ysyx_23060201_ALU(
		.a(alu_a),
		.b(alu_b),
		.ctl(alu_ctl),
		.res(wdata)
	);
	// dnpc
	MuxKeyWithDefault #(2, 7, 32) dnpc_sel(dnpc, op, snpc, {
		`ysyx_23060201_OP_TYPE_J,  pc + imm, 
		`ysyx_23060201_OP_TYPE_JR, (rdata1 + imm) & (~1)
	});

endmodule
