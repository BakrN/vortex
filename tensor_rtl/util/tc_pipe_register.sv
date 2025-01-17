
module tc_pipe_register#(parameter DATAW = 16) (

    input  logic             clk,
    input  logic             rst_n,

    input  logic             valid_in,
    output logic             ready_in,
    input  logic [DATAW-1:0] data_in,

    output logic [DATAW-1:0] data_out,
    input  logic             ready_out,
    output logic             valid_out

    );
    logic stall;
    logic[DATAW:0] register;

    assign stall = valid_out && ~ready_out;

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            register <= 0 ;
        end else begin
            if (!stall) begin
                register <= {valid_in, data_in};
            end
        end
    end

    assign ready_in = ~stall;
    assign valid_out = register[DATAW];
    assign data_out = register[0+:DATAW] ;


endmodule
