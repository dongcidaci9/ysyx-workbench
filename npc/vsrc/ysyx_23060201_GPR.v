module ysyx_23060201_GPR(
	input clk,
	input rst,
	input [4:0] inst_rs1, inst_rd,
	input [31:0] inst_rd_val,
	output [31:0] inst_rs1_val
);
		
	reg [31:0] reg_file [31:0];

	// Get the value
	assign inst_rs1_val = reg_file[inst_rs1]; 

	// Save the changed value
	// Reg #(32, 32'b0) rs1_saved (clk, rst, inst_rd_val, reg_file[inst_rd], 1'b1);

endmodule
