
// Only operates in fp16 + fp32
module pe#(
        parameter PE_ID = 0 ,
        parameter NUM_MULTIPLIERS = 1,
        parameter NUM_WARPS = 1,
        parameter NUM_TILES = 1,
        parameter NUM_STEPS = 1,
        parameter OPERAND_LOAD_COUNT = 1,
        parameter XLEN = 32
    )(
        input logic clk ,
        input logic reset,

        input  logic valid [NUM_MULTIPLIERS],
        output logic ready [NUM_MULTIPLIERS],

        // Loading from thread
        input logic   [XLEN-1:0] a [NUM_MULTIPLIERS],
        input logic   [XLEN-1:0] b [NUM_MULTIPLIERS],
        input logic   [XLEN-1:0] c [NUM_MULTIPLIERS],
        input logic   wb_r [NUM_MULTIPLIERS],       // registered wb
        input logic   [$clog2(NUM_WARPS)-1:0] wid_r [NUM_MULTIPLIERS], //registered wid
        input logic   [$clog2(XLEN)-1:0] rd [NUM_MULTIPLIERS], // if wb is set, then rd determines reg wb otherwise determines wb tile
        output logic  [XLEN-1:0] result [NUM_MULTIPLIERS],

        input  logic  [OPERAND_LOAD_COUNT*XLEN-1:0] b_in  [NUM_MULTIPLIERS],
        output logic  [OPERAND_LOAD_COUNT*XLEN-1:0] b_out [NUM_MULTIPLIERS]
    );

    logic [$clog2(NUM_STEPS)-1:0] current_step [NUM_MULTIPLIERS];

    // Input handling

    // Tile buffers
    logic tile_shift_enable [NUM_WARPS][NUM_TILES];
    logic [XLEN-1:0] tile_in [NUM_WARPS][NUM_TILES];
    logic [NUM_STEPS][XLEN-1:0] tile_out [NUM_WARPS][NUM_TILES];

    generate
        for (genvar wid=0; wid < NUM_WARPS; wid=wid+1) begin : TILE_WARP_BLOCK
            for (genvar tid=0; tid < NUM_TILES; tid=tid+1) begin : TILE_BLOCK
                VX_shift_register #(
                    .DATAW     (XLEN),
                    .RESETW    (XLEN),
                    .DEPTH     (NUM_STEPS),
                    .NUM_TAPS  (NUM_STEPS),
                    .TAP_START (0),
                    .TAP_STRIDE(XLEN)
                )  u_tile (
                    .clk     (clk),
                    .reset   (reset),
                    .enable  (tile_shift_enable[wid][tid]),
                    .data_in (tile_data_in[wid][tid]),
                    .data_out(tile_out[wid][tid])
                );
            end
        end
    endgenerate

    // Dot units
    generate
        for (genvar i=0; i< NUM_MULTIPLIERS; i=i+1) begin
             // in reg
        end
    endgenerate

    always_ff @(posedge clk or posedge reset) begin
        if (reset) begin
        end else begin
            if (valid && ready) begin

            end
        end
    end
    //assign ready = current_step ==0 ;

endmodule
