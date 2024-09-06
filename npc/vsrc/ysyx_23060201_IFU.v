`include "defines.v"

module ysyx_23060201_IFU # (
  MEM_ADDR_WIDTH  = 32, 
  DATA_WIDTH      = 32
) 
(
  input wire [MEM_ADDR_WIDTH-1:0]   pc                  ,
  output reg [DATA_WIDTH-1:0]       inst 
);
  
  wire inst_fetch                                       ;

  assign inst_fetch = 'b1                              ;
  
  import "DPI-C" function int pmem_read(input int mem_raddr);
  
  always @(*) begin
    if (inst_fetch) begin
      inst = pmem_read(pc);
    end
    else begin
      inst = 32'h0;
    end
  end

endmodule
