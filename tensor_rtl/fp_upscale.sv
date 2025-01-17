`include "defines.sv"


module fp_upscale
  #(parameter XLEN = 32,
    parameter MAX_SCALING = 2)
   (
    input op_fmt_t  format_in,  // 00: FP8, 01: FP16, 10: BFLOAT16, 11: FP32
    input res_fmt_t format_out, // 01: FP16, 10: FP32

    input logic [XLEN-1:0] op_in, // Input operand
    output logic [XLEN*MAX_SCALING-1:0] res_out // Output result (if passthrough then {op_in, XLEN{0}}
    );

    logic [XLEN*MAX_SCALING-1:0] res_temp;
    logic [3:0] fp8_exp[4];
    logic [3:0] unbiased_fp8_exp[4];
    logic fp8_sign[4];
    logic [2:0] fp8_man[4];

    logic[4:0]  fp8_fp16_exp [4];
    logic[9:0]  fp8_fp16_man [4];
    generate
        for(genvar i = 0 ; i < 4; i=i+1) begin
           assign fp8_exp[i] = op_in[8*i+3+:4];
           assign unbiased_fp8_exp[i] = fp8_exp[i] - 4'b0111;
           assign fp8_sign[i]= op_in[7+i*8];
           assign fp8_man[i] = op_in[8*i+:3];


           assign fp8_fp16_exp[i] = (fp8_exp[i] == 4'b1111) ? 5'b11111 :
                      (fp8_exp[i] == 4'b0000) ? 5'b00000 :
                      {1'b0, unbiased_fp8_exp[i]} + 5'b01111;
           assign fp8_fp16_man[i] = {fp8_man[i], 7'b0};

        end
    endgenerate

    always_comb begin
        // Default result to 0
        res_temp = {XLEN*MAX_SCALING{1'b0}};

        case (format_in)
            op_FP8: begin // FP8 to FP16 (upscale each FP8 operand)
                if (format_out == r_FP16) begin
                    logic [4:0] exp16;
                    res_temp[15:0]  = {fp8_sign[3], fp8_fp16_exp[3],fp8_fp16_man[3]};
                    res_temp[31:16] = {fp8_sign[2], fp8_fp16_exp[2],fp8_fp16_man[2]} ;
                    res_temp[47:32] = {fp8_sign[1], fp8_fp16_exp[1],fp8_fp16_man[1]} ;
                    res_temp[63:48] = {fp8_sign[0], fp8_fp16_exp[0],fp8_fp16_man[0]} ;
                end
            end

            op_FP16: begin // FP16 to FP32 (upscale each FP16 operand)
                if (format_out == r_FP32) begin
                    res_temp[63:32] = {op_in[31], op_in[30:26] + 8'd112, op_in[25:16], 13'b0};
                    res_temp[31:0]  = {op_in[15], op_in[14:10] + 8'd112, op_in[9:0], 13'b0};
                end
            end

            op_BFP16: begin // BFLOAT16 to FP32 (upscale each BFLOAT16 operand)
                if (format_out == r_FP32) begin
                    res_temp[63:32] = {op_in[31], op_in[30:23], op_in[22:16], 16'b0};
                    res_temp[31:0]  = {op_in[15], op_in[14:7], op_in[6:0], 16'b0};
                end
            end

            op_FP32: begin // FP32 passthrough (no conversion needed)
                if (format_out == r_FP32) begin
                    res_temp = {op_in, {XLEN{1'b0}}};
                end
            end

            default: begin
                res_temp = {XLEN*MAX_SCALING{1'b0}}; // Default to 0 in case of invalid inputs
            end
        endcase
    end

    assign res_out = res_temp;



endmodule : fp_upscale
