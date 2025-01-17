
module delay_pipe #(parameter DATAW = 8, parameter DEPTH=2)
(
    input logic  clk  ,
    input logic  reset,
    input logic  enable   ,
    input logic  [DATAW-1:0] data_in ,
    output logic [DATAW-1:0] data_out


);

    logic [DATAW-1:0] _reg [DEPTH];
    always_ff @(posedge clk) begin
        if (reset) begin
            for (int i = 0; i < DEPTH; i=i+1) begin
                _reg[i] <= 0 ;
            end

        end else if (enable) begin

            _reg[0] <= data_in ;
            for (int i = 1 ; i < DEPTH; i=i+1)begin
                _reg[i] <= _reg[i-1];
            end

        end

    end

    assign data_out = _reg[DEPTH-1];



endmodule
