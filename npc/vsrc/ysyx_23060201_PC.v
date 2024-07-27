module ysyx_23060201_PC(
	input clk,
	input rst,
	input [31:0] npc,
	output [31:0] pc
);

	Reg #(32, 32'h80000000) pc_reg(clk, rst, npc, pc, 1'b1); // next pc
	
endmodule


