module ysyx_23060201_TOP(clk, rst, inst, pc);
	input clk;
	input rst;
	input [31:0] inst;
	output [31:0] pc;

	// wire [31:0] wire_inst;
	// wire [31:0] wire_pc;

	/*
	// ifu
	ysyx_23060201_IFU ysyx_23060201_IFU(
		.pc(wire_pc),
		.inst(wire_inst)
	);
	*/
	wire [31:0] wire_dnpc					;
	wire [6:0] wire_op						;
	wire [2:0] wire_func3					;
	wire [4:0] wire_rd						;
	wire [31:0] wire_imm					;

	wire gpr_clk							;	
	wire wire_wen							;
	wire [1:0] wire_ren						;
	wire [4:0] wire_waddr					;
	wire [31:0] wire_wdata					;
	wire [4:0] wire_raddr1, wire_raddr2		;
	wire [31:0] wire_rdata1, wire_rdata2	;

	// pc
	ysyx_23060201_PC ysyx_23060201_PC(
		.clk(clk),
		.rst(rst),
		.dnpc(wire_dnpc),
		.pc(pc)
	);

	// idu
	ysyx_23060201_IDU ysyx_23060201_IDU(
		.inst(inst),
		.inst_imm(wire_imm),
		.inst_op(wire_op),
		.inst_rd(wire_rd),
		.inst_func3(wire_func3),

		.ren(wire_ren),
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
		.wen(wire_wen),
		.waddr(wire_waddr),
		.wdata(wire_wdata),
		.dnpc(wire_dnpc)
	);

	ysyx_23060201_GPR ysyx_23060201_GPR(
		.clk(gpr_clk),
		// .rst(rst),
		.ren(wire_ren),
		.wen(wire_wen),
		.raddr1(wire_raddr1),
		.raddr2(wire_raddr2),
		.waddr(wire_waddr),
		.wdata(wire_wdata),
		.rdata1(wire_rdata1),
		.rdata2(wire_rdata2)
	);
endmodule
