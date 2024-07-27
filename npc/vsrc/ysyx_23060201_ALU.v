module ysyx_23060201_ALU(
	input [31:0] a,
	input [31:0] b,
	input [3:0] ctl,
	output [31:0] res
);

	wire [31:0] b2 = b ^ {32{ctl[0]}};
	wire [31:0] alu_addsub = a + b2 + {31'b0, ctl[0]};
	wire [31:0] alu_xor  = a ^ b;
	wire [31:0] alu_and = a & b;
	wire [31:0] alu_or  = a | b;
	wire [31:0] alu_lrs = a >> b; // logical right shift
	
	MuxKey #(5, 4, 32) alu(res, ctl, {
		4'b0000, alu_addsub,
		4'b0100, alu_xor,
		4'b0110, alu_and,
		4'b0111, alu_or,
		4'b1000, alu_lrs
	});

endmodule
