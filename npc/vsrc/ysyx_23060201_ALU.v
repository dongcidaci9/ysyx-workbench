module ysyx_23060201_ALU # 
(
	DATA_WIDTH = 32
)
(	
	input wire [DATA_WIDTH-1:0] 	a				,
	input wire [DATA_WIDTH-1:0] 	b				,
	input wire [3:0] 				ctl				,
	output wire [DATA_WIDTH-1:0] 	res				,
	output wire 					eq				,
	output wire 					lt				,
	output wire 					ltu							
);

	wire [DATA_WIDTH-1:0] b2					; 
	wire [DATA_WIDTH-1:0] alu_addsub			; 
	wire [DATA_WIDTH-1:0] alu_xor				;  
	wire [DATA_WIDTH-1:0] alu_and				; 
	wire [DATA_WIDTH-1:0] alu_or 				; 
	wire [DATA_WIDTH-1:0] alu_sll				; 
	wire [DATA_WIDTH-1:0] alu_srl				; 
	wire [DATA_WIDTH-1:0] alu_sra				; 
	wire [DATA_WIDTH-1:0] alu_slt				; 
	wire [DATA_WIDTH-1:0] alu_sltu				; 
	
	assign b2 			= b ^ {32{ctl[3]}}							;
	assign alu_addsub 	= a + b2 + {31'b0, ctl[3]}					;
	assign alu_xor  	= a ^ b										;
	assign alu_and 		= a & b										;
	assign alu_or  		= a | b										;
	assign alu_sll 		= a << b[4:0]								; // shift left logical
	assign alu_srl 		= a >> b[4:0]								; // shift right logical
	assign alu_sra 		= ($signed(a)) >>> b[4:0]					; // shift right arithmatical
	assign alu_slt 		= ($signed(a) < $signed(b)) ? 'b1 : 'b0		; 
	assign alu_sltu 	= ($unsigned(a) < $unsigned(b))	? 'b1 : 'b0	;

	assign eq			= (a == b)									;
	assign lt			= ($signed(a) < $signed(b))					;	
	assign ltu			= ($unsigned(a) < $unsigned(b)) 			; 	
	
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
