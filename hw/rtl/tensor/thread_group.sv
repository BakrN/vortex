
module thread_group #(parameter GROUP_ID , parameter THREAD_N , parameter NUM_TILE_REGS, parameter NUM_TILE_BUFS=1) (
        input clk,
        input rst_n ,
        input logic wb_tile_buf,
        input logic wb_tile_reg,

        input logic [THREAD_GROUP_SIZE-1:0][XLEN-1:0] B_data_in [NUM_THREAD_GROUPS],
        input logic fmt_in ,
        input logic fmt_out,

    );

    logic [THREAD_GROUP_SIZE-1:0][XLEN-1:0] A_buf [NUM_WARPS];
    logic [XLEN-1:0] C_buf [NUM_WARPS];
    logic [XLEN-1:0] tile_reg [NUM_TILE_BUFS][NUM_TILE_REGS] ;

    generate begin

    end

    always @(*) begin

    end

endmodule
