`include "defines.v"

module ysyx_23060201_IFU(
  input [31:0] pc,
  output [31:0] inst
);
  
  wire valid;
  wire [31:0] raddr;
  
  reg [31:0] rdata;

  assign valid = (pc >= 'h80000000) ? 1 : 0;
  assign raddr = pc - `MBASE;
  assign inst = rdata;

  import "DPI-C" function int pmem_read(input int raddr);

  always @(*) begin
    if (valid) begin
      rdata = pmem_read(raddr);
    end
    else begin
      rdata = 'b0;
    end
  end

endmodule
