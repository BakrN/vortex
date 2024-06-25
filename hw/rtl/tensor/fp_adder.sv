
module fp_adder import fpnew_pkg::*; #() ();
    localparam fpnew_pkg::fpu_features_t FPU_FEATURES = '{
        Width:         unsigned'(`XLEN * NUM_LANES),
        EnableVectors: 1'b1,
        EnableNanBox:  1'b0,
        FpFmtMask:     5'b10000,
        IntFmtMask:    4'b0010
    };

    localparam fpnew_pkg::fpu_implementation_t FPU_IMPLEMENTATION = '{
      PipeRegs:'{'{`LATENCY_FMA, 0, 0, 0, 0}, // ADDMUL
                 '{default: unsigned'(LATENCY_FDIVSQRT)}, // DIVSQRT
                 '{default: `LATENCY_FNCP}, // NONCOMP
                 '{default: `LATENCY_FCVT}}, // CONV
      UnitTypes:'{'{default: fpnew_pkg::PARALLEL}, // ADDMUL
                  '{default: fpnew_pkg::MERGED}, // DIVSQRT
                  '{default: fpnew_pkg::PARALLEL}, // NONCOMP
                  '{default: fpnew_pkg::MERGED}}, // CONV
      PipeConfig: fpnew_pkg::DISTRIBUTED
    };

    fpnew_top #(
            .Features       (FPU_FEATURES),
            .Implementation (FPU_IMPLEMENTATION),
            .TagType        (logic[(TAGW+1)-1:0])
        ) fpnew_core (
            .clk_i          (clk),
            .rst_ni         (~reset),
            .operands_i     ({fpu_operands[2][i], fpu_operands[1][i], fpu_operands[0][i]}),
            .rnd_mode_i     (fpnew_pkg::roundmode_e'(fpu_rnd)),
            .op_i           (fpu_op),
            .op_mod_i       (fpu_op_mod),
            .src_fmt_i      (fpu_src_fmt),
            .dst_fmt_i      (fpu_dst_fmt),
            .int_fmt_i      (fpu_int_fmt),
            `UNUSED_PIN (vectorial_op_i),
            `UNUSED_PIN (simd_mask_i),
            .tag_i          ({fpu_tag_in, fpu_has_fflags}),
            .in_valid_i     (fpu_valid_in),
            .in_ready_o     (fpu_ready_in_uq),
            .flush_i        (reset),
            .result_o       (fpu_result[i]),
            .status_o       (fpu_status_uq),
            .tag_o          (fpu_tag),
            .out_valid_o    (fpu_valid_out_uq),
            .out_ready_i    (fpu_ready_out),
            `UNUSED_PIN (busy_o)
        );


endmodule
