module ysyx_23060201_ALU(
	input [31:0] a,
	input [31:0] b,
	input [2:0] ctrl,
	output [31:0] res
);

	wire [31:0] res_addsub = a + b2 + {31'b0, ctrl[0]};
	wire [31:0] res_and = a & b;
	wire [31:0] res_or = a | b;
	wire [31:0] b2 = b ^ {32{ctrl[0]}};
	
	//wire cf, vf;
	//assign {cf, res_addsub} = a + b2 + {31'b0, ctrl[0]};
	//assign vf = (~(a[31] ^ b2[31] ^ ctrl[0])) & (a[31] ^ res_addsub[31]) & ctrl[1];

	MuxKey #(4, 3, 32) alu(res, ctrl, {
		3'b000, res_addsub,
		3'b001, res_addsub,
		3'b010, res_and,
		3'b011, res_or
	});

endmodule
