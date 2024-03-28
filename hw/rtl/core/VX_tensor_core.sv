`include "VX_define.vh"

module VX_tensor_core import VX_gpu_pkg::*; #(
) (

    input wire clk ,
    input wire reset,

    // inputs
    VX_dispatch_if.slave    dispatch_if [`ISSUE_WIDTH],
    // outputs
    VX_commit_if.master     commit_if [`ISSUE_WIDTH]
);
    // dispatch unit

    // execute

    // execute

    for (genvar grp = 0 ; grp < `TC_NUM_PE_GROUPS; grp++) begin : pe_grp
        VX_shared_mat_buf# (WIDTH,)
        for(genvar pe = 0 ; pe < `TC_NUM_PES_PER_GROUP; pe++) begin : pe
            // Input A Mat buffers
            VX_mat_buf #() mat_a();

            VX_mat_buf #() mat_c();

            // Some ram for accumulation buffer

            // output fifos
            VX_elastic_buffer #() out_fifo (
            );
        end
    end

    // mat b






endmodule
