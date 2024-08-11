module ysyx_23060201_GPR #(ADDR_WIDTH = 5, DATA_WIDTH = 32) (
	input clk,
	input rst,
	input [1:0] ren, // R(rs2), R(rs1)
	input wen, // R(rd)
	input [ADDR_WIDTH-1:0] raddr1, 
	input [ADDR_WIDTH-1:0] raddr2, 
	input [ADDR_WIDTH-1:0] waddr, 
	input [DATA_WIDTH-1:0] wdata,
	output [DATA_WIDTH-1:0] rdata1,
	output [DATA_WIDTH-1:0] rdata2 
);
		
	reg [DATA_WIDTH-1:0] reg_file [2**ADDR_WIDTH-1:0]; 
	
	// Write back the changed value
	always @(posedge clk) begin
    	if (wen) reg_file[waddr] <= wdata;
  	end

	// Get the value
	assign rdata1 = (ren[0] != 1'b0) ? reg_file[raddr1] : 32'b0; 
	assign rdata2 = (ren[1] != 1'b0) ? reg_file[raddr2] : 32'b0;

	// Reset
	Reg #(32, 32'b0) rst0(clk, rst, reg_file[0], reg_file[0], 1'b0); 
	Reg #(32, 32'b0) rst1(clk, rst, reg_file[1], reg_file[1], 1'b0); 
	Reg #(32, 32'b0) rst2(clk, rst, reg_file[2], reg_file[2], 1'b0); 
	Reg #(32, 32'b0) rst3(clk, rst, reg_file[3], reg_file[3], 1'b0); 
	Reg #(32, 32'b0) rst4(clk, rst, reg_file[4], reg_file[4], 1'b0); 
	Reg #(32, 32'b0) rst5(clk, rst, reg_file[5], reg_file[5], 1'b0); 
	Reg #(32, 32'b0) rst6(clk, rst, reg_file[6], reg_file[0], 1'b0); 
	Reg #(32, 32'b0) rst7(clk, rst, reg_file[7], reg_file[7], 1'b0); 
	Reg #(32, 32'b0) rst8(clk, rst, reg_file[8], reg_file[8], 1'b0); 
	Reg #(32, 32'b0) rst9(clk, rst, reg_file[9], reg_file[9], 1'b0); 
	Reg #(32, 32'b0) rst10(clk, rst, reg_file[10], reg_file[10], 1'b0); 
	Reg #(32, 32'b0) rst11(clk, rst, reg_file[11], reg_file[11], 1'b0); 
	Reg #(32, 32'b0) rst12(clk, rst, reg_file[12], reg_file[12], 1'b0); 
	Reg #(32, 32'b0) rst13(clk, rst, reg_file[13], reg_file[13], 1'b0); 
	Reg #(32, 32'b0) rst14(clk, rst, reg_file[14], reg_file[14], 1'b0); 
	Reg #(32, 32'b0) rst15(clk, rst, reg_file[15], reg_file[15], 1'b0); 
	Reg #(32, 32'b0) rst16(clk, rst, reg_file[16], reg_file[16], 1'b0); 
	Reg #(32, 32'b0) rst17(clk, rst, reg_file[17], reg_file[17], 1'b0); 
	Reg #(32, 32'b0) rst18(clk, rst, reg_file[18], reg_file[18], 1'b0); 
	Reg #(32, 32'b0) rst19(clk, rst, reg_file[19], reg_file[19], 1'b0); 
	Reg #(32, 32'b0) rst20(clk, rst, reg_file[20], reg_file[20], 1'b0); 
	Reg #(32, 32'b0) rst21(clk, rst, reg_file[21], reg_file[21], 1'b0); 
	Reg #(32, 32'b0) rst22(clk, rst, reg_file[22], reg_file[22], 1'b0); 
	Reg #(32, 32'b0) rst23(clk, rst, reg_file[23], reg_file[23], 1'b0); 
	Reg #(32, 32'b0) rst24(clk, rst, reg_file[24], reg_file[24], 1'b0); 
	Reg #(32, 32'b0) rst25(clk, rst, reg_file[25], reg_file[25], 1'b0); 
	Reg #(32, 32'b0) rst26(clk, rst, reg_file[26], reg_file[26], 1'b0); 
	Reg #(32, 32'b0) rst27(clk, rst, reg_file[27], reg_file[27], 1'b0); 
	Reg #(32, 32'b0) rst28(clk, rst, reg_file[28], reg_file[28], 1'b0); 
	Reg #(32, 32'b0) rst29(clk, rst, reg_file[29], reg_file[29], 1'b0); 
	Reg #(32, 32'b0) rst30(clk, rst, reg_file[30], reg_file[30], 1'b0); 
	Reg #(32, 32'b0) rst31(clk, rst, reg_file[31], reg_file[31], 1'b0); 
endmodule
