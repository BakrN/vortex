`include "defines.sv"


module fp_dot_unit #(
    parameter NUM_FP32_MULTIPLIERS= 2,
    parameter XLEN =32, 
    parameter NUM_TILE_BUFS=32,
    parameter NUM_TILE_REGS=32
    ) (
      input  logic                                      clock,
      input  logic                                      reset,

      output logic                                      ready_in,
      input  logic                                      valid_in,
      input  op_fmt_t                                format_in,
      input  res_fmt_t                                format_out,
      input  logic c_src_tile_buf , 

      input  logic [NUM_FP32_MULTIPLIERS-1:0][XLEN-1:0] a_in,
      input  logic [NUM_FP32_MULTIPLIERS-1:0][XLEN-1:0] b_in,
      input  logic [XLEN-1:0]                           c_in,
      input  logic [XLEN-1:0]                           c_tile_buf,
      input  logic                                      c_bypass,

      input  logic                                      ready_out,
      output logic                                      valid_out,
      output logic [XLEN-1:0]                           d_out,
      output logic [$clog2(NUM_TILE_REGS*NUM_TILE_BUFS)-1:0] c_rd_addr
      );
      localparam FMT_SIZE = $bits(format_in) + $bits(format_out);



      //////////////////////////////////////
      ///////// Multiplier Block ///////////
      //////////////////////////////////////

      logic [NUM_FP32_MULTIPLIERS-1:0] mul_ready_in;
      logic [NUM_FP32_MULTIPLIERS-1:0] mul_valid_out;

      logic [NUM_FP32_MULTIPLIERS-1:0][XLEN-1:0] mul_op_a;
      logic [NUM_FP32_MULTIPLIERS-1:0][XLEN-1:0] mul_op_b;
      logic [NUM_FP32_MULTIPLIERS-1:0][XLEN-1:0] mul_res;


      generate
      for (genvar i = 0; i < NUM_FP32_MULTIPLIERS; i =i+1) begin : FP_MULTIPLIERS
         fp_multiplier#(
            .XLEN(XLEN)
         )  u_muliply (
            .clock(clock),
            .reset(reset),
            .valid_in(valid_in),
            .ready_in(mul_ready_in[i]),
            .format_in(format_in),
            .op_a_in(mul_op_a[i]),
            .op_b_in(mul_op_b[i]),
            .res_out(mul_res[i]),
            .ready_out(ready_out),
            .valid_out(mul_valid_out[i])
         );
         assign mul_op_a[i] = a_in[i];
         assign mul_op_b[i] = b_in[i];
      end
      endgenerate

      logic[FMT_SIZE-1:0] fmt_buf_data_out;

      delay_pipe #(
            .DATAW(FMT_SIZE),
            .DEPTH(`MUL_LAT)
          ) fmt_fifo // if more than 1 reg is added to mul stage then modify depth
        (
            .clk        (clock),
            .reset      (reset),
            .enable     (ready_out),
            .data_in    ({format_out, format_in}),
            .data_out   (fmt_buf_data_out)
       );// same depth as mul


      //////////////////////////////////////
      ///////// Conversion Block //////////
      //////////////////////////////////////

      logic [NUM_FP32_MULTIPLIERS-1:0][XLEN-1:0]    conv_op_in;    // assign
      logic [NUM_FP32_MULTIPLIERS-1:0][$bits(op_fmt_t)-1:0]         conv_format_in;
      logic [NUM_FP32_MULTIPLIERS-1:0][$bits(res_fmt_t)-1:0]         conv_format_out;
      logic [NUM_FP32_MULTIPLIERS-1:0][XLEN*2-1:0]  conv_res_out;

      generate
          for (genvar i = 0; i < NUM_FP32_MULTIPLIERS; i = i + 1) begin
              fp_upscale#(.MAX_SCALING(2)) conv_inst (
                  .format_in   (conv_format_in[i]),
                  .format_out  (conv_format_out[i]),
                  .op_in       (conv_op_in[i]),
                  .res_out     (conv_res_out[i])
              );
          end
      endgenerate

      always_comb begin
          for (int i = 0 ; i < NUM_FP32_MULTIPLIERS; i=i+1) begin
              conv_op_in[i]         = mul_res[i];
              conv_format_in[i]     = fmt_buf_data_out[$bits(op_fmt_t)-1:0]; //from fifo
              conv_format_out[i]    = fmt_buf_data_out[FMT_SIZE-1-:$bits(res_fmt_t)];
          end
      end


      //////////////////////////////////////
      /////////// Reduction Tree ///////////
      //////////////////////////////////////
      //logic reduce_ready_in;
      res_fmt_t reduce_format_out;
      logic [XLEN-1:0] reduce_data_out;
      logic reduce_valid_out;

      fp_reduce#(.NUM_MULTIPLIERS(NUM_FP32_MULTIPLIERS))
        u_reduction_tree (
          .clock      (clock),
          .reset      (reset),
          .vec_in     (conv_res_out),
          .valid_in   (&mul_valid_out),
          .ready_out  (ready_out),
          .format_in  (conv_format_out[0]),
          .format_out (reduce_format_out),
          .d_out      (reduce_data_out),
          .valid_out  (reduce_valid_out),
          `UNUSED_PIN(ready_in)
      );


      /////////////////////////////////////
      ///// (final) Accumulation  /////////
      /////////////////////////////////////
      logic [XLEN-1:0] acc_data; 
      logic [XLEN-1:0] acc_fifo_data;
      logic acc_is_tile_reg; 
      logic acc_fifo_ready_out;


      logic [XLEN-1:0] acc_res;
      logic [XLEN-1:0] op_acc;

      fp_adder#( // # fpnew can be replaced with pipelined fp accumulator for FPGA. (fpnew specific lat<=O_T only necessary if coop execution mode is enabled) 
               .XLEN(XLEN),
               .LAT(1) 
      )  u_accumulator ( 
          .clock(clock),
          .reset(reset),
          .valid_in(reduce_valid_out),
          `UNUSED_PIN(ready_in),
          .format_in(reduce_format_out),
          .op_a_in(reduce_data_out),
          .op_b_in(op_acc),
          .res_out(d_out),
          .ready_out(ready_out),
          .valid_out(valid_out)
      );


      assign acc_fifo_ready_out = reduce_valid_out && ready_out;
      assign op_acc = c_bypass ? d_out : acc_data;
      assign acc_data = acc_is_tile_reg ? c_tile_buf : acc_fifo_data; 


      elastic_buffer #(
         .DATAW(XLEN + 1),
         .DEPTH($clog2(NUM_FP32_MULTIPLIERS*2)*`ADD_LAT+1+`MUL_LAT+`ADD_LAT)
         ) u_c_fifo (
            .clk        (clock),
            .rst_n      (~reset),
            .valid_in    (valid_in),
            .data_in     ({c_src_tile_buf, c_in}),
            .data_out    ({acc_is_tile_reg, acc_fifo_data}),
            .ready_out   (acc_fifo_ready_out),
            `UNUSED_PIN(ready_in),
            `UNUSED_PIN (valid_out)
      );


      ////////////////////////////////////
      ///////////// Signals //////////////
      ////////////////////////////////////
      assign ready_in   = &mul_ready_in;
      assign c_rd_addr  = acc_fifo_data[0+:$bits(c_rd_addr)]; 


endmodule : fp_dot_unit

