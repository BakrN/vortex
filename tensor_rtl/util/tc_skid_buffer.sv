
// Reference:
// https://github.com/vortexgpgpu/vortex/blob/5f2b10b8a6f4da14fbb1ad42433832c228ae5099/hw/rtl/libs/VX_stream_buffer.sv


module tc_skid_buffer#(
    parameter DATAW    = 1
) (
    input  wire             clk,
    input  wire             rst_n,
    input  wire             valid_in,
    output wire             ready_in,
    input  wire [DATAW-1:0] data_in,
    output wire [DATAW-1:0] data_out,
    input  wire             ready_out,
    output wire             valid_out
);


reg [DATAW-1:0] data_out_r;
reg [DATAW-1:0] buffer;
reg             valid_out_r;
reg             use_buffer;

wire push = valid_in && ready_in;
wire stall_out = valid_out_r && ~ready_out;

always @(posedge clk or negedge rst_n) begin
	if (!rst_n) begin
		valid_out_r <= 0;
		use_buffer  <= 0;
        data_out_r <= 0;
	end else begin
		if (ready_out) begin
			use_buffer <= 0;
		end else if (valid_in && valid_out) begin
			use_buffer <= 1;
		end
		if (~stall_out) begin
			valid_out_r <= valid_in || use_buffer;
		end
        if (push) begin
        	buffer <= data_in;
        end
        if (~stall_out) begin
        	data_out_r <= use_buffer ? buffer : data_in;
        end
	end
end


assign ready_in  = ~use_buffer;
assign valid_out = valid_out_r;
assign data_out  = data_out_r;

endmodule
