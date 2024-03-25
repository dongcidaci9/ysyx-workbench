module ysyx_23060201_REG(
	input rst,
	input [4:0] inst_rd,
	input [31:0] inst_rd_val_sfin,
	output [31:0] inst_rd_val_out
);
		
	wire [31:0] inst_reg_val_sfin [31:0];
	wire [31:0] inst_reg_val_out [31:0];

	wire [31:0] sel;
	assign sel[31:0] = 32'b0;
	assign sel[inst_rd] = 1'b1;
	assign inst_rd_val_out = inst_reg_val_out[inst_rd];

	Reg #(32, 32'b0) x0 (sel[0], rst, inst_reg_val_sfin[0], inst_reg_val_out[0], 1'b1);
	Reg #(32, 32'b0) x1 (sel[1], rst, inst_reg_val_sfin[1], inst_reg_val_out[1], 1'b1);
	Reg #(32, 32'b0) x2 (sel[2], rst, inst_reg_val_sfin[2], inst_reg_val_out[2], 1'b1);
	Reg #(32, 32'b0) x3 (sel[3], rst, inst_reg_val_sfin[3], inst_reg_val_out[3], 1'b1);
	Reg #(32, 32'b0) x4 (sel[4], rst, inst_reg_val_sfin[4], inst_reg_val_out[4], 1'b1);
	Reg #(32, 32'b0) x5 (sel[5], rst, inst_reg_val_sfin[5], inst_reg_val_out[5], 1'b1);
	Reg #(32, 32'b0) x6 (sel[6], rst, inst_reg_val_sfin[6], inst_reg_val_out[6], 1'b1);
	Reg #(32, 32'b0) x7 (sel[7], rst, inst_reg_val_sfin[7], inst_reg_val_out[7], 1'b1);
	Reg #(32, 32'b0) x8 (sel[8], rst, inst_reg_val_sfin[8], inst_reg_val_out[8], 1'b1);
	Reg #(32, 32'b0) x9 (sel[9], rst, inst_reg_val_sfin[9], inst_reg_val_out[9], 1'b1);
	Reg #(32, 32'b0) x10 (sel[10], rst, inst_reg_val_sfin[10], inst_reg_val_out[10], 1'b1);
	Reg #(32, 32'b0) x11 (sel[11], rst, inst_reg_val_sfin[11], inst_reg_val_out[11], 1'b1);
	Reg #(32, 32'b0) x12 (sel[12], rst, inst_reg_val_sfin[12], inst_reg_val_out[12], 1'b1);
	Reg #(32, 32'b0) x13 (sel[13], rst, inst_reg_val_sfin[13], inst_reg_val_out[13], 1'b1);
	Reg #(32, 32'b0) x14 (sel[14], rst, inst_reg_val_sfin[14], inst_reg_val_out[14], 1'b1);
	Reg #(32, 32'b0) x15 (sel[15], rst, inst_reg_val_sfin[15], inst_reg_val_out[15], 1'b1);
	Reg #(32, 32'b0) x16 (sel[16], rst, inst_reg_val_sfin[16], inst_reg_val_out[16], 1'b1);
	Reg #(32, 32'b0) x17 (sel[17], rst, inst_reg_val_sfin[17], inst_reg_val_out[17], 1'b1);
	Reg #(32, 32'b0) x18 (sel[18], rst, inst_reg_val_sfin[18], inst_reg_val_out[18], 1'b1);
	Reg #(32, 32'b0) x19 (sel[19], rst, inst_reg_val_sfin[19], inst_reg_val_out[19], 1'b1);
	Reg #(32, 32'b0) x20 (sel[20], rst, inst_reg_val_sfin[20], inst_reg_val_out[20], 1'b1);
	Reg #(32, 32'b0) x21 (sel[21], rst, inst_reg_val_sfin[21], inst_reg_val_out[21], 1'b1);
	Reg #(32, 32'b0) x22 (sel[22], rst, inst_reg_val_sfin[22], inst_reg_val_out[22], 1'b1);
	Reg #(32, 32'b0) x23 (sel[23], rst, inst_reg_val_sfin[23], inst_reg_val_out[23], 1'b1);
	Reg #(32, 32'b0) x24 (sel[24], rst, inst_reg_val_sfin[24], inst_reg_val_out[24], 1'b1);
	Reg #(32, 32'b0) x25 (sel[25], rst, inst_reg_val_sfin[25], inst_reg_val_out[25], 1'b1);
	Reg #(32, 32'b0) x26 (sel[26], rst, inst_reg_val_sfin[26], inst_reg_val_out[26], 1'b1);
	Reg #(32, 32'b0) x27 (sel[27], rst, inst_reg_val_sfin[27], inst_reg_val_out[27], 1'b1);
	Reg #(32, 32'b0) x28 (sel[28], rst, inst_reg_val_sfin[28], inst_reg_val_out[28], 1'b1);
	Reg #(32, 32'b0) x29 (sel[29], rst, inst_reg_val_sfin[29], inst_reg_val_out[29], 1'b1);
	Reg #(32, 32'b0) x30 (sel[30], rst, inst_reg_val_sfin[30], inst_reg_val_out[30], 1'b1);
	Reg #(32, 32'b0) x31 (sel[31], rst, inst_reg_val_sfin[31], inst_reg_val_out[31], 1'b1);

	assign inst_reg_val_sfin[inst_rd] = inst_rd_val_sfin;

endmodule
