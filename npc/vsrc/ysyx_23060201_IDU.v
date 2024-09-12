`include "defines.v"

module ysyx_23060201_IDU(
	input wire [31:0] inst,
	output wire [31:0] inst_imm, 
	output wire [6:0] inst_op,
	output wire [4:0] inst_rd,
	output wire [2:0] inst_func3,
	output wire [6:0] inst_func7,
	// gpr
	output wire [1:0] gpr_ren,
	output wire [4:0] raddr1,
	output wire [4:0] raddr2
);
 
	wire [4:0] inst_rs1;
	wire [4:0] inst_rs2;

	wire [31:0] imm_I;
	wire [31:0] imm_S;
	wire [31:0] imm_B;
	wire [31:0] imm_U;
	wire [31:0] imm_J;

	assign inst_op 		= inst[6:0]						;
	assign inst_rd 		= inst[11:7]					;
	assign inst_func7 	= inst[31:25]					;
	assign inst_rs1 	= inst[19:15]					;
	assign inst_rs2 	= inst[24:20]					;
	assign raddr1 		= inst_rs1						;
	assign raddr2 		= inst_rs2						;

	// imm 
	assign imm_I = {{20{inst[31]}}, inst[31:20]}									;
	assign imm_S = {{20{inst[31]}}, inst[31:25], inst[11:7]}						;
	assign imm_B = {{20{inst[31]}}, inst[7], inst[30:25], inst[11:8], 1'b0}			;
	assign imm_U = {inst[31:12], 12'b0}												;
	assign imm_J = {{12{inst[31]}}, inst[19:12], inst[20:20], inst[30:21], 1'b0}	;

	MuxKeyWithDefault #(2, 7, 3) func3_aupic(inst_func3, inst_op, inst[14:12], {
		`ysyx_23060201_OP_TYPE_U	,	3'b000,
		`ysyx_23060201_OP_TYPE_UPC	,	3'b000
	});

	MuxKey #(8, 7, 32) imm_sel(inst_imm, inst_op, {
		`ysyx_23060201_OP_TYPE_I,   imm_I,	
		`ysyx_23060201_OP_TYPE_IL,  imm_I,	
		`ysyx_23060201_OP_TYPE_S,   imm_S,	
		`ysyx_23060201_OP_TYPE_B,   imm_B,	
		`ysyx_23060201_OP_TYPE_U,   imm_U,	
		`ysyx_23060201_OP_TYPE_UPC, imm_U,	
		`ysyx_23060201_OP_TYPE_J,   imm_J,	
		`ysyx_23060201_OP_TYPE_JR,  imm_I	
	});

	// branch branch_en(op == TYPEB)
	// branch branch_ctl(zero, less than, less than (unsigned))
	// branch 
	/////////////////////////////////////////////////////
	/*                   g p r read                    */ 
	/////////////////////////////////////////////////////
	
	// read R(rs1), R(rs2)
	// gpr: ren[0] -> R(rs1), gpr_ren[1] -> R(rs2)
	MuxKeyWithDefault #(9, 7, 2) gpr_ren_sel(gpr_ren, inst_op, 2'b00, {
		`ysyx_23060201_OP_TYPE_R,   2'b11,	
		`ysyx_23060201_OP_TYPE_I,   2'b01,	
		`ysyx_23060201_OP_TYPE_IL,  2'b01,	
		`ysyx_23060201_OP_TYPE_S,   2'b11,	
		`ysyx_23060201_OP_TYPE_B,   2'b11,	
		`ysyx_23060201_OP_TYPE_U,   2'b00,	
		`ysyx_23060201_OP_TYPE_UPC, 2'b00,	
		`ysyx_23060201_OP_TYPE_J,   2'b00,	
		`ysyx_23060201_OP_TYPE_JR,  2'b01
	});


	// DPI-C
	import "DPI-C" function void npc_trap();
	always @(*) begin
		if (inst_op == 7'b1110011 && inst_func3 == 3'b000) begin
			npc_trap();
		end
	end
	
endmodule

