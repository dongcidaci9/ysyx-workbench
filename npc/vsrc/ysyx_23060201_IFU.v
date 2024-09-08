`include "defines.v"

module ysyx_23060201_IFU # (
  MEM_ADDR_WIDTH  = 32, 
  DATA_WIDTH      = 32
)
(
	input wire 							clk				,
	input wire 							rst				,
	input wire 	[MEM_ADDR_WIDTH-1:0] 	dnpc			,
	output reg 	[MEM_ADDR_WIDTH-1:0] 	pc				,			
  	output reg 	[DATA_WIDTH-1:0]    	inst 
);

	wire [31:0] 						npc				;
	
	reg 								inst_fetch		;

	assign npc = (dnpc != pc + 4) ? dnpc : pc + 4		;

	initial begin
		pc = `MBASE										;
		inst_fetch = 1'b1								;
	end

	Reg #(32, `MBASE) pc_reg(clk, rst, npc, pc, 1'b1)	; // next pc
  	
	import "DPI-C" function int pmem_read(input int mem_raddr);
  
  	always @(*) begin
		if (inst_fetch) begin
   			inst = pmem_read(pc);
		end
		else begin
			inst = 32'h0;
		end
  	end

endmodule

