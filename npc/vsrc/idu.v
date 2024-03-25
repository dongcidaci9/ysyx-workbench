module ysyx_23060201_IDU(
	input [31:0] inst,
	output [9:0] inst_type, 
	output [4:0] inst_rs1, inst_rs2, inst_rd,
	output [31:0] inst_imm // RV64
); // inst -> type_judge -> inst_split_type(op, func3) -> rs1, rs2, rd, imm

	// type_judge // addi
	wire [6:0] op;
	wire [2:0] func3;
	wire [4:0] rs1, rs2, rd;
	wire [11:0] imm;

	// inst_split_type
	assign op = inst[6:0];
	assign func3 = inst[12:14];
	assign inst_type = {func3, op};

	// rs1, rs2, rd, imm
	assign rs1 = inst[19:15];
	assign rs2 = 5'b0;
	assign rd = inst[11:7];
	assign imm = inst[31:20];

	assign inst_rs1 = rs1;
	assign inst_rs2 = rs2;
	assign inst_rd = rd;

	// sign extension
	wire [31:0] imm_ext;
	assign imm_ext = {{20{imm[11]}}, inst[10:0]};
	assign inst_imm = imm_ext;

	// DPI-C
	import "DPI-C" function void npc_trap();
	always @(*) begin
		if (inst_type == 10'b0001110011) begin
			npc_trap();
		end
	end
	
endmodule

