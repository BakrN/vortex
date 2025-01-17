
// Functional-only bram block for testing

module bram #(
    parameter NUM_BLOCKS=1,
    parameter DATA_WIDTH=1,
    parameter BLOCK_SIZE=1,
    parameter ADDR_WIDTH= $clog2(BLOCK_SIZE)
    ) (
        input logic clock ,
        input logic reset,  // for testing
        input logic [NUM_BLOCKS-1:0][DATA_WIDTH-1:0] wr_data,
        // synchrounous reads and writes (across threads)
        input logic  wr_en,
        input logic  [NUM_BLOCKS-1:0][ADDR_WIDTH-1:0] rd_addr,
        input logic  [NUM_BLOCKS-1:0][ADDR_WIDTH-1:0] wr_addr,
        output logic [NUM_BLOCKS-1:0][DATA_WIDTH-1:0] rd_data
    );
    // replace with sram for synthesis if needed
    generate
        for (genvar block = 0 ; block < NUM_BLOCKS ; block=block+1) begin : BRAM_THREAD_BLOCK
            reg [(BLOCK_SIZE + DATA_WIDTH -1)/DATA_WIDTH-1:0][DATA_WIDTH-1:0] buffer;
            always_ff @(posedge clock) begin
                if(wr_en) begin
                    buffer[wr_addr[block]] <= wr_data[block];
                end
            end
            assign rd_data[block] = buffer[rd_addr[block]];
        end
    endgenerate

    // For some testing: 
    
    generate
    genvar tid; 
    for (tid = 0; tid < NUM_BLOCKS; tid = tid + 1) begin : gen_block
        always_ff @(posedge clock) begin
            if (reset) begin
                integer i; 
                for (i = 0; i < (BLOCK_SIZE + DATA_WIDTH - 1) / DATA_WIDTH; i = i + 1) begin
                    BRAM_THREAD_BLOCK[tid].buffer[i] <= 0; //i;
                end
            end
        end
    end
    endgenerate



endmodule
