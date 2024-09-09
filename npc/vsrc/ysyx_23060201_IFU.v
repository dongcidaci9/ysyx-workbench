`include "defines.v"

module ysyx_23060201_IFU # 
(
  MEM_ADDR_WIDTH  = 32, 
  DATA_WIDTH      = 32
)
(
	input wire 							clk				,
	input wire 							rst_n			,
	input wire 							jump_en			,
	input wire	[MEM_ADDR_WIDTH-1:0] 	dnpc			,
  	output reg 	[MEM_ADDR_WIDTH-1:0]  	pc 				,
  	output reg 	[DATA_WIDTH-1:0]    	inst 			
);

	wire [MEM_ADDR_WIDTH-1:0]			snpc			;
	wire 								ifen			;
	wire [MEM_ADDR_WIDTH-1:0]			w_npc			;
	
	reg [MEM_ADDR_WIDTH-1:0]			npc				;
	
	assign snpc			= pc + 'h4						; 		
	assign ifen 		= (pc >= `MBASE) ? 'b1 : 'b0	; 

	initial begin
		npc = `MBASE;
	end

	MuxKey #(2, 1, 32) w_npc_sel(w_npc, jump_en, {
		1'b0,	snpc,
		1'b1, 	dnpc
	});

	Reg #(32, `MBASE) npc_reg(~clk, ~rst_n, w_npc, npc, 1'b1); 
	Reg #(32, `MBASE) pc_reg(~clk, ~rst_n, npc, pc, 1'b1); 
  	
	import "DPI-C" function int pmem_read(
		input int mem_raddr, input byte mem_rmask);
  	always @(negedge clk) begin
		if (ifen) begin
   			inst <= pmem_read(npc, 8'b1111);
		end
		else begin
			inst <= 32'h0;
		end
  	end

endmodule
