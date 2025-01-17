// Replace with latched version 

module find_first_set_bit #(
    parameter WIDTH = 32,
    parameter IDX_WIDTH = $clog2(WIDTH)
)(
    input i_clk, 
    input i_rstn, 
    input  [WIDTH-1:0] data_in,
    output reg [IDX_WIDTH-1:0] index,
    output reg valid
);

integer i;
reg [IDX_WIDTH-1:0] first_set_bit;

always @(*) begin
    valid = 1'b0;
    first_set_bit = {IDX_WIDTH{1'b0}};

    for (i = 0; i < WIDTH; i = i + 1) begin
        if (data_in[i] && !valid) begin
            first_set_bit = i;
            valid = 1'b1;
        end
    end

    index = first_set_bit;
end

endmodule : find_first_set_bit

