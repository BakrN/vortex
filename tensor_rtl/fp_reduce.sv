`include "defines.sv"


module fp_reduce
   #(parameter NUM_MULTIPLIERS=2, parameter XLEN=32)
   (
      input  logic                                   clock,
      input  logic                                   reset,

      input  logic [NUM_MULTIPLIERS*2-1:0][XLEN-1:0]     vec_in,
      input  logic                                   valid_in,
      output logic                                   ready_in,
      input logic                                   ready_out,

      input  res_fmt_t                             format_in, // valid fp8->fp16, (b)fp16->fp32
      output res_fmt_t                             format_out, // to pass to accumulation
      output logic [XLEN-1:0]                        d_out,
      output logic                                   valid_out
   );

   localparam TREE_DEPTH = $clog2(NUM_MULTIPLIERS*2) ;
   // format fifo
   res_fmt_t fmt_out      [TREE_DEPTH];
   // final stage for fp8->fp16 (fp16 adder only)
   logic fp16_valid_out;

   generate
        for (genvar i = 0 ; i < TREE_DEPTH; i =i+1) begin
            logic [$bits(res_fmt_t)-1:0] delay_data_in;
            logic [$bits(res_fmt_t)-1:0] delay_data_out;

            delay_pipe#(
                      .DATAW($bits(format_in)),
                      .DEPTH(`ADD_LAT) // how many regs per stage (out_reg)
              ) u_fmt_pipe(
              .clk      (clock),
              .reset    (reset),
              .enable   (ready_out),
              .data_in  (delay_data_in),
              .data_out (delay_data_out)
            );

            assign delay_data_in    =    (i==0) ?  format_in : fmt_out[i-1];
            assign fmt_out[i]       =  res_fmt_t'(delay_data_out);
        end
   endgenerate

   generate
        for (genvar stage = 0 ; stage < $clog2(NUM_MULTIPLIERS*2);  stage =stage + 1) begin : REDUCTION_TREE
            localparam int NumAdders = NUM_MULTIPLIERS*2 >> (stage+1);
            logic [NumAdders-1:0] add_valid_in;
            logic [NumAdders-1:0] add_ready_in;
            res_fmt_t add_fmt_in;
            logic [NumAdders-1:0][XLEN-1:0] add_a_in;
            logic [NumAdders-1:0][XLEN-1:0] add_b_in;
            logic [NumAdders-1:0][XLEN-1:0] add_res_out;
            logic [NumAdders-1:0] add_valid_out;
            logic [NumAdders-1:0] add_ready_out;

            assign add_fmt_in    = (stage==0) ? format_in : fmt_out[stage-1];
            for (genvar idx=0; idx < NumAdders; idx = idx+1) begin
                if (stage == TREE_DEPTH-1 )begin
                    assign add_ready_out[idx] = fmt_out[TREE_DEPTH-1]==r_FP16 ? fp16_ready_in : ready_out && !fp16_valid_out;
                end else begin
                    assign add_ready_out[idx] = REDUCTION_TREE[stage+1].add_ready_in[idx >> 1];
                end

                if (stage==0) begin
                    assign add_valid_in[idx] = valid_in;
                    assign add_a_in[idx]     = vec_in[2*idx];
                    assign add_b_in[idx]     = vec_in[2*idx+1];
                end else begin
                    assign add_valid_in[idx] = REDUCTION_TREE[stage-1].add_valid_out[2*idx] && REDUCTION_TREE[stage-1].add_valid_out[2*idx+1];
                    assign add_a_in[idx]     = REDUCTION_TREE[stage-1].add_res_out[2*idx];
                    assign add_b_in[idx]     = REDUCTION_TREE[stage-1].add_res_out[2*idx+1];
                end
            end
            for( genvar idx = 0; idx < NUM_MULTIPLIERS*2 >> (stage+1) ; idx =idx+1) begin :  ADDER_STAGE
                fp_adder#(
                    .XLEN(XLEN)
                )  u_adder (
               .clock(clock),
               .reset(reset),
               .valid_in(add_valid_in[idx]),
               .ready_in(add_ready_in[idx]),
               .format_in(add_fmt_in),
               .op_a_in(add_a_in[idx]),
               .op_b_in(add_b_in[idx]),
               .res_out(add_res_out[idx]),
               .ready_out(add_ready_out[idx]),
               .valid_out(add_valid_out[idx])
            );

            end
        end
   endgenerate

   // Final stage for fp8->fp16 (fp16 adder only). For now, this is limited to fp16 reductions are done, but can extend later
   logic fp16_valid_in;
   logic fp16_ready_in;
   logic [15:0] fp16_a_in;
   logic [15:0] fp16_b_in;
   logic [15:0] fp16_res_out;

   assign fp16_valid_in = fmt_out[TREE_DEPTH-1] == r_FP16 && REDUCTION_TREE[TREE_DEPTH-1].add_valid_out[0]; /* last adder & fmt is (b)fp16*/
   assign fp16_a_in = REDUCTION_TREE[TREE_DEPTH-1].add_res_out[0][0+:16];
   assign fp16_b_in = REDUCTION_TREE[TREE_DEPTH-1].add_res_out[0][16+:16];

   fp_adder#( // fp16 adder
            .XLEN(16)
        )  u_fp16_reduce (
               .clock(clock),
               .reset(reset),
               .valid_in (fp16_valid_in),
               .ready_in (fp16_ready_in),
               .format_in(r_FP16),
               .op_a_in  (fp16_a_in),
               .op_b_in  (fp16_b_in),
               .res_out  (fp16_res_out),
               .ready_out(ready_out),
               .valid_out(fp16_valid_out)
    );

    assign valid_out = (fmt_out[TREE_DEPTH-1] == r_FP16) ? fp16_valid_out : REDUCTION_TREE[TREE_DEPTH-1].add_valid_out[0];
    assign d_out = (fp16_valid_out) ? {fp16_res_out,16'b0}: REDUCTION_TREE[TREE_DEPTH-1].add_res_out[0];
    assign format_out = (fp16_valid_out) ? r_FP16 : r_FP32;
    assign ready_in = &REDUCTION_TREE[0].add_ready_in;

endmodule : fp_reduce
