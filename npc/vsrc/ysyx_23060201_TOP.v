module ysyx_23060201_TOP(
	input clk,
	input rst,
	input [31:0] inst,
	output [31:0] inst_rd_val,
	output [31:0] pc
);// pc -> ifu -> idu -> exu
	// pc
	ysyx_23060201_PC ysyx_23060201_PC(
		.clk(clk),
		.rst(rst),
		.pc(pc)
	);
	// inst_split
	wire [6:0] inst_op;
	wire [2:0] inst_func3;
	wire [4:0] inst_rs1, inst_rd;
	wire [31:0] inst_imm;

	// opcode define
	localparam [6:0]
	
		OP_I_TYPE_1 = 7'b1100111, // jalr
		OP_I_TYPE_2 = 7'b0000011, // 
		OP_I_TYPE_3 = 7'b0010011, // addi, slti, sltiu, xori, ori ...

		OP_U_TYPE_1 = 7'b0110111, // lui
		OP_U_TYPE_2 = 7'b0010111, // auipc

		OP_J_TYPE = 7'b1101111;   // jal
	
	// imm_judge

	wire [31:0] imm_I = {{20{inst[31]}}, inst[31:20]};
	wire [31:0] imm_S = {{20{inst[31]}}, inst[31:25] << 5 | inst[11:7]};
	wire [31:0] imm_B = {{19{inst[31]}}, (inst[31] << 11 | inst[30:25] << 4 | inst[11:8] | inst[7] << 10) << 1};
	wire [31:0] imm_U = {inst[31:12] << 12};
	wire [31:0] imm_J = {{20{inst[31]}}, inst[31:20]};

	// inst_opcode -> inst_imm
	assign inst_op = inst[6:0];
	Muxkey #(6, 7, 32) i_type_imm_split(inst_imm, inst_op, {
		OP_I_TYPE_1, 
		OP_I_TYPE_2, 
		OP_I_TYPE_3, 

	})
	
	// ifu

	initial begin
		if ()

	// idu

	ysyx_23060201_IDU ysyx_23060201_IDU(
		.inst(inst),
		.inst_op(inst_op),
		.inst_func3(inst_func3),
		.inst_rs1(inst_rs1),
		.inst_rd(inst_rd),
		.inst_imm(inst_imm)
	);
	
	// exu
	ysyx_23060201_EXU ysyx_23060201_EXU(
		.clk(clk),
		.rst(rst),
		.inst_op(inst_op),
		.inst_func3(inst_func3),
		.inst_rs1(inst_rs1),
		.inst_rd(inst_rd),
		.inst_imm(inst_imm),
		.inst_rd_val(inst_rd_val)
	);

endmodule
