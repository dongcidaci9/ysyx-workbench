`include "defines.v"

module ysyx_23060201_EXU # (
  MEM_ADDR_WIDTH  = 32, 
  DATA_WIDTH      = 32
)
(
	input wire [MEM_ADDR_WIDTH-1:0] 	pc				,
	input wire [DATA_WIDTH-1:0] 		imm				,
	input wire [6:0] 					op				,
	input wire [4:0] 					rd				,
	input wire [2:0] 					func3			,
	input wire [6:0] 					func7			,
	input wire [DATA_WIDTH-1:0] 		rs1				, 
	input wire [DATA_WIDTH-1:0] 		rs2				, 
	// gpr
	output wire 						gpr_wen			,
	output wire [4:0] 					gpr_waddr		,
	output wire [31:0] 					gpr_wdata		,
	// mem
	output wire 						mem_wen			,
	output wire [MEM_ADDR_WIDTH-1:0] 	mem_waddr		,
	output wire [7:0] 					mem_wmask		,
	output wire [DATA_WIDTH-1:0] 		mem_wdata		,
	output wire 						mem_ren			,
	output wire [MEM_ADDR_WIDTH-1:0] 	mem_raddr		,
	output wire [7:0] 					mem_rmask		,
	input wire [DATA_WIDTH-1:0] 		mem_rdata		,

	output wire 						jump_en			,
	output wire [MEM_ADDR_WIDTH-1:0] 	dnpc 		
);

	wire [MEM_ADDR_WIDTH-1:0] 			snpc				;

	wire [DATA_WIDTH-1:0] 				alu_a				;
	wire [DATA_WIDTH-1:0] 				alu_b				;
	wire [3:0] 							alu_ctl				;
	wire [DATA_WIDTH-1:0] 				alu_res				;

	wire								eq					; 
	wire								lt					; 
	wire								ltu					; 
	wire [2:0] 							branch				;
	
	assign snpc	 		= pc + 'h4							;
	assign gpr_wen	 	= 1'b1								;

	// mem
	MuxKeyWithDefault #(1, 7, 1) mem_wen_sel(mem_wen, op, 1'b0, {
		`ysyx_23060201_OP_TYPE_S,	1'b1
	});

	MuxKeyWithDefault #(1, 7, 32) mem_waddr_sel(mem_waddr, op, 32'b0, {
		`ysyx_23060201_OP_TYPE_S,	rs1 + imm	
	});

	MuxKeyWithDefault #(1, 7, 32) mem_wdata_sel(mem_wdata, op, 32'b0, {
		`ysyx_23060201_OP_TYPE_S,	rs2
	});

	MuxKeyWithDefault #(3, 3, 8) mem_wmask_sel(mem_wmask, func3, 8'b0000, {
		`ysyx_23060201_FUNC3_B,		8'b0001,
		`ysyx_23060201_FUNC3_H,		8'b0011,
		`ysyx_23060201_FUNC3_W,		8'b1111
	});

	MuxKeyWithDefault #(1, 7, 1) mem_ren_sel(mem_ren, op, 1'b0, {
		`ysyx_23060201_OP_TYPE_IL,	1'b1
	});

	MuxKeyWithDefault #(1, 7, 32) mem_raddr_sel(mem_raddr, op, 32'b0, {
		`ysyx_23060201_OP_TYPE_IL,	rs1 + imm	
	});

	MuxKeyWithDefault #(5, 3, 8) mem_rmask_sel(mem_rmask, func3, 8'b0, {
		`ysyx_23060201_FUNC3_B,		8'b10001,
		`ysyx_23060201_FUNC3_H,		8'b10011,
		`ysyx_23060201_FUNC3_W,		8'b11111,
		`ysyx_23060201_FUNC3_BU,	8'b00001,
		`ysyx_23060201_FUNC3_HU,	8'b00011	
	});

	// alu
	MuxKeyWithDefault #(7, 7, 32) alu_a_sel(alu_a, op, 32'b0, {
		`ysyx_23060201_OP_TYPE_R	,   rs1,
		`ysyx_23060201_OP_TYPE_I	,   rs1,
		`ysyx_23060201_OP_TYPE_U	,   imm,
		`ysyx_23060201_OP_TYPE_UPC	, 	pc,
		`ysyx_23060201_OP_TYPE_B	,   rs1,
		`ysyx_23060201_OP_TYPE_J	,   snpc,
		`ysyx_23060201_OP_TYPE_JR	,  	snpc
	});

	MuxKeyWithDefault #(4, 7, 32) alu_b_sel(alu_b, op, 32'b0, {
		`ysyx_23060201_OP_TYPE_R 	,   rs2,
		`ysyx_23060201_OP_TYPE_I	,   imm,
		`ysyx_23060201_OP_TYPE_UPC	, 	imm,
		`ysyx_23060201_OP_TYPE_B	,   rs2
	});

	MuxKeyWithDefault #(8, 3, 3) alu_ctl_sel1(alu_ctl[2:0], func3, 3'b000, {
		`ysyx_23060201_FUNC3_ADDSUB	, 	3'b000,
		`ysyx_23060201_FUNC3_XOR	,   3'b100,
		`ysyx_23060201_FUNC3_OR		,   3'b110,
		`ysyx_23060201_FUNC3_AND	,   3'b111,
		`ysyx_23060201_FUNC3_SLL	,	3'b001,
		`ysyx_23060201_FUNC3_SR		,	3'b101,
		`ysyx_23060201_FUNC3_SLT	,	3'b010,
		`ysyx_23060201_FUNC3_SLTU	,	3'b011
	});

	MuxKeyWithDefault #(2, 7, 1) alu_ctl_sel2(alu_ctl[3], func7, 1'b0, {
		`ysyx_23060201_FUNC7_SUB	, 	1'b1,
		`ysyx_23060201_FUNC7_SRA	, 	1'b1
	});

	// gpr
	MuxKeyWithDefault #(2, 7, 1) gpr_wen_sel(gpr_wen, op, 1'b1, {
		`ysyx_23060201_OP_TYPE_S,   1'b0,
		`ysyx_23060201_OP_TYPE_B,   1'b0
	});

	MuxKeyWithDefault #(2, 7, 5) gpr_waddr_sel(gpr_waddr, op, rd, {
		`ysyx_23060201_OP_TYPE_S,   5'b0,
		`ysyx_23060201_OP_TYPE_B,   5'b0
	});
	
	MuxKeyWithDefault #(1, 7, 32) gpr_wdata_sel(gpr_wdata, op, alu_res, {
		`ysyx_23060201_OP_TYPE_IL	,	mem_rdata
	});

	// ALU work
	ysyx_23060201_ALU ysyx_23060201_ALU(
		.a(alu_a),
		.b(alu_b),
		.ctl(alu_ctl),
		.res(alu_res),
		.eq(eq),
		.lt(lt),
		.ltu(ltu)
	);

	MuxKeyWithDefault #(8, 10, 3) branch_sel(branch, {op, func3}, 3'b0, {
		`ysyx_23060201_INST_JAL		,	3'b001,	
		`ysyx_23060201_INST_JALR	,	3'b010,	
		`ysyx_23060201_INST_BEQ		,	3'b100,	
		`ysyx_23060201_INST_BNE		,	3'b101,	
		`ysyx_23060201_INST_BLT		,	3'b110,	
		`ysyx_23060201_INST_BGE		,	3'b111,	
		`ysyx_23060201_INST_BLTU	,	3'b110,	
		`ysyx_23060201_INST_BGEU	,	3'b111	
	});

	MuxKeyWithDefault #(8, 6, 1) jump_en_sel(jump_en, {branch, eq, lt, ltu}, 1'b0, { 
		6'b001xxx,	1'b1,
		6'b010xxx,	1'b1,
		6'b1001xx,	1'b1,
		6'b1010xx,	1'b1,
		6'b110x1x,	1'b1,
		6'b111x0x,	1'b1,
		6'b110xx1,	1'b1,
		6'b111x0x,	1'b1
	});	
	
	MuxKeyWithDefault #(3, 7, 32) dnpc_sel(dnpc, op, snpc, {
		`ysyx_23060201_OP_TYPE_B,  pc + imm, 
		`ysyx_23060201_OP_TYPE_J,  pc + imm, 
		`ysyx_23060201_OP_TYPE_JR, (rs1 + imm) & (~1)
	});

endmodule
