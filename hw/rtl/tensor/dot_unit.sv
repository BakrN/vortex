
module dot_unit #(parameter fpnew_pkg::fpu_feature_t fp_features, parameter FP32_FMA_UNITS=1)(
        input logic clk,
        input logic reset,
        output logic result
    );

    // FMA stages
    generate
        for (genvar i = 0;i < FP32_FMA_UNITS; i=i+1) begin
            fpnew_top #(
                .Features       (FPU_FEATURES),
                .Implementation (FPU_IMPLEMENTATION),
                .TagType        (logic[(TAGW+1)-1:0]),
                .TrueSIMDClass  (1),
                .EnableSIMDMask (1) // For sparse dot product
            ) fpnew_fma (
                .clk_i          (clk),
                .rst_ni         (reset),
                .operands_i     (),
                .rnd_mode_i     (),
                .op_i           (),
                .op_mod_i       (),
                .src_fmt_i      (),
                .dst_fmt_i      (),
                .int_fmt_i      (),
                .vectorial_op_i (),
                .simd_mask_i    (),
                .tag_i          (),
                .in_valid_i     (),
                .in_ready_o     (),
                .flush_i        (),
                .result_o       (),
                .status_o       (),
                .tag_o          (),
                .out_valid_o    (),
                .out_ready_i    (),
                .busy_o()
            );
        end
    endgenerate

    // Reduction stage

    localparam depth = $clog2(FP32_FMA_UNITS);
    generate if (FP32_FMA_UNITS > 1) begin
        for (genvar lev =0; lev < depth; lev=lev+1) begin
            for (genvar i   = 0; i < (FP32_FMA_UNITS+1)/2^(depth-lev); i=i+1) begin
                fpnew_top #(
                    .Features       (fpnew_pkg::),
                    .Implementation (FPU_IMPLEMENTATION),
                    .TagType        (logic[(TAGW+1)-1:0]),
                    .TrueSIMDClass  (1),
                    .EnableSIMDMask (1)  // do I care?
                ) fpnew_reduce(
                    .clk_i          (clk),
                    .rst_ni         (),
                    .operands_i     (),
                    .rnd_mode_i     (),
                    .op_i           (),
                    .op_mod_i       (),
                    .src_fmt_i      (),
                    .dst_fmt_i      (),
                    .int_fmt_i      (),
                    .vectorial_op_i (),
                    .simd_mask_i    (-1),
                    .tag_i          (),
                    .in_valid_i     (),
                    .in_ready_o     (),
                    .flush_i        (),
                    .result_o       (),
                    .status_o       (),
                    .tag_o          (),
                    .out_valid_o    (),
                    .out_ready_i    (),
                    .busy_o()
                );
            end
            end
        end else begin
    end
    endgenerate

    fpnew_top #(
                    .Features       (FPU_FEATURES),
                    .Implementation (FPU_IMPLEMENTATION),
                    .TagType        (logic[(TAGW+1)-1:0]),
                    .TrueSIMDClass  (1),
                    .EnableSIMDMask (1)  // do I care?
                ) final_reduce(
                    .clk_i          (clk),
                    .rst_ni         (),
                    .operands_i     (),
                    .rnd_mode_i     (),
                    .op_i           (),
                    .op_mod_i       (),
                    .src_fmt_i      (),
                    .dst_fmt_i      (),
                    .int_fmt_i      (),
                    .vectorial_op_i (),
                    .simd_mask_i    (-1),
                    .tag_i          (),
                    .in_valid_i     (),
                    .in_ready_o     (),
                    .flush_i        (),
                    .result_o       (),
                    .status_o       (),
                    .tag_o          (),
                    .out_valid_o    (),
                    .out_ready_i    (),
                    .busy_o()
                );



endmodule
