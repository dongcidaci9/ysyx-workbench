`include "defines.v"

module ysyx_23060201_MEM # (
  MEM_ADDR_WIDTH  = 32, 
  DATA_WIDTH      = 32
) 
(
  input wire                        clk                 ,
  // input wire                        rst_n               ,
  input wire                        mem_wen             , 
  input wire [MEM_ADDR_WIDTH-1:0]   mem_waddr           , 
  input wire [7:0]                  mem_wmask           ,           
  input wire [DATA_WIDTH-1:0]       mem_wdata           ,
  input wire                        mem_ren             , 
  input wire [MEM_ADDR_WIDTH-1:0]   mem_raddr           ,
  input wire [7:0]                  mem_rmask           ,           
  output reg [DATA_WIDTH-1:0]       mem_rdata 
);

  /*
  reg                               mem_rstop           ;

  Reg #(1, 'b0) mem_rstop_reg(
    ~clk, ~rst_n, ~mem_rstop, mem_rstop, 1'b1 
  );

  initial begin
    mem_rstop = 'b0;
  end
  */

  import "DPI-C" function int pmem_read(
    input int mem_raddr, input byte mem_rmask);
  import "DPI-C" function void pmem_write(
    input int mem_waddr, input int mem_wdata, input byte mem_wmask);

  always @(mem_ren) begin
    if (mem_ren) begin
      mem_rdata <= pmem_read(mem_raddr, mem_rmask);
    end
    else begin
      mem_rdata <= 32'h1; 
    end
  end

  always @(posedge clk) begin
    if (mem_wen) begin
      pmem_write(mem_waddr, mem_wdata, mem_wmask);
    end 
  end

endmodule
