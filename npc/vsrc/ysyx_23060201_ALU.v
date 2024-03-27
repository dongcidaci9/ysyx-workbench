module ysyx_23060201_ALU(
	input [31:0] a,
	input [31:0] b,
	input [2:0] ctrl,
	output [31:0] res,
	output nf, zf, cf, vf
);

	wire [31:0] res_addsub;
	wire [31:0] res_and;
	wire [31:0] res_or;

	wire [31:0] b2;
	assign b2 = b ^ {32{ctrl[0]}};
	
	assign {cf, res_addsub} = a + b2 + {31'b0, ctrl[0]};
	assign vf = (~(a[31] ^ b2[31] ^ ctrl[0])) & (a[31] ^ res_addsub[31]) & ctrl[1];

	assign res_and = a & b;
	assign res_or = a | b;

	MuxKey #(4, 3, 32) alu(res, ctrl, {
		3'b000, res_addsub,
		3'b001, res_addsub,
		3'b010, res_and,
		3'b011, res_or
	});

	assign zf = ~(|res);
	assign nf = res[31];

endmodule
