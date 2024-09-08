module ysyx_23060201_GPR # (
	GPR_ADDR_WIDTH 	= 5, 
	MEM_ADDR_WIDTH 	= 32
) 
(
	input wire							clk					, 
	input wire [1:0] 					gpr_ren				, 
	input wire 							gpr_wen				, 
	input wire 	[GPR_ADDR_WIDTH-1:0] 	gpr_waddr			, 
	input wire 	[MEM_ADDR_WIDTH-1:0] 	gpr_wdata			,
	input wire 	[GPR_ADDR_WIDTH-1:0] 	gpr_raddr1			, 
	input wire 	[GPR_ADDR_WIDTH-1:0] 	gpr_raddr2			, 
	output wire [MEM_ADDR_WIDTH-1:0] 	gpr_rdata1			,
	output wire [MEM_ADDR_WIDTH-1:0] 	gpr_rdata2 
);
		
	reg [MEM_ADDR_WIDTH-1:0] reg_file [2**GPR_ADDR_WIDTH-1:0]; 

	initial begin
		reg_file[0] = 32'h0;
	end
	
	// Write back the changed value
	always @(posedge clk) begin
    	if (gpr_wen) reg_file[gpr_waddr] <= (gpr_waddr != 5'd0) ? gpr_wdata : 32'b0;
  	end

	// Get the value
	assign gpr_rdata1 = (gpr_ren[0] != 1'b0) ? reg_file[gpr_raddr1] : 32'b0; 
	assign gpr_rdata2 = (gpr_ren[1] != 1'b0) ? reg_file[gpr_raddr2] : 32'b0;

endmodule
