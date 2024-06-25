module pe #() () ;

// Input buffers

// Tile registers

// Dot unit
generate
    for (genvar lane = 0 ; lane < NUM_LANES ; lane=lane+1) begin
        dot_unit#() u_dot_unit();
    end
endgenerate




endmodule
