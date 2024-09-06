`include "defines.v"

module ysyx_23060201_MEM(
  input wire          mem_wen, 
  input wire [31:0]   mem_waddr,
  input wire [31:0]   mem_wdata,
  input wire [3:0]    mem_wmask,
  input wire          mem_ren   , 
  input wire [31:0]   mem_raddr ,
  output reg [31:0]   mem_rdata 
);

  import "DPI-C" function int pmem_read(input int mem_raddr);
  import "DPI-C" function void pmem_write(
    input int waddr, input int wdata, input byte wmask);
  
  always @(*) begin
    if (mem_ren) begin
      mem_rdata = pmem_read(mem_raddr);
    end
    else begin
      mem_rdata = 32'h0;
    end
    if (mem_wen) begin
      pmem_write(mem_waddr, mem_wdata, mem_wmask);
    end 
    else begin 
      pmem_write(mem_waddr, mem_wdata, 0);
    end 
  end

endmodule
