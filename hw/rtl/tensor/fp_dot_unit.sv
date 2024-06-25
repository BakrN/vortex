//
// Mac units are number of fp32 multipliers
//

module dot_unit #(parameter MAC_UNITS= 1, parameter MIN_PRECISION_BITS=8) (

    );

generate
    for (genvar i = 0; i < MAC_UNITS; i =i+1) begin
        fp_multiplier#()  u_muliply ();
    end
endgenerate

// reduction tree
generate
    for (genvar i = 0; i < $clog2(MAC_UNITS*32/MIN_PRECISION_BITS); i=i+1) begin
        for (genvar j=0 ; j < $clog2(MAC_UNITS*32/MIN_PRECISION_BITS *1/(MAX(1,2*i))); j=j+1) begin
            fp_adder#() u_adder();
        end
    end
endgenerate
endmodule;
