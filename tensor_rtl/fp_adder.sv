`include "defines.sv"

module fp_adder
   import fpnew_pkg::*;
   #(parameter XLEN=32, parameter LAT=`ADD_LAT)
   (
      input    logic clock,
      input    logic reset,

      input    logic valid_in,
      output   logic ready_in,

      input    res_fmt_t format_in,

      input    logic [XLEN-1:0] op_a_in,
      input    logic [XLEN-1:0] op_b_in,
      output   logic [XLEN-1:0] res_out,


      input    logic ready_out,
      output   logic valid_out
   );

    localparam logic en_vec = (XLEN==32) ? 1 : 0 ;
    localparam logic[4:0] fmt_en = (XLEN==32) ? 5'b10100 : 5'b00100 ;
    localparam fpnew_pkg::fpu_features_t FPU_FEATURES = '{
        Width:         unsigned'(XLEN),
        EnableVectors: en_vec,
        EnableNanBox:  1'b0,
        FpFmtMask:     fmt_en, // different format
        IntFmtMask:    4'b0000
    };

    localparam fpnew_pkg::fpu_implementation_t FPU_IMPLEMENTATION = '{
      PipeRegs:'{'{LAT, 0, LAT, 0, 0}, // ADDMUL
                 '{default: 0}, // DIVSQRT
                 '{default: 0}, // NONCOMP
                 '{default: 0}}, // CONV
      UnitTypes:'{'{default: fpnew_pkg::MERGED}, // ADDMUL
                  '{default: fpnew_pkg::DISABLED}, // DIVSQRT
                  '{default: fpnew_pkg::DISABLED}, // NONCOMP
                  '{default: fpnew_pkg::DISABLED}}, // CONV
      PipeConfig: fpnew_pkg::DISTRIBUTED
    };

    fpnew_pkg::fp_format_e fpu_src_fmt;
    assign fpu_src_fmt = (format_in == r_FP16 || XLEN!=32) ? fpnew_pkg::FP16 : fpnew_pkg::FP32;
    logic vec_op ;
    assign vec_op = format_in==r_FP16 && XLEN==32;

    fpnew_top #(
            .Features       (FPU_FEATURES),
            .Implementation (FPU_IMPLEMENTATION),
            .TagType        (logic)
        ) fpnew_core (
            .clk_i                     (clock),
            .rst_ni                    (~reset),
            .operands_i                ({op_a_in, op_b_in, {XLEN{1'b0}}}),
            .rnd_mode_i                (fpnew_pkg::RNE),
            .op_i                      (fpnew_pkg::ADD),
            .op_mod_i('0),
            .src_fmt_i                 (fpu_src_fmt),
            .dst_fmt_i                 (fpu_src_fmt),
            .int_fmt_i('0),
            .vectorial_op_i            (vec_op),
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
endmodule : fp_adder
