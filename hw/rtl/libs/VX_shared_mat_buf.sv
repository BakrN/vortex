/*
* Try to implement a better shift register approach  (Before doing this try synthesizing and checking timing req)
* */
module VX_shared_mat_buf #(
    parameter WIDTH = 32,
    parameter NUM_REG = 4,
    parameter DEPTH = 4,
    parameter INPUT_DATA_WIDTH = 32,
    ) (
    input logic clk,
    input logic rstn,
    input logic shift_en,
    input logic data_out,
    input logic pop,
    output logic [WIDTH*NUM_REG-1:0] o_data,
    output empty,
    output full,
    output front_full
    );

    logic [2:0] wr_ptr;
    logic [2:0] num_rows;

    generate if (DEPTH > 1)
        VX_mat_buf #(
            .WIDTH(WIDTH),
            .NUM_REGS(NUM_REG),
            .DEPTH(DEPTH),
            .INPUT_DATA_WIDTH(INPUT_DATA_WIDTH)
        ) mat_buf(

        );
    endgenerate

    logic [WIDTH-1:0] front_row [NUM_REG];

    always_ff @(posedge clk or negedge rstn) begin
        if (!rstn) begin
        end else begin
            if (pop) begin
                // shift down

            end if (shift_en) begin
                for (int i = 1 ; i < NUM_REG; i++) begin
                    front_row[i] <= front_row[i-1];
                end
                front_row[0] <= front_row[NUM_REG-1];
            end else if () begin

            end
        end
    end


    always_comb begin
        for (int i = 0; i < NUM_REG; i++) begin
            o_data[WIDTH-1-i*WIDTH -: WIDTH] = front_row[i];
        end
    end

endmodule
