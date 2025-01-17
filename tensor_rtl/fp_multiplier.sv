`include "defines.sv"


module fp_multiplier import fpnew_pkg::*;
   #(parameter XLEN=32)
   (
      input    logic clock,
      input    logic reset,

      input    logic valid_in,
      output   logic ready_in,

      input    op_fmt_t format_in,

      input    logic [XLEN-1:0] op_a_in,
      input    logic [XLEN-1:0] op_b_in,
      output   logic [XLEN-1:0] res_out,


      input    logic ready_out,
      output   logic valid_out
   );

    localparam fpnew_pkg::fpu_features_t FPU_FEATURES = '{
        Width:         unsigned'(XLEN),
        EnableVectors: 1'b1,
        EnableNanBox:  1'b0,
        FpFmtMask:     5'b10111, //  we want fp8,fp16,bf16,fp32
        IntFmtMask:    4'b0000
    };

    localparam fpnew_pkg::fpu_implementation_t FPU_IMPLEMENTATION = '{
      PipeRegs:'{'{`MUL_LAT, `MUL_LAT, `MUL_LAT, 0, `MUL_LAT}, // ADDMUL
                 '{default: 0}, // DIVSQRT
                 '{default: 0}, // NONCOMP
                 '{default: 0}}, // CONV
      UnitTypes:'{'{default: fpnew_pkg::MERGED}, // ADDMUL (not merged add won't be used)
                  '{default: fpnew_pkg::DISABLED}, // DIVSQRT
                  '{default: fpnew_pkg::DISABLED}, // NONCOMP
                  '{default: fpnew_pkg::DISABLED}}, // CONV
      PipeConfig: fpnew_pkg::DISTRIBUTED
    };

//    fpnew_pkg::status_t fpu_status;

    //assign fpnew_pkg::operation_e fpu_op = fpnew_pkg::MUL;
    //assign fpnew_pkg::roundmode_e fpu_rnd = fpnew_pkg::RNE;


    fpnew_pkg::fp_format_e fpu_src_fmt;

    assign fpu_src_fmt = format_in == op_FP8 ? fpnew_pkg::FP8 :
                         format_in == op_FP16 ? fpnew_pkg::FP16 :
                         format_in == op_BFP16 ? fpnew_pkg::FP16ALT :
                                          fpnew_pkg::FP32;
    logic vec_op;
    assign vec_op = (fpu_src_fmt != fpnew_pkg::FP32 && XLEN==32) ? 1 : 0;

    fpnew_top #(
            .Features       (FPU_FEATURES),
            .Implementation (FPU_IMPLEMENTATION),
            .TagType        (logic)
        ) fpnew_core (
            .clk_i                     (clock),
            .rst_ni                    (~reset),
            .operands_i                ({{XLEN{1'b0}}, op_b_in, op_a_in}),
            .rnd_mode_i                (fpnew_pkg::RNE),
            .op_i                      (fpnew_pkg::MUL),
            .op_mod_i('0),
            .src_fmt_i                 (fpu_src_fmt),
            .dst_fmt_i                 (fpu_src_fmt),
            .int_fmt_i('0),
            //`UNUSED_PIN                (vectorial_op_i),
            .vectorial_op_i(vec_op),
            .simd_mask_i('0),
            .tag_i('0),
            .in_valid_i                (valid_in),
            .in_ready_o                (ready_in),
            .flush_i                   (reset),
            .result_o                  (res_out),
            `UNUSED_PIN                (status_o),
            `UNUSED_PIN                (tag_o),
            .out_valid_o               (valid_out),
            .out_ready_i               (ready_out),
            `UNUSED_PIN                (busy_o)
        );
endmodule : fp_multiplier
