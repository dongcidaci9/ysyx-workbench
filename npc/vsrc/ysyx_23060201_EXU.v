`include "defines.v"

module ysyx_23060201_EXU(
	input wire 			clk_a			,
	input wire [31:0] 	pc				,
	input wire [31:0] 	imm				,
	input wire [6:0] 	op				,
	input wire [4:0] 	rd				,
	input wire [2:0] 	func3			,
	input wire [6:0] 	func7			,
	input wire [31:0] 	rs1				,  
	input wire [31:0] 	rs2				, 
	// gpr
	output wire 		clk_b			,
	output wire 		gpr_wen			,
	output wire [4:0] 	gpr_waddr		,
	output wire [31:0] 	gpr_wdata		,
	// mem
	output wire 		mem_wen			,
	output wire [31:0] 	mem_waddr		,
	output wire [31:0] 	mem_wdata		,
	output wire [7:0] 	mem_wmask		,
	// pc	
	output wire [31:0] 	dnpc
);

	// alu signal
	wire [31:0] snpc					;
	wire [31:0] alu_a					;
	wire [31:0] alu_b					;
	wire [3:0] 	alu_ctl					;

	// gpr
	assign clk_b 		= clk_a				;
	assign gpr_wen	 	= 1'b1				;
	// mem
	assign mem_wen 		= (op != `ysyx_23060201_OP_TYPE_S) ? 'b0 	: 'b1		; 
	assign mem_waddr 	= (op != `ysyx_23060201_OP_TYPE_S) ? 32'b0 	: rs1 + imm	; 
	assign mem_wdata 	= (op != `ysyx_23060201_OP_TYPE_S) ? 32'b0 	: rs2		;	 
	// dnpc, snpc
	assign snpc 		= pc + 4			;

	// gpr
	MuxKeyWithDefault #(2, 7, 5) gpr_waddr_sel(gpr_waddr, op, rd, {
		`ysyx_23060201_OP_TYPE_S,   5'b0,
		`ysyx_23060201_OP_TYPE_B,   5'b0
	});

	// mem
	/*	
	MuxKeyWithDefault #(1, 7, 1) mem_wen_sel(mem_wen, op, 1'b0, {
		`ysyx_23060201_OP_TYPE_S,	1'b1
	});

	MuxKeyWithDefault #(1, 7, 32) mem_waddr_sel(mem_waddr, op, 32'b0, {
		`ysyx_23060201_OP_TYPE_S,	rs1 + imm	
	});
	
	MuxKeyWithDefault #(1, 7, 32) mem_wdata_sel(mem_wdata, op, 32'b0, {
		`ysyx_23060201_OP_TYPE_S,	rs2 	
	});
	*/
	MuxKeyWithDefault #(3, 3, 8) mem_wmask_sel(mem_wmask, func3, 8'b0000, {
		`ysyx_23060201_FUNC3_SB,	8'b0001,
		`ysyx_23060201_FUNC3_SH,	8'b0011,
		`ysyx_23060201_FUNC3_SW,	8'b1111
	});

	// alu
	MuxKeyWithDefault #(6, 7, 32) alu_a_sel(alu_a, op, 32'b0, {
		`ysyx_23060201_OP_TYPE_R,   rs1,
		`ysyx_23060201_OP_TYPE_I,   rs1,
		`ysyx_23060201_OP_TYPE_U,   imm,
		`ysyx_23060201_OP_TYPE_UPC, pc,
		`ysyx_23060201_OP_TYPE_J,   snpc,
		`ysyx_23060201_OP_TYPE_JR,  snpc
	});

	MuxKeyWithDefault #(3, 7, 32) alu_b_sel(alu_b, op, 32'b0, {
		`ysyx_23060201_OP_TYPE_R,   rs2,
		`ysyx_23060201_OP_TYPE_I,   imm,
		`ysyx_23060201_OP_TYPE_UPC, imm
	});
	MuxKey #(8, 3, 3) alu_ctl_sel1(alu_ctl[2:0], func3, {
		`ysyx_23060201_FUNC3_ADDSUB	, 	3'b000,
		`ysyx_23060201_FUNC3_XOR	,   3'b100,
		`ysyx_23060201_FUNC3_OR		,   3'b111,
		`ysyx_23060201_FUNC3_AND	,   3'b110,
		`ysyx_23060201_FUNC3_SLL	,	3'b001,
		`ysyx_23060201_FUNC3_SR		,	3'b101,
		`ysyx_23060201_FUNC3_SLT	,	3'b010,
		`ysyx_23060201_FUNC3_SLTU	,	3'b011
	});

	MuxKeyWithDefault #(2, 7, 1) alu_ctl_sel2(alu_ctl[3], func7, 1'b0, {
		`ysyx_23060201_FUNC7_SUB	, 	1'b1,
		`ysyx_23060201_FUNC7_SRA	, 	1'b1
	});

	// ALU work
	ysyx_23060201_ALU ysyx_23060201_ALU(
		.a(alu_a),
		.b(alu_b),
		.ctl(alu_ctl),
		.res(gpr_wdata)
	);
	// dnpc
	MuxKeyWithDefault #(2, 7, 32) dnpc_sel(dnpc, op, snpc, {
		`ysyx_23060201_OP_TYPE_J,  pc + imm, 
		`ysyx_23060201_OP_TYPE_JR, (rs1 + imm) & (~1)
	});

endmodule
