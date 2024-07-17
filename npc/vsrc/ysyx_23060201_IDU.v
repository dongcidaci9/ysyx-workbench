module ysyx_23060201_IDU(
	input [31:0] inst,
	output [6:0] inst_op,
	output [2:0] inst_func3,
	output [4:0] inst_rs1, inst_rs2, inst_rd,
	output [31:0] inst_imm // RV64
); // inst split -> type define rs1, rs2, rd, imm
	
	// inst_split: opcode & index_rs1 & index_rs2 & index_rd
	assign [6:0] inst_op = inst[6:0];
	assign [4:0] inst_rs1 = inst[19:15];
	assign [4:0] inst_rs2 = inst[24:20];
	assign [4:0] inst_rd = inst[11:7];

	// opcode define
	localparam [6:0]
		OP_I_TYPE_1 = 7'b1100111, // jalr
		OP_I_TYPE_2 = 7'b0000011, // 
		OP_I_TYPE_3 = 7'b0010011, // addi, slti, sltiu, xori, ori ...
		
		OP_U_TYPE_1 = 7'b0110111, // lui
		OP_U_TYPE_2 = 7'b0010111, // auipc
		
		OP_J_TYPE = 7'b1101111;   // jal
	
	// inst type define
	localparam [2:0]
		TYPE_R = 3'b000,
    	TYPE_I = 3'b001,
    	TYPE_S = 3'b010,
    	TYPE_B = 3'b011,
    	TYPE_U = 3'b100,
    	TYPE_J = 3'b101;
	wire [2:0] TYPE;
	MuxKey #(6, 3, 3) type_def(TYPE, inst_op, {
		OP_I_TYPE_1
	});


	// imm define
	wire [31:0] imm_I = {{20{inst[31]}}, inst[31:20]};
	wire [31:0] imm_S = {{20{inst[31]}}, inst[31:25] << 5 | inst[11:7]};
	wire [31:0] imm_B = {{19{inst[31]}}, (inst[31] << 11 | inst[30:25] << 4 | inst[11:8] | inst[7] << 10) << 1};
	wire [31:0] imm_U = {inst[31:12] << 12};
	wire [31:0] imm_J = {{11{inst[31]}}, (inst[31] << 19 | inst[30:21] | inst[20:20] << 10 | inst[19:12] << 11) << 1};

	// inst_opcode -> inst_imm
	wire [31:0] inst_imm;
	Muxkey #(6, 7, 32) i_type_imm_split(inst_imm, inst_op, {
		OP_I_TYPE_1, imm_I,
		OP_I_TYPE_2, imm_I,
		OP_I_TYPE_3, imm_I,
		OP_U_TYPE_1, imm_U,
		OP_U_TYPE_2, imm_U,
		OP_J_TYPE,   imm_B
	});
	
	// DPI-C
	import "DPI-C" function void npc_trap();
	always @(*) begin
		if (inst_op == 7'b1110011 && inst_func3 == 3'b000) begin
			npc_trap();
		end
	end
	
endmodule

