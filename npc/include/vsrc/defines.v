`ifndef __DEFINES_V__
`define __DEFINES_V__

`define MBASE 32'h80000000
// type define
`define ysyx_23060201_OP_TYPE_R     7'b0110011 // add, sub, xor, or, and...	
`define ysyx_23060201_OP_TYPE_I     7'b0010011 // addi, xori, ori, andi	
`define ysyx_23060201_OP_TYPE_IL    7'b0000011 // lb, lh, lw	
`define ysyx_23060201_OP_TYPE_S     7'b0100011 	
`define ysyx_23060201_OP_TYPE_B     7'b1100011	
`define ysyx_23060201_OP_TYPE_U     7'b0110111 // lui
`define ysyx_23060201_OP_TYPE_UPC   7'b0010111 // auipc
`define ysyx_23060201_OP_TYPE_J     7'b1101111 // jal
`define ysyx_23060201_OP_TYPE_JR    7'b1100111 // jalr

// func3 define
`define ysyx_23060201_FUNC3_ADDSUB  3'b000
`define ysyx_23060201_FUNC3_XOR     3'b100
`define ysyx_23060201_FUNC3_OR      3'b110
`define ysyx_23060201_FUNC3_AND     3'b111
`define ysyx_23060201_FUNC3_SLL     3'b001
`define ysyx_23060201_FUNC3_SR      3'b101
`define ysyx_23060201_FUNC3_SLT     3'b010
`define ysyx_23060201_FUNC3_SLTU    3'b011

`define ysyx_23060201_FUNC3_B       3'b000
`define ysyx_23060201_FUNC3_H       3'b001
`define ysyx_23060201_FUNC3_W       3'b010
`define ysyx_23060201_FUNC3_BU      3'b100
`define ysyx_23060201_FUNC3_HU      3'b101

// func7 define
`define ysyx_23060201_FUNC7_SUB     7'h20
`define ysyx_23060201_FUNC7_SRA     7'h20

// branch define
`define ysyx_23060201_INST_BEQ      10'b1100011000 
`define ysyx_23060201_INST_BNE      10'b1100011001 
`define ysyx_23060201_INST_BLT      10'b1100011100 
`define ysyx_23060201_INST_BGE      10'b1100011101 
`define ysyx_23060201_INST_BLTU     10'b1100011110 
`define ysyx_23060201_INST_BGEU     10'b1100011111 
`endif

