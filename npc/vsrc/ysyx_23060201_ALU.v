module ysyx_23060201_ALU(
	input [31:0] a,
	input [31:0] b,
	input [3:0] ctl,
	output [31:0] res
);

	wire [31:0] b2 = b ^ {32{ctl[3]}};
	wire [31:0] alu_addsub = a + b2 + {31'b0, ctl[3]};
	wire [31:0] alu_xor  = a ^ b;
	wire [31:0] alu_and = a & b;
	wire [31:0] alu_or  = a | b;
	wire [31:0] alu_sll = a >> b[4:0]; // shift left logical
	wire [31:0] alu_srl = a >> b[4:0]; // shift right logical
	wire [31:0] alu_sra = a >>> b[4:0]; // shift right arithmatical
	wire [31:0] alu_slt = (a < b) ? 1 : 0;
	wire [31:0] alu_sltu = ($unsigned(a) < $unsigned(b)) ? 1 : 0;
	
	MuxKey #(10, 4, 32) ctl_sel(res, ctl, {
		4'b0000, alu_addsub, 	// add 0/0
		4'b1000, alu_addsub, 	// sub 1/0
		4'b0100, alu_xor,		// xor 0/4
		4'b0110, alu_or,		// or  0/6
		4'b0111, alu_and,		// and 0/7
		4'b0001, alu_sll,		// shift left logical 0/1
		4'b0101, alu_srl,		// shift right logical 0/5
		4'b1101, alu_sra,		// shift right arithmatical 1/5
		4'b0010, alu_slt,		// set less than 0/2
		4'b0011, alu_sltu		// set less than (unsigned) 0/3
	});

endmodule
