module ysyx_23060201_GPR(
	input rst,
	input [4:0] inst_rs1, inst_rd,
	output [31:0] inst_rs1_val_out,

	input [31:0] inst_rd_val_in
);
		
	wire [31:0] inst_reg_val_in [31:0];
	wire [31:0] inst_reg_val_out [31:0];

	wire [31:0] sel;
	assign sel[31:0] = 32'b0;

	Reg #(32, 32'b0) x0 (sel[0], rst, inst_reg_val_in[0], inst_reg_val_out[0], 1'b1);
	Reg #(32, 32'b0) x1 (sel[1], rst, inst_reg_val_in[1], inst_reg_val_out[1], 1'b1);
	Reg #(32, 32'b0) x2 (sel[2], rst, inst_reg_val_in[2], inst_reg_val_out[2], 1'b1);
	Reg #(32, 32'b0) x3 (sel[3], rst, inst_reg_val_in[3], inst_reg_val_out[3], 1'b1);
	Reg #(32, 32'b0) x4 (sel[4], rst, inst_reg_val_in[4], inst_reg_val_out[4], 1'b1);
	Reg #(32, 32'b0) x5 (sel[5], rst, inst_reg_val_in[5], inst_reg_val_out[5], 1'b1);
	Reg #(32, 32'b0) x6 (sel[6], rst, inst_reg_val_in[6], inst_reg_val_out[6], 1'b1);
	Reg #(32, 32'b0) x7 (sel[7], rst, inst_reg_val_in[7], inst_reg_val_out[7], 1'b1);
	Reg #(32, 32'b0) x8 (sel[8], rst, inst_reg_val_in[8], inst_reg_val_out[8], 1'b1);
	Reg #(32, 32'b0) x9 (sel[9], rst, inst_reg_val_in[9], inst_reg_val_out[9], 1'b1);
	Reg #(32, 32'b0) x10 (sel[10], rst, inst_reg_val_in[10], inst_reg_val_out[10], 1'b1);
	Reg #(32, 32'b0) x11 (sel[11], rst, inst_reg_val_in[11], inst_reg_val_out[11], 1'b1);
	Reg #(32, 32'b0) x12 (sel[12], rst, inst_reg_val_in[12], inst_reg_val_out[12], 1'b1);
	Reg #(32, 32'b0) x13 (sel[13], rst, inst_reg_val_in[13], inst_reg_val_out[13], 1'b1);
	Reg #(32, 32'b0) x14 (sel[14], rst, inst_reg_val_in[14], inst_reg_val_out[14], 1'b1);
	Reg #(32, 32'b0) x15 (sel[15], rst, inst_reg_val_in[15], inst_reg_val_out[15], 1'b1);
	Reg #(32, 32'b0) x16 (sel[16], rst, inst_reg_val_in[16], inst_reg_val_out[16], 1'b1);
	Reg #(32, 32'b0) x17 (sel[17], rst, inst_reg_val_in[17], inst_reg_val_out[17], 1'b1);
	Reg #(32, 32'b0) x18 (sel[18], rst, inst_reg_val_in[18], inst_reg_val_out[18], 1'b1);
	Reg #(32, 32'b0) x19 (sel[19], rst, inst_reg_val_in[19], inst_reg_val_out[19], 1'b1);
	Reg #(32, 32'b0) x20 (sel[20], rst, inst_reg_val_in[20], inst_reg_val_out[20], 1'b1);
	Reg #(32, 32'b0) x21 (sel[21], rst, inst_reg_val_in[21], inst_reg_val_out[21], 1'b1);
	Reg #(32, 32'b0) x22 (sel[22], rst, inst_reg_val_in[22], inst_reg_val_out[22], 1'b1);
	Reg #(32, 32'b0) x23 (sel[23], rst, inst_reg_val_in[23], inst_reg_val_out[23], 1'b1);
	Reg #(32, 32'b0) x24 (sel[24], rst, inst_reg_val_in[24], inst_reg_val_out[24], 1'b1);
	Reg #(32, 32'b0) x25 (sel[25], rst, inst_reg_val_in[25], inst_reg_val_out[25], 1'b1);
	Reg #(32, 32'b0) x26 (sel[26], rst, inst_reg_val_in[26], inst_reg_val_out[26], 1'b1);
	Reg #(32, 32'b0) x27 (sel[27], rst, inst_reg_val_in[27], inst_reg_val_out[27], 1'b1);
	Reg #(32, 32'b0) x28 (sel[28], rst, inst_reg_val_in[28], inst_reg_val_out[28], 1'b1);
	Reg #(32, 32'b0) x29 (sel[29], rst, inst_reg_val_in[29], inst_reg_val_out[29], 1'b1);
	Reg #(32, 32'b0) x30 (sel[30], rst, inst_reg_val_in[30], inst_reg_val_out[30], 1'b1);
	Reg #(32, 32'b0) x31 (sel[31], rst, inst_reg_val_in[31], inst_reg_val_out[31], 1'b1);

	// Get the value
	assign inst_rs1_val_out = inst_reg_val_out[inst_rs1];
	
	assign sel[inst_rs1] = 1'b1;
	assign sel[inst_rd] = 1'b1;

	// Save the changed value
	assign inst_reg_val_in[inst_rd] = inst_rd_val_in;

endmodule
