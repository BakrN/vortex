`include "defines.sv"

module tc_control #(
    parameter NUM_TILE_BUFS=1,
    parameter NUM_TILE_REGS= 1,
    parameter THREAD_GROUP_SIZE= 4,
    parameter NUM_THREADS = 16,
    parameter XLEN=32,
    parameter NUM_WARPS=8 ,
    parameter O_T = NUM_THREADS/(THREAD_GROUP_SIZE*THREAD_GROUP_SIZE),
    parameter WB_REG_WIDTH = ($clog2(32) > $clog2(NUM_TILE_REGS)) ? $clog2(32) : $clog2(NUM_TILE_REGS)
    ) (
        // Input from outside
        input clock,
        input reset,
        // interface with gpu
        input  i_load_valid,
        output o_load_ready,
        input  op_t i_operation,
        input  op_fmt_t  i_format,
        input  [WB_REG_WIDTH-1:0]i_tile_reg  ,
        input  [$clog2(32)-1:0] i_dst_reg,
        input  [$clog2(NUM_WARPS)-1:0] i_wid ,

        // interface with tensor core
        input  i_du_ready ,
        output o_du_valid , // trigger dus
        output [$clog2(NUM_WARPS)-1:0] o_wid,  //fired warp
        output logic[NUM_WARPS-1:0] o_update_ab_regs, // updates ab registers
        output logic[1:0] o_operation ,
        output logic[1:0] o_format ,
        output logic o_wb_is_tile_reg ,
        output logic [WB_REG_WIDTH-1:0]o_wb_reg ,
        output logic[NUM_WARPS-1:0] o_free_slot, // (ready to accpt signal indicating free slots of a and b) optional check when doing integration only useful for coop mma
        output logic[($clog2(O_T) ? $clog2(O_T) : 1) - 1:0]  o_col_selector
    );

    localparam int REG_WIDTH = ($clog2(32) > $clog2(NUM_TILE_REGS)) ? $clog2(32) : $clog2(NUM_TILE_REGS);

    // Warp control registers
    logic [NUM_WARPS-1:0] ready_to_fire_passthrough;
    logic [NUM_WARPS-1:0] ready_to_fire_decoupled  ;
    logic [NUM_WARPS-1:0] ready_to_fire;
    assign ready_to_fire = ready_to_fire_passthrough | ready_to_fire_decoupled; 

    op_fmt_t meta_fmt   [NUM_WARPS];
    logic meta_is_tile_reg  [NUM_WARPS];
    logic [REG_WIDTH-1:0] meta_wb_reg [NUM_WARPS];
    op_t meta_op [NUM_WARPS];
    logic passthrough_value ;

    op_fmt_t meta_fmt_n   [NUM_WARPS];
    op_t meta_op_n [NUM_WARPS];
    logic [REG_WIDTH-1:0] meta_wb_reg_n  [NUM_WARPS];

    logic [$clog2(O_T):0]  B_N_counter   [NUM_WARPS];
    logic [$clog2(O_T):0]  B_N_counter_n [NUM_WARPS];

    // general control signals
    logic tc_fire; 
    logic [$clog2(NUM_WARPS)-1:0] selected_warp; 

    assign tc_fire    = o_du_valid && i_du_ready;
    assign o_du_valid = ready_to_fire[selected_warp];

    assign o_wid             = selected_warp;
    assign o_operation       = ((mode == s_PASSTHROUGH_EXEC) || O_T==1) ? i_operation : meta_op[selected_warp];
    assign o_format          = ((mode == s_PASSTHROUGH_EXEC) || O_T==1) ? i_format    : meta_fmt[selected_warp];
    assign o_wb_is_tile_reg  = ((mode == s_PASSTHROUGH_EXEC) || O_T==1) ? i_operation == MMA_COOP : meta_is_tile_reg[selected_warp];

    localparam LOG2BUFSHIFT = $clog2(NUM_WARPS/NUM_TILE_BUFS);
    logic [$clog2(`NUM_TILE_BUFS)-1:0] selected_tile_buf;
    assign selected_tile_buf = o_wid >> LOG2BUFSHIFT;

    assign o_wb_reg          = ((mode == s_PASSTHROUGH_EXEC) || O_T==1) ? (i_operation==MMA_COOP ? i_tile_reg+selected_tile_buf*NUM_TILE_REGS : i_dst_reg) : (meta_is_tile_reg[selected_warp] ?  meta_wb_reg[selected_warp]  +selected_tile_buf*NUM_TILE_REGS  : i_dst_reg);
 
    generate 
        for (genvar wid=0; wid < NUM_WARPS; wid=wid+1) begin 
            assign o_update_ab_regs[wid] =  i_load_valid && o_load_ready && wid==i_wid && i_operation !=MMA_C; 
            assign ready_to_fire_decoupled[wid]   = (B_N_counter[wid]&&meta_op[wid]==MMA_COOP); 
            assign ready_to_fire_passthrough[wid] = (mode == s_PASSTHROUGH_EXEC && i_load_valid && i_wid==wid ); 
            assign B_N_counter_n[wid] = mode == s_PASSTHROUGH_EXEC ? ((i_load_valid && i_wid==wid) ? (tc_fire ? ( (i_operation == MMA_NORMAL || i_operation==MMA_COOP) ? O_T-1 : /*assumption that this will always be mma c*/ B_N_counter[wid]-1): B_N_counter[wid]) : B_N_counter[wid]) : ((tc_fire && selected_warp==wid) ?  B_N_counter[wid]-1 : ((i_wid==wid && i_load_valid && o_load_ready) ? O_T : B_N_counter[wid])) ; 
            assign meta_op_n[wid]          = (i_load_valid && o_load_ready && wid == i_wid) ? i_operation : meta_op[wid];
            assign meta_fmt_n [wid]        = (i_load_valid && o_load_ready && wid == i_wid) ? i_format : meta_fmt[wid];
            assign meta_wb_reg_n[wid]      = (i_load_valid && o_load_ready && wid == i_wid) ? ((tc_fire && selected_warp==wid)? i_tile_reg+1 : i_tile_reg): ((tc_fire && selected_warp==wid) ? meta_wb_reg[wid] + 1 : meta_wb_reg[wid]);
            assign o_free_slot[wid] = B_N_counter_n[wid] == 0; // optimization
            assign meta_is_tile_reg[wid]   = (i_load_valid && o_load_ready && wid == i_wid) ? i_operation == MMA_COOP : meta_op[wid] == MMA_COOP; 

            // passthrough fired(normal)  -> O_T-1
            // passthrough fired(mma c)  -> B_N_counter -1 
            // passthrough not fired -> 0
            // decoupled fired -> -1 
            // decoupled but not one firing -> O_T
            // (else) decoupled not fired -> nothing
        end
    endgenerate

    localparam s_PASSTHROUGH_EXEC = 1'b0; 
    localparam s_DECOUPLED_EXEC   = 1'b1;
    logic mode;

    assign o_load_ready = mode == s_DECOUPLED_EXEC ? (i_operation==MMA_COOP && B_N_counter[i_wid]==0) : i_du_ready; 


    generate if (O_T > 1) 
        always_ff @(posedge clock) begin 
            if (reset ) begin 
                mode <= s_PASSTHROUGH_EXEC ; 
                for (int wid = 0 ; wid < NUM_WARPS; wid=wid+1) begin
                    B_N_counter[wid]  <= 0;
                    meta_op[wid]  <= MMA_COOP;
                    meta_fmt[wid] <= op_FP16;
                end
            end else begin 
                mode <= (O_T==1) ? s_PASSTHROUGH_EXEC : 
                    (((B_N_counter_n[selected_warp] && meta_op_n[selected_warp] == MMA_COOP)  || 
                    (mode==s_DECOUPLED_EXEC && ~(B_N_counter_n[selected_warp] && meta_op_n[selected_warp] == MMA_COOP) && (ready_to_fire_decoupled & ~(1 << selected_warp))))  ? s_DECOUPLED_EXEC : s_PASSTHROUGH_EXEC); 
                for (int wid = 0 ; wid < NUM_WARPS; wid=wid+1) begin
                    B_N_counter[wid]  <= B_N_counter_n[wid] ;
                    meta_wb_reg[wid] <= meta_wb_reg_n[wid];
                    meta_op[wid] <= meta_op_n[wid] ;
                    meta_fmt[wid] <= meta_fmt_n[wid] ;
                end
            end
        end
    else  // O_T == 1
        for (genvar wid = 0; wid < NUM_WARPS; wid=wid+1) begin 
            assign B_N_counter[wid] = 0;
            assign meta_op[wid]     = i_operation; 
            assign meta_fmt[wid]    = i_format; 
            assign meta_wb_reg[wid] = (i_operation == MMA_COOP) ? i_tile_reg : i_dst_reg; 
        end
    endgenerate

    generate if (O_T > 1) 
        find_first_set_bit#(.WIDTH(NUM_WARPS)) u_fsb(
            .i_clk(clock), 
            .i_rstn(~reset), 
            .data_in(ready_to_fire),
            `UNUSED_PIN(valid),
            .index(selected_warp)
        );
    else  // O_T == 1
        assign selected_warp = i_wid ;
    endgenerate 

    assign o_col_selector = (O_T > 1) ? (O_T - ((mode==s_PASSTHROUGH_EXEC && B_N_counter[o_wid]==0) ? O_T : B_N_counter[o_wid])) : 0;


endmodule  : tc_control

