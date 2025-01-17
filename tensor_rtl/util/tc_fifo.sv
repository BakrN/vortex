
module tc_fifo #(
  parameter WIDTH = 248,
  parameter DEPTH = 16 // needs to be power of 2 
  )
  (
   input                      i_clk  ,
   input                      i_rstn ,
   input                      i_read ,
   input                      i_write,
   input   [WIDTH-1:0]        i_data ,
   output  logic [WIDTH-1:0]  o_data ,
   output                     o_fifo_full,
   output                     o_fifo_empty
  );

  logic [WIDTH-1:0] memory [DEPTH-1:0];
  logic [$clog2(DEPTH):0] readPtr, writePtr; // extra bit to check if full and no need to add reset logic
  logic [$clog2(DEPTH)-1:0] writeAddr ;
  assign writeAddr = writePtr[$clog2(DEPTH)-1:0];
  logic [$clog2(DEPTH)-1:0] readAddr  ;
  assign readAddr = readPtr[$clog2(DEPTH)-1:0];

  always_ff @(posedge i_clk or negedge i_rstn)begin
    if(~i_rstn)begin
      readPtr     <= '0;
      writePtr    <= '0;
    end
    else begin
      if(i_write && ~o_fifo_full) begin
        memory[writeAddr] <= i_data;
        writePtr         <= writePtr + 1;
      end
      if(i_read && ~o_fifo_empty) begin
        readPtr <= readPtr + 1;
      end
    end
  end
    assign o_data = memory[readAddr];
    assign o_fifo_empty = (writePtr == readPtr) ? 1'b1: 1'b0;
    assign o_fifo_full  = ((writePtr[$clog2(DEPTH)-1:0] == readPtr[$clog2(DEPTH)-1:0])&(writePtr[$clog2(DEPTH)] != readPtr[$clog2(DEPTH)])) ? 1'b1 : 1'b0;

endmodule

