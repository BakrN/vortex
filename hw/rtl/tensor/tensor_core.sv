module tensor_core #(parameter THREAD_GROUP_SIZE= , parameter NUM_THREADS = , parameter XLEN=32, parameter NUM_WARPS=8) (
        input logic clk ,
        input logic rst_n ,

        input logic [NUM_THREADS-1:0][`XLEN-1:0] rs1_data,
        input logic [NUM_THREADS-1:0][`XLEN-1:0] rs2_data,
        input logic [NUM_THREADS-1:0][`XLEN-1:0] rs3_data,

        input logic valid_in ,
        input logic ready_in ,
        input logic wid_in   ,
        input logic load_mode,

        input logic rd,
        input logic wb,

        output logic [] data_out,
        output logic valid_out,
        output logic [$clog2(XLEN)-1:0] reg_out,
        output logic wid_out
    );

    // Input buffers
    localparam NUM_THREAD_GROUPS    = NUM_THREADS/THREAD_GROUP_SIZE;
    localparam NUM_FP32_MULTIPLIERS = THREAD_GROUP_SIZE;

    logic [THREAD_GROUP_SIZE-1:0][XLEN-1:0] B_buf [NUM_WARPS][NUM_THREAD_GROUPS];
    logic [$clog2(NUM_WARPS)-1:0] warp_selector;
    logic [NUM_WARPS-1:0]  ready_to_fire;

    // Thread groups
    generate
        for (genvar i = 0 ; i < NUM_THREAD_GROUPS ; i=i+1) begin
            thread_group #() u_tg (
                .B_data_in(B_buf[warp_selector]),
            );
        end
    endgenerate


    // Output




endmodule
