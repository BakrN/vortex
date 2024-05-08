module pe_group #(
        parameter NUM_PES = 1,
        parameter NUM_MULTIPLIERS = 1,
        parameter NUM_WARPS = 1,
        parameter NUM_TILES = 1,
        parameter NUM_STEPS = 1,
        parameter OPERAND_LOAD_COUNT = 1,
        parameter XLEN = 32
    )(
        input clk,
        input reset,

        input  valid,
        output ready,

        input logic [XLEN-1:0] rsc1 [NUM_MULTIPLIERS][] ,
        input logic [XLEN-1:0] rsc2 [NUM_MULTIPLIERS][],
        input logic [XLEN-1:0] rsc3 [NUM_MULTIPLIERS][], // if c is from reg file

        input acc_src_t acc_src [NUM_MULTIPLIERS],

        input logic [$clog2(XLEN)-1:0] rd [NUM_MULTIPLIERS],
        input logic wb [NUM_MULTIPLIERS],
        input logic [$clog2(NUM_WARPS)-1:0] wid [NUM_MULTIPLIERS],

        // TMASK unused for now
    );

    generate
        for (genvar pe = 0; pe < NUM_PES; pe++) begin : pe_gen

            logic  [OPERAND_LOAD_COUNT*XLEN-1:0] b_out [NUM_MULTIPLIERS];
            pe_core #(
                .PE_ID(pe),
                .NUM_MULTIPLIERS(NUM_MULTIPLIERS),
                .NUM_WARPS(NUM_WARPS),
                .NUM_TILES(NUM_TILES),
                .NUM_STEPS(NUM_STEPS),
                .OPERAND_LOAD_COUNT(OPERAND_LOAD_COUNT),
                .XLEN(XLEN),
                .NUM_MULTIPLIERS(NUM_MULTIPLIERS)
            ) pe (
                .clk(clk),
                .reset(reset),

                .valid(valid),
                .ready(ready),

                .rsc1(rsc1),
                .rsc2(rsc2),
                .rsc3(rsc3),

                .b_in(pe_gen[(pe-1)%NUM_PES].b_out),
                .b_out(b_out)
            );
        end
    endgenerate


endmodule
