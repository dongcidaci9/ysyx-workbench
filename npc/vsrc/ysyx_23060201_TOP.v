`include "defines.v"

module ysyx_23060201_TOP(clk, rst, pc, inst);
	input clk;
	input rst;
	output [31:0] inst;
	output reg [31:0] pc;

	wire gpr_clk											;	
	wire mem_ren											;
	
	wire [31:0] wire_dnpc									;
	wire [6:0] wire_op										;
	wire [2:0] wire_func3									;
	wire [4:0] wire_rd										;
	wire [31:0] wire_imm									;

	wire wire_gpr_wen										;
	wire [1:0] wire_gpr_ren									;
	wire [4:0] wire_waddr									;
	wire [31:0] wire_wdata									;
	wire [4:0] wire_raddr1, wire_raddr2						;
	wire [31:0] wire_rdata1, wire_rdata2					;

	wire [31:0] wire_pc										;
	wire [31:0] wire_inst									;

	assign mem_ren = (pc > `MBASE) ? 'b1 : 'b0				; 
	assign pc = wire_pc										;
	assign inst = wire_inst									;			

	// pc
	ysyx_23060201_PC ysyx_23060201_PC(
		.clk(clk),
		.rst(rst),
		.dnpc(wire_dnpc),
		.pc(wire_pc)
	);
	
	// mem 
	ysyx_23060201_MEM ysyx_23060201_MEM(
		.mem_ren(mem_ren),
		.mem_raddr(wire_pc),
		.mem_rdata(wire_inst)	
	);

	// idu
	ysyx_23060201_IDU ysyx_23060201_IDU(
		.inst(wire_inst),
		.inst_imm(wire_imm),
		.inst_op(wire_op),
		.inst_rd(wire_rd),
		.inst_func3(wire_func3),

		.gpr_ren(wire_gpr_ren),
		.raddr1(wire_raddr1),
		.raddr2(wire_raddr2)
	);

	// exu
	ysyx_23060201_EXU ysyx_23060201_EXU(
		.clk_a(clk),
		.pc(pc),

		.imm(wire_imm),
		.op(wire_op),
		.rd(wire_rd),
		.func3(wire_func3),
		// .raddr2(5'bz),
		.rdata1(wire_rdata1),
		.rdata2(wire_rdata2),

		.clk_b(gpr_clk),
		.gpr_wen(wire_gpr_wen),
		.waddr(wire_waddr),
		.wdata(wire_wdata),
		.dnpc(wire_dnpc)
	);

	ysyx_23060201_GPR ysyx_23060201_GPR(
		.clk(gpr_clk),
		// .rst(rst),
		.gpr_ren(wire_gpr_ren),
		.gpr_wen(wire_gpr_wen),
		.raddr1(wire_raddr1),
		.raddr2(wire_raddr2),
		.waddr(wire_waddr),
		.wdata(wire_wdata),
		.rdata1(wire_rdata1),
		.rdata2(wire_rdata2)
	);
endmodule
