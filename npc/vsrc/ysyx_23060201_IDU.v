module ysyx_23060201_IDU(
	input [31:0] inst,
	output [6:0] inst_op,
	output [2:0] inst_func3,
	output [4:0] inst_rs1, inst_rd,
	output [31:0] inst_imm // RV64
); // inst -> type_judge -> inst_split_type(op, func3) -> rs1, rs2, rd, imm


	// inst_split_type
	wire [11:0] imm;

	assign inst_op = inst[6:0];
	assign inst_func3 = inst[14:12];
	assign inst_rs1 = inst[19:15];
	assign inst_rd = inst[11:7];
	assign imm = inst[31:20];

	// sign extension
	wire [31:0] imm_ext;
	assign imm_ext = {{20{imm[11]}}, imm[11:0]};
	assign inst_imm = imm_ext;

	// DPI-C
	import "DPI-C" function void npc_trap();
	always @(*) begin
		if (inst_op == 7'b1110011 && inst_func3 == 3'b000) begin
			npc_trap();
		end
	end
	
endmodule

