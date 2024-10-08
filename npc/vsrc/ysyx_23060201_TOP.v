`include "defines.v"

module ysyx_23060201_TOP # 
(
	GPR_ADDR_WIDTH  = 5, 
	MEM_ADDR_WIDTH  = 32, 
	DATA_WIDTH  	= 32 
)
(
	input wire 			clk									,
	input wire 			rst_n								,
	output wire [31:0] 	inst								,
	output wire	[31:0] 	pc
);

	// pc
	wire [MEM_ADDR_WIDTH-1:0] 	wire_pc						;	
	wire						wire_jump_en				;
	wire [MEM_ADDR_WIDTH-1:0] 	wire_dnpc					;	
	
	// ifu
	wire [31:0] 					wire_inst				;
	wire [6:0] 						wire_op					;	
	wire [2:0] 						wire_func3				;
	wire [6:0] 						wire_func7				;
	wire [4:0] 						wire_rd					;	
	wire [31:0] 					wire_imm				;	
	
	// gpr
	wire 							wire_gpr_wen			;
	wire [1:0] 						wire_gpr_ren			;
	wire [GPR_ADDR_WIDTH-1:0] 		wire_gpr_waddr			;
	wire [DATA_WIDTH-1:0] 			wire_gpr_wdata			;
	wire [DATA_WIDTH-1:0] 			wire_gpr_rdata1			;
	wire [DATA_WIDTH-1:0] 			wire_gpr_rdata2			;
	wire [GPR_ADDR_WIDTH-1:0] 		wire_gpr_raddr1			;
	wire [GPR_ADDR_WIDTH-1:0] 		wire_gpr_raddr2 		;

	// mem
	wire 							wire_mem_ren 			;
	wire [MEM_ADDR_WIDTH-1:0] 		wire_mem_raddr			;	
	wire [7:0] 						wire_mem_rmask			;
	wire [DATA_WIDTH-1:0] 			wire_mem_rdata			;
	wire [DATA_WIDTH-1:0] 			wire_mem_wdata			;
	wire [7:0] 						wire_mem_wmask			;
	wire 							wire_mem_wen 			;
	wire [MEM_ADDR_WIDTH-1:0] 		wire_mem_waddr			;

	assign pc 	= 	wire_pc									;
	assign inst = 	wire_inst								;			

	// ifu 
	ysyx_23060201_IFU ysyx_23060201_IFU(
		.clk(clk),
		.rst_n(rst_n),
		.jump_en(wire_jump_en),
		.dnpc(wire_dnpc),
		.pc(wire_pc),
		.inst(wire_inst)
	);

	// idu
	ysyx_23060201_IDU ysyx_23060201_IDU(
		.inst(wire_inst),
		.inst_imm(wire_imm),
		.inst_op(wire_op),
		.inst_rd(wire_rd),
		.inst_func3(wire_func3),
		.inst_func7(wire_func7),

		.gpr_ren(wire_gpr_ren),
		.raddr1(wire_gpr_raddr1),
		.raddr2(wire_gpr_raddr2)
	);

	// exu
	ysyx_23060201_EXU ysyx_23060201_EXU(
		.pc(pc),
		.imm(wire_imm),
		.op(wire_op),
		.rd(wire_rd),
		.func3(wire_func3),
		.func7(wire_func7),
		.rs1(wire_gpr_rdata1),
		.rs2(wire_gpr_rdata2),

		.gpr_wen(wire_gpr_wen),
		.gpr_waddr(wire_gpr_waddr),
		.gpr_wdata(wire_gpr_wdata),

		.mem_wen(wire_mem_wen),
		.mem_waddr(wire_mem_waddr),
		.mem_wdata(wire_mem_wdata),
		.mem_wmask(wire_mem_wmask),
		.mem_ren(wire_mem_ren),
		.mem_raddr(wire_mem_raddr),
		.mem_rmask(wire_mem_rmask),
		.mem_rdata(wire_mem_rdata),

		.jump_en(wire_jump_en),
		.dnpc(wire_dnpc)
	);

	ysyx_23060201_GPR ysyx_23060201_GPR(
		.clk(clk),
		// .rst_n(rst_n),
		.gpr_ren(wire_gpr_ren),
		.gpr_wen(wire_gpr_wen),
		.gpr_waddr(wire_gpr_waddr),
		.gpr_wdata(wire_gpr_wdata),
		.gpr_raddr1(wire_gpr_raddr1),
		.gpr_raddr2(wire_gpr_raddr2),
		.gpr_rdata1(wire_gpr_rdata1),
		.gpr_rdata2(wire_gpr_rdata2)
	);
	
	// mem 
	ysyx_23060201_MEM ysyx_23060201_MEM(
		.clk(clk),
		// .rst_n(rst_n),
		.mem_wen(wire_mem_wen),
		.mem_waddr(wire_mem_waddr),
		.mem_wdata(wire_mem_wdata),
		.mem_wmask(wire_mem_wmask),
		.mem_ren(wire_mem_ren),
		.mem_raddr(wire_mem_raddr),
		.mem_rmask(wire_mem_rmask),
		.mem_rdata(wire_mem_rdata)
	);

endmodule
