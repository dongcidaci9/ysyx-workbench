`include "defines.v"

module ysyx_23060201_PC(
	input clk,
	input rst,
	input [31:0] dnpc,
	output reg [31:0] pc,
	output reg mem_ren 
);
	initial begin
		pc = `MBASE;
		mem_ren = 1'b1;
	end

	wire [31:0] npc;

	assign npc = (dnpc != pc + 4) ? dnpc : pc + 4;

	Reg #(32, `MBASE) pc_reg(clk, rst, npc, pc, 1'b1); // next pc

endmodule


