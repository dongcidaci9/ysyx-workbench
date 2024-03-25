module ysyx_23060201_PC(
	input clk,
	input rst,
	output [31:0] pc
);

	wire add_in, npc; // intern signal
	assign add_in = pc;

	assign npc = add_in  + 32'h4; // pc + 4

	Reg #(32, 32'h80000000) pc_reg (clk, rst, npc, pc, 1'b1); // next pc

endmodule






	
