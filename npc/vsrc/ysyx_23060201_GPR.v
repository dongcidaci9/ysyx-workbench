module ysyx_23060201_GPR # (
	GPR_ADDR_WIDTH 	= 5, 
	DATA_WIDTH 	= 32
) 
(
	input wire							clk					, 
	input wire							rst_n				, 
	input wire [1:0] 					gpr_ren				, 
	input wire 							gpr_wen				, 
	input wire 	[GPR_ADDR_WIDTH-1:0] 	gpr_waddr			, 
	input wire 	[DATA_WIDTH-1:0] 		gpr_wdata			,
	input wire 	[GPR_ADDR_WIDTH-1:0] 	gpr_raddr1			, 
	input wire 	[GPR_ADDR_WIDTH-1:0] 	gpr_raddr2			, 
	output reg	[DATA_WIDTH-1:0] 		gpr_rdata1			,
	output reg	[DATA_WIDTH-1:0] 		gpr_rdata2 
);

	reg [DATA_WIDTH-1:0] 	reg_file [2**GPR_ADDR_WIDTH-1:0]	; 
	reg						valid								;
	integer i;
	initial begin
		valid = 'b1;
		for (i = 0; i < 32; i = i + 1) begin
			reg_file[i] = 'h0;
		end
	end
	
	// read gpr 
	MuxKeyWithDefault #(2, 1, 32) gpr_rdata1_sel(gpr_rdata1, valid && gpr_ren[0], 32'b0, {
		1'b0, 	32'b0,	
		1'b1,	reg_file[gpr_raddr1]	
	});

	MuxKeyWithDefault #(2, 1, 32) gpr_rdata2_sel(gpr_rdata2, valid && gpr_ren[1], 32'b0, {
		1'b0, 	32'b0,	
		1'b1,	reg_file[gpr_raddr2]	
	});

	Reg #(1, 'b1) valid_reg(
		clk, ~rst_n, 1'b1, valid, 1'b1
	);

	// write gpr
	always @(posedge clk) begin
    	if (gpr_wen) reg_file[gpr_waddr] <= (gpr_waddr != 5'd0) ? gpr_wdata : 32'b0;
	end

endmodule
