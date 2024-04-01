module ysyx_23060201_PC(
	input clk,
	input rst,
	output [31:0] pc
);

	wire [31:0] add_in, npc; // intern signal

	Reg #(32, 32'h10000000) pc_reg (clk, rst, npc, pc, 1'b1); // next pc
	
	assign add_in = pc;
	assign npc = add_in + 32'h4; // pc + 4

endmodule


