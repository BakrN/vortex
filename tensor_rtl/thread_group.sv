`include "defines.sv"

module thread_group #(
    parameter THREAD_GROUP_SIZE = 1, 
    parameter XLEN=32, 
    parameter NUM_TILE_BUFS=32, 
    parameter NUM_TILE_REGS=32) (
        input clock,
        input reset,

        input logic valid_in ,
        input logic ready_out,
        input logic accumulate_bypass,
        input logic [THREAD_GROUP_SIZE-1:0][XLEN-1:0] vec_b_in [THREAD_GROUP_SIZE],
        input logic [THREAD_GROUP_SIZE-1:0][XLEN-1:0] vec_a_in ,
        input logic [THREAD_GROUP_SIZE-1:0][XLEN-1:0] vec_c_in ,
        input logic c_src_tile_buf , 
        input logic [THREAD_GROUP_SIZE-1:0][XLEN-1:0] c_tile_buf,

        input op_fmt_t fmt_in ,

        output logic ready_in,
        output logic valid_out,
        output logic [THREAD_GROUP_SIZE-1:0][XLEN-1:0] res_out, 
        output logic [THREAD_GROUP_SIZE-1:0][$clog2(NUM_TILE_REGS*NUM_TILE_BUFS)-1:0] c_rd_addr 
    );

    logic [THREAD_GROUP_SIZE-1:0] du_valid_out;
    logic [THREAD_GROUP_SIZE-1:0] du_ready_in;
    res_fmt_t format_out;
    assign format_out = (fmt_in == op_FP8) ? r_FP16 : r_FP32;

    generate
        for (genvar i = 0 ; i < THREAD_GROUP_SIZE; i=i+1) begin
            fp_dot_unit #(
                .NUM_FP32_MULTIPLIERS(THREAD_GROUP_SIZE),
                .XLEN(XLEN), 
                .NUM_TILE_BUFS(NUM_TILE_BUFS), 
                .NUM_TILE_REGS(NUM_TILE_REGS)
            ) u_dot_unit (
              .clock(clock),
              .reset(reset),
              .ready_in(du_ready_in[i]),
              .valid_in(valid_in),
              .format_in(fmt_in),
              .a_in(vec_a_in),
              .b_in(vec_b_in[i]),
              .c_in(vec_c_in[i]),
              .c_tile_buf(c_tile_buf[i]),
              .c_src_tile_buf(c_src_tile_buf),
              .ready_out(ready_out),
              .valid_out(du_valid_out[i]),
              .d_out(res_out[i]),
              .format_out(format_out),
              .c_bypass(accumulate_bypass),  
              .c_rd_addr (c_rd_addr[i])
              );
        end
    endgenerate

  assign valid_out = &du_valid_out;
  assign ready_in  = &du_ready_in;

endmodule
