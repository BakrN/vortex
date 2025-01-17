
module elastic_buffer#(
    parameter DATAW = 16,
    parameter DEPTH = 2
    ) (
    input  logic             clk,
    input  logic             rst_n,

    input  logic             valid_in,
    output logic             ready_in,
    input  logic [DATAW-1:0] data_in,

    output logic [DATAW-1:0] data_out,
    input  logic             ready_out,
    output logic             valid_out

);
    if (DEPTH==0) begin
        assign data_out = data_in ;
        assign ready_in = ready_out;
        assign valid_out = valid_in;
    end else if (DEPTH==1) begin

        tc_pipe_register#(.DATAW(DATAW)) u_buffer(
            .clk      (clk      ),
            .rst_n    (rst_n    ),
            .valid_in (valid_in ),
            .ready_in (ready_in ),
            .data_in  (data_in  ),
            .data_out (data_out ),
            .ready_out(ready_out),
            .valid_out(valid_out)
        );


    end else if (DEPTH==2) begin // could add depth 1 and 0 here

        tc_skid_buffer#(.DATAW(DATAW)) u_buffer(
            .clk(clk),
            .rst_n(rst_n),

            .valid_in (valid_in ),
            .ready_in (ready_in ),
            .data_in  (data_in  ),
            .data_out (data_out ),
            .ready_out(ready_out),
            .valid_out(valid_out)
        );

    end else begin // FIFO (threshhold)
        logic fifo_empty;
        logic fifo_full;

        tc_fifo#(.WIDTH(DATAW), .DEPTH(2**($clog2(DEPTH)))) bucket_fifo (
            .i_clk  (clk),
            .i_rstn (rst_n),
            .o_fifo_empty(fifo_empty),
            .i_read (ready_out),
            .o_data (data_out),
            .i_write(valid_in),
            .i_data (data_in),
            .o_fifo_full(fifo_full)
        );

        assign valid_out= ~fifo_empty;
        assign ready_in  = ~fifo_full;

    end


endmodule

