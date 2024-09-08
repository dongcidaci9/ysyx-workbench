`include "defines.v"

module ysyx_23060201_MEM # (
  MEM_ADDR_WIDTH  = 32, 
  DATA_WIDTH      = 32
) 
(
  input wire                        mem_wen             , 
  input wire [MEM_ADDR_WIDTH-1:0]   mem_waddr           , 
  input wire [DATA_WIDTH-1:0]       mem_wdata           ,
  input wire [7:0]                  mem_wmask           
  /*
  input wire                        mem_ren             , 
  input wire [MEM_ADDR_WIDTH-1:0]   mem_raddr           ,
  output reg [DATA_WIDTH-1:0]       mem_rdata 
  */
);

  // import "DPI-C" function int pmem_read(input int mem_raddr);
  import "DPI-C" function void pmem_write(
    input int mem_waddr, input int mem_wdata, input byte mem_wmask);
  
  always @(*) begin
    /*
    if (mem_ren) begin
      mem_rdata = pmem_read(mem_raddr);
    end
    else begin
      mem_rdata = 32'h0;
    end
    */
    if (mem_wen) begin
      pmem_write(mem_waddr, mem_wdata, mem_wmask);
    end 
    else begin
      pmem_write('h00000000, mem_wdata, 8'b0);
    end
  end

endmodule
