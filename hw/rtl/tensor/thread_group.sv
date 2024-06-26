
module thread_group #(parameter GROUP_ID , parameter THREAD_N , parameter NUM_TILE_REGS, parameter NUM_TILE_BUFS=1) (
        input clk,
        input reset,

        input logic wb, // determines if it's local
        input logic [$clog2(XLEN)-1:0] rd,
        input logic valid_in ,
        input logic [THREAD_GROUP_SIZE-1:0][XLEN-1:0] vec_b_in [THREAD_GROUP_SIZE],
        input logic [THREAD_GROUP_SIZE-1:0][XLEN-1:0] vec_a_in ,
        input logic [THREAD_GROUP_SIZE-1:0][XLEN-1:0] vec_c_in,
        input logic fmt_in ,
        input logic fmt_out,

        output logic ready_in,
        output logic valid_out,

    );

    logic [$clog2(NUM_TILE_BUFS)-1:0] wb_tile_buf;
    logic [$clog2(NUM_TILE_REGS)-1:0] wb_tile_reg;

    assign wb_tile_buf = rd[0+:$clog2(NUM_TILE_BUFS)];
    assign wb_tile_reg = rd[$clog2(NUM_TILE_BUFS)+:$clog2(NUM_TILE_REGS)];

    logic internal_ready_out = !wb_meta_data_out [high] /*always on for tile wb */|| ready_out;

    elastic_buffer #(.REGS()/*as many regs as in pipeline*/) u_wb_meta(
            .valid_in(valid_in   && ready_in),
            .data_in ({wb, rd}),
            .valid_out(wb_meta_valid_out) ,
            .ready_out(valid_out && internal_ready_out)
    );

    generate
        for (genvar lane = 0; lane < THREAD_GROUP_SIZE; lane =lane+1) begin
            wire _ready_in;
            wire _valid_out;

            dot_unit#() u_dot_unit (
                    .clk (clk) ,
                    .reset(reset),
                    .valid_in  (valid_in) ,
                    .ready_in  (_ready_in),
                    .valid_out (_valid_out)
                );

            if (lane==0) begin
                assign ready_in  = _ready_in;
                assign valid_out = _valid_out;
            end
        end
    endgenerate

endmodule
