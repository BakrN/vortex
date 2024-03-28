`include "VX_define.vh"

module VX_mat_buf #(
    parameter WIDTH = 32,
    parameter NUM_REGS = 4,
    parameter DEPTH = 4,
    parameter INPUT_DATA_WIDTH = 8 // test case
)(
    input   logci i_clk,
    input   logic i_rstn,
    input   logic i_read,
    input   logic i_write,
    input   logic [INPUT_DATA_WIDTH-1:0] i_data,
    output  logic [WIDTH-1:0] o_data,
    output  logic o_fifo_full,
    output  logic o_fifo_empty
);

    localparam FIFO_BLOCK = FIFO_BLOCK/INPUT_DATA_WIDTH;
    localparam WRITE_PTR_WIDTH = $clog2(DEPTH*FIFO_BLOCK*NUM_REGS);

    logic [FIFO_BLOCK-1:0][INPUT_DATA_WIDTH-1:0] regs[DEPTH][NUM_REGS];

    logic [$clog2(DEPTH):0] read_ptr;// extra bit to check if full
    logic read_ptr_f;

    // Write ptrs
    logic [WRITE_PTR_WIDTH:0] write_ptr;// extra bit to check if full
    logic write_ptr_f;


    logic [$clog2(FIFO_BLOCK)-1:0] write_ptr_block;
    logic [$clog2(NUM_REGS)-1:0]   write_ptr_reg;
    logic [$clog2(DEPTH)-1:0]      write_ptr_depth;

    logic cur_loaded;
    logic can_read;

    assign write_ptr_f = write_ptr[WRITE_PTR_WIDTH];
    assign read_ptr_f = read_ptr[$clog2(DEPTH)];

    assign write_ptr_depth = write_ptr[WRITE_PTR_WIDTH-1-:$clog2(DEPTH)];
    assign write_ptr_reg   = write_ptr[WRITE_PTR_WIDTH-1-$clog2(DEPTH)-:$clog2(NUM_REGS)];
    assign write_ptr_block = write_ptr[0+:$clog2(FIFO_BLOCK)];


    assign cur_loaded = (back_loaded == FIFO_BLOCK);
    assign can_read = (!o_fifo_empty & (cur_loaded || (!cur_loaded && (read_ptr[$clog2(DEPTH)-1:0] != write_ptr_depth))));

    always_ff@(posedge i_clk or negedge i_rstn) begin
      if(~i_rstn)begin
        read_ptr <= '0;
        write_ptr <= '0;
      end
      else begin
        if(i_write && ~o_fifo_full) begin
          memory[write_ptr_depth][write_ptr_reg][write_ptr_block] <= i_data;
          write_ptr <= write_ptr + 1;
        end
        if(i_read && ~o_fifo_empty) begin
          readPtr <= readPtr + 1;
        end
      end
    end

    assign o_data = memory[read_ptr[$clog2(DEPTH)-1:0]];
    assign o_fifo_empty = ({write_ptr_f, write_ptr_depth}== read_ptr) ? 1'b1: 1'b0;
    assign o_fifo_full  = ((writePtr[$clog2(DEPTH)-1:0] == readPtr[$clog2(DEPTH)-1:0])&(writePtr[$clog2(DEPTH)] != readPtr[$clog2(DEPTH)])) ? 1'b1 : 1'b0;

endmodule


