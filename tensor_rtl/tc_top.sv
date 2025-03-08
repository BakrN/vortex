`include "defines.sv"

module tc_top (
        input logic clock ,
        input logic reset,

        input logic [`NUM_THREADS-1:0][`XLEN-1:0] i_a_data,   // will contain flush registr
        input logic [`NUM_THREADS-1:0][`XLEN-1:0] i_b_data,
        input logic [`NUM_THREADS-1:0][`XLEN-1:0] i_c_data,
        input logic [($clog2(32) > $clog2(`NUM_TILE_REGS) ? $clog2(32) : $clog2(`NUM_TILE_REGS))-1:0]  i_tile_reg, // from immediate, will be used for outputting to a correct tile reg.
        input logic [$clog2(32)-1:0]  i_dst_reg, // Dst reg
        input logic [$clog2(`NUM_WARPS)-1:0] i_wid,
        input op_t i_operation,
        input op_fmt_t i_format,

        input logic i_valid,
        output logic o_ready,

        input  logic i_commit_ready,
        output logic o_commit_valid,
        output logic [`NUM_THREADS-1:0][`XLEN-1:0] o_commit_data,
        output logic [$clog2(32)-1:0]              o_commit_reg,
        output logic [$clog2(`NUM_WARPS)-1:0]      o_commit_wid, 
        output logic [`NUM_WARPS-1:0]              o_free_slot

    );

    localparam WB_REG_WIDTH = $clog2(32) > $clog2(`NUM_TILE_REGS) ? $clog2(32) : $clog2(`NUM_TILE_REGS);
    localparam NUM_THREAD_GROUPS    = `NUM_THREADS/`THREAD_GROUP_SIZE;
    localparam O_T =  `NUM_THREADS/(`THREAD_GROUP_SIZE*`THREAD_GROUP_SIZE);
    localparam NUM_FP32_MULTIPLIERS = `THREAD_GROUP_SIZE;
    localparam OP_INFO_WIDTH = 1 + WB_REG_WIDTH + $clog2(`NUM_WARPS);

    //////////////////////////////////////////////
    /////////// TC Execution Modules//////////////
    //////////////////////////////////////////////

    generate if (O_T>1)
        always_ff @(posedge clock) begin
            for (int wid = 0 ; wid < `NUM_WARPS;wid=wid+1) begin 
                if (cu_update_ab_regs[wid]) begin
                    for (int tid = 0 ; tid < `NUM_THREADS; tid=tid+1) begin
                    //    localparam int tg = tid/`THREAD_GROUP_SIZE;
                    //    localparam int offset = tid % `THREAD_GROUP_SIZE;
                        A_reg[wid][tid/`THREAD_GROUP_SIZE][tid % `THREAD_GROUP_SIZE] <= i_a_data[tid];
                        B_reg[wid][tid/`THREAD_GROUP_SIZE][tid % `THREAD_GROUP_SIZE] <= i_b_data[tid];
                    end
                end
            end
        end
    endgenerate 


    // Matrix registers
    logic [`THREAD_GROUP_SIZE-1:0][`XLEN-1:0] A_reg [`NUM_WARPS][NUM_THREAD_GROUPS];
    logic [`THREAD_GROUP_SIZE-1:0][`XLEN-1:0] B_reg [`NUM_WARPS][NUM_THREAD_GROUPS];

    generate if (O_T == 1)
        // assign a and b to input
        for (genvar wid = 0 ; wid < `NUM_WARPS; wid=wid+1) begin
            for (genvar tid = 0 ; tid < `NUM_THREADS; tid=tid+1) begin
                assign A_reg[wid][tid/`THREAD_GROUP_SIZE][tid % `THREAD_GROUP_SIZE] = i_a_data[tid];
                assign B_reg[wid][tid/`THREAD_GROUP_SIZE][tid % `THREAD_GROUP_SIZE] = i_b_data[tid];
            end
        end
    endgenerate 


    logic [$clog2(`NUM_WARPS)-1:0] cu_wid_out ;
    logic [($clog2(O_T) ? $clog2(O_T) : 1)-1:0] cu_col_selector;

    // generate if (O_T==1) 
    //     assign cu_col_selector   = 0; 
    //     assign cu_update_ab_regs = 0; 
    //     assign cu_free_slot   = {`NUM_WARPS{1'b1}}; 
    // endgenerate

    logic [1:0] cu_operation_out ;
    logic cu_du_valid;
    logic [1:0] cu_format_out;

    //  B operands repacking
    logic[`THREAD_GROUP_SIZE-1:0][`XLEN-1:0] b_packed_in [NUM_THREAD_GROUPS];
    generate
        for (genvar tid = 0; tid < `NUM_THREADS; tid=tid+1) begin
            // localparam int tg = tid/`THREAD_GROUP_SIZE;
            // localparam int offset = tid % `THREAD_GROUP_SIZE;
            assign b_packed_in[tid/`THREAD_GROUP_SIZE][tid % `THREAD_GROUP_SIZE] = i_b_data[tid];
        end
    endgenerate

    logic [NUM_THREAD_GROUPS-1:0] tg_ready_in ;
    logic [NUM_THREAD_GROUPS-1:0] tg_valid_out ;

    logic tg_c_is_tile_reg  ;
    logic [`THREAD_GROUP_SIZE-1:0][$clog2(`NUM_TILE_REGS*`NUM_TILE_BUFS)-1:0] tg_c_rd_addr      [NUM_THREAD_GROUPS];

    logic tg_ready_out ;
    logic is_tgs_ready;

    logic [`THREAD_GROUP_SIZE-1:0][`XLEN-1:0] tg_res_out[NUM_THREAD_GROUPS];
    logic du_valid_out;

    assign du_valid_out     = &tg_valid_out;
    assign tg_ready_out     = i_commit_ready || (op_info_is_tile_reg && op_valid_out);
    assign is_tgs_ready     = &tg_ready_in ;

    assign tg_c_is_tile_reg = cu_wb_is_tile_reg; 

    // Thread groups
    generate
        for (genvar tg = 0 ; tg < NUM_THREAD_GROUPS ; tg=tg+1) begin : TG_BLOCK
            logic [`THREAD_GROUP_SIZE-1:0][`XLEN-1:0] vec_b [`THREAD_GROUP_SIZE];
            logic [`THREAD_GROUP_SIZE-1:0][`XLEN-1:0] vec_a ;
            logic [`THREAD_GROUP_SIZE-1:0][`XLEN-1:0] vec_c ;

            for (genvar tid= 0 ;tid< `THREAD_GROUP_SIZE; tid=tid+1) begin
                //localparam int abs_tid = tg*`THREAD_GROUP_SIZE + tid;
                assign vec_a[tid] = ((cu_update_ab_regs[cu_wid_out] && O_T > 1) || O_T == 1) ? i_a_data[ tg*`THREAD_GROUP_SIZE + tid] : A_reg[cu_wid_out][tg][tid];
                assign vec_b[tid] = ((cu_update_ab_regs[cu_wid_out] && O_T > 1) || O_T == 1) ? b_packed_in[O_T*tid] : B_reg[cu_wid_out][cu_col_selector + O_T*tid];
                assign vec_c[tid] = (cu_operation_out == MMA_COOP)? cu_wb_reg : i_c_data[ tg*`THREAD_GROUP_SIZE + tid]; // either from tile buffer or directly from c

            end

            thread_group #(.THREAD_GROUP_SIZE(`THREAD_GROUP_SIZE) , .NUM_TILE_BUFS(`NUM_TILE_BUFS), .NUM_TILE_REGS(`NUM_TILE_REGS)) u_tg (
                .clock(clock),
                .reset(reset),
                .valid_in (cu_du_valid),
                .ready_in (tg_ready_in[tg]),
                .vec_b_in (vec_b),
                .vec_a_in (vec_a),
                .vec_c_in (vec_c),
                .fmt_in   (cu_format_out),
                .ready_out (tg_ready_out ),
                .valid_out(tg_valid_out[tg]),
                .res_out  (tg_res_out[tg]),
                .accumulate_bypass(accumulate_bypass), // only needed if you want to enforce round robin policy in warp scheduling in coop mma (not good because then you warp slots much later) OR when O_T is 1 (again not a efficient config in most cases) 
                .c_rd_addr (tg_c_rd_addr[tg]), 
                .c_tile_buf(tile_buf_rd_data[(tg*`THREAD_GROUP_SIZE)+:`THREAD_GROUP_SIZE]), 
                .c_src_tile_buf (tg_c_is_tile_reg)
            );

        end
    endgenerate


    //////////////////////////////////////////////
    ////////////////// TModules /////////////
    //////////////////////////////////////////////

    // Tensor core control unit
    logic cu_load_ready;
    logic cu_load_valid;
    logic[1:0] cu_operation_in ;
    logic[1:0] cu_format_in;
    logic [$clog2(`NUM_WARPS)-1:0] cu_wid_in;

    logic [`NUM_WARPS-1:0] cu_update_ab_regs;
    logic cu_wb_is_tile_reg;
    logic [WB_REG_WIDTH-1:0] cu_wb_reg;
    logic [`NUM_WARPS-1:0] cu_free_slot;


    assign cu_load_valid   = i_valid  && i_operation!=FLUSH_TC; // Not flush operation
    assign cu_format_in    = i_format;
    assign cu_operation_in = i_operation;
    assign cu_wid_in       = i_wid;

    generate if (O_T == 1) 
        tc_control #(
        .NUM_TILE_REGS(`NUM_TILE_REGS), .THREAD_GROUP_SIZE(`THREAD_GROUP_SIZE),
        .NUM_THREADS (`NUM_THREADS), .XLEN(`XLEN), .NUM_WARPS(`NUM_WARPS), .O_T(1)
        )
        u_tc_cu    (
        .clock(clock),
        .reset(reset),
        .i_load_valid     (cu_load_valid),
        .o_load_ready     (cu_load_ready),
        .i_operation      (cu_operation_in),
        .i_format         (cu_format_in),
        .i_tile_reg         (i_tile_reg),
        .i_dst_reg  (i_dst_reg), 
        .i_wid            (cu_wid_in),
        .i_du_ready       (is_tgs_ready),
        .o_du_valid       (cu_du_valid),
        .o_wid            (cu_wid_out),
        .o_operation      (cu_operation_out),
        .o_format         (cu_format_out),
        .o_wb_is_tile_reg (cu_wb_is_tile_reg),
        .o_wb_reg         (cu_wb_reg),
        `UNUSED_PIN(o_update_ab_regs),
        `UNUSED_PIN(o_free_slot),
        `UNUSED_PIN(o_col_selector)
    );

    else 
        tc_control #(
        .NUM_TILE_REGS(`NUM_TILE_REGS), .THREAD_GROUP_SIZE(`THREAD_GROUP_SIZE),

        .NUM_THREADS (`NUM_THREADS), .XLEN(`XLEN), .NUM_WARPS(`NUM_WARPS)       , .O_T(O_T)      
        )

 u_tc_cu    (
        .clock(clock),
        .reset(reset),
        .i_load_valid     (cu_load_valid),
        .o_load_ready     (cu_load_ready),
        .i_operation      (cu_operation_in),
        .i_format         (cu_format_in),
        .i_tile_reg         (i_tile_reg),
        .i_dst_reg  (i_dst_reg), 
        .i_wid            (cu_wid_in),
        .i_du_ready       (is_tgs_ready),
        .o_du_valid       (cu_du_valid),
        .o_wid            (cu_wid_out),
        .o_operation      (cu_operation_out),
        .o_format         (cu_format_out),
        .o_wb_is_tile_reg (cu_wb_is_tile_reg),
        .o_wb_reg         (cu_wb_reg),
        .o_update_ab_regs (cu_update_ab_regs),
        .o_free_slot      (cu_free_slot),
        .o_col_selector   (cu_col_selector)
    );

    endgenerate 
    
    //////////////////////////////////////////////
    ////////////////// FLUSH Modules /////////////
    //////////////////////////////////////////////


    `ifndef SMEM_DIRECT_CONN
        logic [`NUM_THREADS-1:0][$clog2(`NUM_TILE_BUFS*`NUM_TILE_REGS)-1:0] tile_buf_rd_addr;
        logic [`NUM_THREADS-1:0][$clog2(`NUM_TILE_BUFS*`NUM_TILE_REGS)-1:0] tile_buf_wr_addr;
        logic tile_buf_wr_en;

        logic [`NUM_THREADS-1:0][`XLEN-1:0] tile_buf_rd_data;
        logic [`NUM_THREADS-1:0][`XLEN-1:0] tile_buf_wr_data;


        always_comb begin
            tile_buf_wr_en   = (flush_in_progress&&flush_ready_out) || (du_valid_out && op_info_is_tile_reg) ;

            for (int i = 0; i < `NUM_THREADS;i=i+1) begin
                tile_buf_rd_addr[i] = flush_in_progress ? flush_addr : tg_c_rd_addr[i/`THREAD_GROUP_SIZE][i%`THREAD_GROUP_SIZE];
                tile_buf_wr_addr[i] = flush_in_progress ? flush_addr : (op_info_wid /(`NUM_WARPS/`NUM_TILE_BUFS)) * `NUM_TILE_REGS + op_info_wb_reg;
            end

            for (int tid = 0; tid < `NUM_THREADS; tid =tid+1) begin
            //    localparam int tg = tid/`THREAD_GROUP_SIZE;
            //    localparam int offset = tid % `THREAD_GROUP_SIZE;
                tile_buf_wr_data[tid] = (flush_in_progress?  0 : tg_res_out[tid/`THREAD_GROUP_SIZE][tid % `THREAD_GROUP_SIZE]);
            end
        end

        bram #(
            .NUM_BLOCKS(`NUM_THREADS),
            .DATA_WIDTH(`XLEN),
            .BLOCK_SIZE(`XLEN*`NUM_TILE_REGS*`NUM_TILE_BUFS)
        ) u_tile_buf (
            .clock(clock),
            .reset(reset),
            .wr_en  (tile_buf_wr_en)  ,
            .wr_data(tile_buf_wr_data),
            .rd_addr(tile_buf_rd_addr),
            .wr_addr(tile_buf_wr_addr),
            .rd_data(tile_buf_rd_data)
        );
    `else
        // connection to outside (currently not supported)
    `endif



    logic flush_valid_in;
    logic flush_ready_in ;
    logic flush_valid_out;
    logic flush_ready_out;
    logic flush_in_progress ;

    logic [$clog2(`NUM_WARPS)+ $clog2(`NUM_TILE_REGS) + $clog2(32)-1:0]flush_data_out ;
    logic [$clog2(`NUM_WARPS)-1:0] flush_wid;
    logic [$clog2(`NUM_TILE_REGS)-1:0]       flush_src_reg;
    logic [$clog2(32)-1:0]       flush_dst_reg;
    logic [$clog2(`NUM_TILE_BUFS*`NUM_TILE_REGS)-1:0] flush_addr;



    elastic_buffer#(
        .DATAW($clog2(`NUM_WARPS)+ $clog2(`NUM_TILE_REGS) + $clog2(32)),
        .DEPTH(`FLUSH_FIFO_DEPTH)
    ) u_flush_fifo(
        .clk(clock),
        .rst_n(~reset),
        .valid_in(flush_valid_in),
        .ready_in(flush_ready_in),
        .data_in   ({i_wid , i_tile_reg, i_dst_reg}),
        .data_out  (flush_data_out),
        .ready_out (flush_ready_out),
        .valid_out (flush_valid_out)
    );

    assign flush_in_progress = flush_valid_out && !op_valid_out;
    assign flush_ready_out = i_commit_ready && !op_valid_out;
    assign flush_valid_in  = i_valid && i_operation == FLUSH_TC;
    assign flush_dst_reg = flush_data_out[0+:$bits(flush_dst_reg)] ;
    assign flush_src_reg = flush_data_out[$bits(flush_dst_reg)+:$bits(flush_src_reg)] ;
    assign flush_wid = flush_data_out[$bits(flush_data_out)-1-:$clog2(`NUM_WARPS)];
    assign flush_addr = `NUM_TILE_BUFS==1 ? flush_src_reg : ((flush_wid  >> $clog2(`NUM_WARPS/`NUM_TILE_BUFS)) * `NUM_TILE_REGS + flush_src_reg);



    //////////////////////////////////////////////
    ///////////// TC Commit Modules //////////////
    //////////////////////////////////////////////

    logic[OP_INFO_WIDTH-1:0]           op_info_in;
    logic[OP_INFO_WIDTH-1:0]           op_info_out;
    logic [$clog2(`NUM_WARPS)-1:0]     op_info_wid;
    logic                              op_info_is_tile_reg;
    logic [WB_REG_WIDTH-1:0]           op_info_wb_reg;
    logic op_valid_out;
    logic op_ready_out;
    logic op_fifo_valid_in ; 

    assign op_ready_out = du_valid_out && tg_ready_out;
    assign op_info_in   = {cu_wb_is_tile_reg, cu_wb_reg, cu_wid_out} ;
    assign op_info_is_tile_reg = op_info_out[OP_INFO_WIDTH-1];
    assign op_info_wb_reg      = op_info_out[OP_INFO_WIDTH-2-:WB_REG_WIDTH]  ;
    assign op_info_wid         = op_info_out[0+:$clog2(`NUM_WARPS)] ;
    assign op_fifo_valid_in = cu_du_valid && is_tgs_ready; 

    elastic_buffer#(
        .DATAW(OP_INFO_WIDTH), // (is_tile_reg, wb_reg, wb_idx)
        .DEPTH(2*($clog2(NUM_FP32_MULTIPLIERS*2)*`ADD_LAT+1+`MUL_LAT+`ADD_LAT)) // cover for bubble
    ) u_operation_fifo(
        .clk(clock),
        .rst_n(~reset),
        .valid_in (op_fifo_valid_in),
        .data_in   (op_info_in),
        .data_out  (op_info_out),
        .ready_out (op_ready_out),
        `UNUSED_PIN(ready_in),
        .valid_out(op_valid_out)
    );

    logic [OP_INFO_WIDTH-1:0]      last_exec_op ;
    logic                          last_exec_is_tile_reg ;
    logic [WB_REG_WIDTH-1:0]       last_exec_wb_reg ;
    logic [$clog2(`NUM_WARPS)-1:0] last_exec_wid_out;
    logic accumulate_bypass;

    assign last_exec_is_tile_reg = last_exec_op[OP_INFO_WIDTH-1];
    assign last_exec_wb_reg      = last_exec_op[OP_INFO_WIDTH-2-:WB_REG_WIDTH]  ;
    assign last_exec_wid_out     = last_exec_op[0+:$clog2(`NUM_WARPS)] ;        

    assign accumulate_bypass   = last_exec_is_tile_reg && op_info_is_tile_reg && last_exec_wb_reg == op_info_wb_reg && last_exec_wid_out == op_info_wid;


    always_ff @(posedge clock) begin
        if (reset)
            last_exec_op <= 0 ;
        else if(op_valid_out && op_ready_out) begin
            last_exec_op <= op_info_out;
        end
    end


    generate
        for (genvar tid = 0; tid < `NUM_THREADS; tid=tid+1) begin
            // T_g = tid/`THREAD_GROUP_SIZE;
            // offset = tid % `THREAD_GROUP_SIZE;
            assign o_commit_data[tid] = (flush_in_progress) ? tile_buf_rd_data[tid] : tg_res_out[tid/`THREAD_GROUP_SIZE][tid % `THREAD_GROUP_SIZE];
        end
    endgenerate
    assign o_commit_valid = (du_valid_out && !op_info_is_tile_reg) || flush_in_progress;
    assign o_commit_wid   = flush_in_progress ? flush_wid : op_info_out[$clog2(`NUM_WARPS)-1:0];
    assign o_commit_reg   = flush_in_progress ? flush_dst_reg : op_info_out[$clog2(`NUM_WARPS)+:$clog2(32)];


    assign o_ready        = (cu_load_ready && i_operation!=FLUSH_TC) || (i_operation==FLUSH_TC && flush_ready_in);
    assign o_free_slot    = cu_free_slot;

endmodule : tc_top
