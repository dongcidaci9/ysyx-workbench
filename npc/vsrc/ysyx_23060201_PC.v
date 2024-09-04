`include "defines.v"

module ysyx_23060201_PC(
	input clk,
	input rst,
	input [31:0] dnpc,
	output reg [31:0] pc
);
	initial begin
		pc = `MBASE;
		// $display("Value of pc: %h", pc);
	end

	wire [31:0] npc;

	assign npc = (dnpc != pc + 4) ? dnpc : pc + 4;

	Reg #(32, 32'h80000000) pc_reg(clk, rst, npc, pc, 1'b1); // next pc
	
endmodule


