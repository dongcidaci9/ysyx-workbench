module ysyx_23060201_GPR(
	input clk,
	input rst,
	input [4:0] inst_rs1, inst_rd,
	output [31:0] inst_rs1_val_out,

	input [31:0] inst_rd_val_in
);
		
	wire [31:0] inst_reg_val_in [31:0];
	wire [31:0] inst_reg_val_out [31:0];

	// Get the value
	assign inst_rs1_val_out = inst_reg_val_out[inst_rs1];

	Reg #(32, 32'b0) x0 (clk, rst, inst_reg_val_in[0], inst_reg_val_out[0], 1'b1);
	Reg #(32, 32'b0) x1 (clk, rst, inst_reg_val_in[1], inst_reg_val_out[1], 1'b1);
	Reg #(32, 32'b0) x2 (clk, rst, inst_reg_val_in[2], inst_reg_val_out[2], 1'b1);
	Reg #(32, 32'b0) x3 (clk, rst, inst_reg_val_in[3], inst_reg_val_out[3], 1'b1);
	Reg #(32, 32'b0) x4 (clk, rst, inst_reg_val_in[4], inst_reg_val_out[4], 1'b1);
	Reg #(32, 32'b0) x5 (clk, rst, inst_reg_val_in[5], inst_reg_val_out[5], 1'b1);
	Reg #(32, 32'b0) x6 (clk, rst, inst_reg_val_in[6], inst_reg_val_out[6], 1'b1);
	Reg #(32, 32'b0) x7 (clk, rst, inst_reg_val_in[7], inst_reg_val_out[7], 1'b1);
	Reg #(32, 32'b0) x8 (clk, rst, inst_reg_val_in[8], inst_reg_val_out[8], 1'b1);
	Reg #(32, 32'b0) x9 (clk, rst, inst_reg_val_in[9], inst_reg_val_out[9], 1'b1);
	Reg #(32, 32'b0) x10 (clk, rst, inst_reg_val_in[10], inst_reg_val_out[10], 1'b1);
	Reg #(32, 32'b0) x11 (clk, rst, inst_reg_val_in[11], inst_reg_val_out[11], 1'b1);
	Reg #(32, 32'b0) x12 (clk, rst, inst_reg_val_in[12], inst_reg_val_out[12], 1'b1);
	Reg #(32, 32'b0) x13 (clk, rst, inst_reg_val_in[13], inst_reg_val_out[13], 1'b1);
	Reg #(32, 32'b0) x14 (clk, rst, inst_reg_val_in[14], inst_reg_val_out[14], 1'b1);
	Reg #(32, 32'b0) x15 (clk, rst, inst_reg_val_in[15], inst_reg_val_out[15], 1'b1);
	Reg #(32, 32'b0) x16 (clk, rst, inst_reg_val_in[16], inst_reg_val_out[16], 1'b1);
	Reg #(32, 32'b0) x17 (clk, rst, inst_reg_val_in[17], inst_reg_val_out[17], 1'b1);
	Reg #(32, 32'b0) x18 (clk, rst, inst_reg_val_in[18], inst_reg_val_out[18], 1'b1);
	Reg #(32, 32'b0) x19 (clk, rst, inst_reg_val_in[19], inst_reg_val_out[19], 1'b1);
	Reg #(32, 32'b0) x20 (clk, rst, inst_reg_val_in[20], inst_reg_val_out[20], 1'b1);
	Reg #(32, 32'b0) x21 (clk, rst, inst_reg_val_in[21], inst_reg_val_out[21], 1'b1);
	Reg #(32, 32'b0) x22 (clk, rst, inst_reg_val_in[22], inst_reg_val_out[22], 1'b1);
	Reg #(32, 32'b0) x23 (clk, rst, inst_reg_val_in[23], inst_reg_val_out[23], 1'b1);
	Reg #(32, 32'b0) x24 (clk, rst, inst_reg_val_in[24], inst_reg_val_out[24], 1'b1);
	Reg #(32, 32'b0) x25 (clk, rst, inst_reg_val_in[25], inst_reg_val_out[25], 1'b1);
	Reg #(32, 32'b0) x26 (clk, rst, inst_reg_val_in[26], inst_reg_val_out[26], 1'b1);
	Reg #(32, 32'b0) x27 (clk, rst, inst_reg_val_in[27], inst_reg_val_out[27], 1'b1);
	Reg #(32, 32'b0) x28 (clk, rst, inst_reg_val_in[28], inst_reg_val_out[28], 1'b1);
	Reg #(32, 32'b0) x29 (clk, rst, inst_reg_val_in[29], inst_reg_val_out[29], 1'b1);
	Reg #(32, 32'b0) x30 (clk, rst, inst_reg_val_in[30], inst_reg_val_out[30], 1'b1);
	Reg #(32, 32'b0) x31 (clk, rst, inst_reg_val_in[31], inst_reg_val_out[31], 1'b1);
	
	// Save the changed value
	Reg #(32, 32'b0) rd_saved (clk, rst, inst_rd_val_in, inst_reg_val_in[inst_rd], 1'b1);

endmodule
