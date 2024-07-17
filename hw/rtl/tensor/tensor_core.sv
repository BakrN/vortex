// synchronous resets ,

typedef enum logic[1:0]  {
    ACC_BUF_WB_REG,
    ACC_BUF_WB_BUF,
    ACC_REG_WB_REG,
    ACC_REG_WB_WB
} op_t;


typedef enum bit {
    NORMAL,
    C_ONLY
} load_t;

module tensor_core #(parameter THREAD_GROUP_SIZE= , parameter NUM_THREADS = , parameter THREAD_N= , parameter XLEN=32, parameter NUM_WARPS=8) (
        input logic clk ,
        input logic reset,

        input logic [NUM_THREADS-1:0][`XLEN-1:0] rs1_data,
        input logic [NUM_THREADS-1:0][`XLEN-1:0] rs2_data,
        input logic [NUM_THREADS-1:0][`XLEN-1:0] rs3_data,

        input op_t   op_type,
        input load_t load_mode, // 0 normal , 1 not

        input logic valid_in ,
        input logic ready_in ,
        input logic wid_in   ,

        input logic rd,
        input logic wb,

        output logic [] data_out,
        output logic valid_out,
        output logic [$clog2(XLEN)-1:0] reg_out,
        output logic wid_out
    );
    // static assert Num_threads/thread_group_size^2 = thread_n

    // Input buffers
    localparam NUM_THREAD_GROUPS    = NUM_THREADS/THREAD_GROUP_SIZE;
    localparam NUM_FP32_MULTIPLIERS = THREAD_GROUP_SIZE;

    logic [THREAD_GROUP_SIZE-1:0][XLEN-1:0] A_buf [NUM_WARPS][NUM_THREAD_GROUPS];
    logic [THREAD_GROUP_SIZE-1:0][XLEN-1:0] B_buf [NUM_WARPS][NUM_THREAD_GROUPS]; // loaded in ascending order tid 0 , tid 1 , tid2 ,etc...
    logic [THREAD_GROUP_SIZE-1:0][XLEN-1:0] C_buf [NUM_WARPS][NUM_THREAD_GROUPS];

    logic [$clog2(NUM_WARPS)-1:0] warp_to_fire;


    logic [NUM_WARPS-1:0] arb_grant;
    logic [NUM_WARPS-1:0] arb_req  ;

    logic [NUM_WARPS-1:0] ready_to_accept;
    logic [NUM_WARPS-1:0] ready_to_accept_n ;

    logic [NUM_WARPS-1:0] ready_to_fire;
    logic [NUM_WARPS-1:0] ready_to_fire_n ;

    logic [$clog2(THREAD_N)-1:0] B_n_counter [NUM_WARPS];
    logic [NUM_WARPS-1:0] internal_op;

    logic fire ;
    logic fire_ready ;

    logic rd_r [];

    logic wb_r; // indicate if wb to reg
    logic rd_r;

    logic wb_reg;
    logic wb_tile_buf; // Warp group selector
    logic wb_tile_reg; // tile reg selector


    assign wb_tile_buf = warp_to_fire / (NUM_WARPS / NUM_TILE_BUFS);
    assign wb_tile_reg = rd_r + THREAD_N - B_n_counter[warp_to_fire] ;

    assign wb_reg = wb_r ? rd_r : { wb_tile_reg, wb_tile_buf}; // make wb_R and rd_r an pipe reg or skid



    generate
        for (genvar wid = 0 ; wid < NUM_WARPS; wid=wid+1) begin
            assign fire               = ready_to_fire[warp_to_fire] && arb_grant[warp_to_fire];
            assign arb_req[wid]       = ready_to_fire_n[wid];
        end
    endgenerate


    logic [$clog2(THREAD_N)-1:0] B_n_counter_n [NUM_WARPS];
    logic [NUM_WARPS-1:0]        internal_op_n;

    always @(*) begin
        ready_to_fire_n   = ready_to_fire;
        B_n_counter_n     = B_n_counter;
        internal_op_n     = internal_op;

        for (int wid = 0 ; wid < NUM_WARPS; wid=wid+1) begin
            // When am I ready to fire
            // I am ready to fire when :
            // 1 - I am receiving new input: regardless of op type OR
            // 2 - Already received input (and haven't dispatche) conditions: Not internally locked, waiting for c loads OR (no change)
            // 3 - Resource internally locked

            if (!internal_op_n[wid] && internal_op[wid]) begin
                ready_to_fire_n[wid] = 0; // this can still be 1 if i have a new input
            end
            if (valid_in && wid_in == wid && ready_to_accept[wid])  begin // and i'm ready to accept
                ready_to_fire_n[wid] = ~(fire[wid] && fire_ready) | internal_op_n;
            end


            if (valid_in && wid_in == wid && ready_to_accept[wid]) begin
                // new value loaded in. If can fire
                ready_to_accept_n[wid] = (fire[wid] && fire_ready && ~internal_op_n[wid]);
            end else if () begin
                ready_to_accept_n = 0;
            end


            if (fire[wid] && fire_ready) begin
                if (B_n_counter[wid] == 0 ) begin
                    B_n_counter_n[wid] = THREAD_N;
                end else begin
                    B_n_counter_n[wid] = B_n_counter[wid] - 1;
                end
            end

            if (B_n_counter_n[wid] == 0) begin
                // unlock resource
                internal_op_n[wid] = 0 ;
            end else if (valid_in && wid_in == wid && ready_to_accept[wid] && op_type == ACC_BUF_WB_BUF ) begin // accepted new
                // lock when accepting new op and I'm internally accumulating
                internal_op_n[wid] = 1;
            end

        end
    end

    // FF block
    always @(posedge clk) begin
        if (reset) begin
            ready_to_accept <= `NUM_WARPS{1'b1};
            internal_op <= `NUM_WARPS{1'b0};
            for (int i = 0 ; i < NUM_WARPS; i=i+1) begin
                B_n_counter <= THREAD_N;
            end
        end else begin
            ready_to_accept <= ready_to_accept_n ;

            for (int wid = 0 ; wid < NUM_WARPS; wid=wid+1) begin
                if (valid_in && ready_to_accept[wid]) begin
                    wb_r <= wb;
                    rd_r <= rd;
                end
            end
        end

    end

    // Thread groups
    generate
        for (genvar i = 0 ; i < NUM_THREAD_GROUPS ; i=i+1) begin
            logic [THREAD_GROUP_SIZE][XLEN-1:0] vec_b [THREAD_GROUP_SIZE];
            logic [THREAD_GROUP_SIZE][XLEN-1:0] vec_a ;
            logic [THREAD_GROUP_SIZE][XLEN-1:0] vec_c ;

            assign vec_a = A_buf[warp_to_fire][i];

            for (int thread = 0 ;thread < THREAD_GROUP_SIZE; thread=thread+1) begin
                assign vec_b[thread] = B_buf[warp_to_fire][B_n_counter[warp_to_fire] + THREAD_N*thread];
                assign vec_c[thread] = C_buf[warp_to_fire][i][thread];
            end

            thread_group #() u_tg (
                .clk()  ,
                .rst_n(),
                .vec_a_in(vec_a),
                .vec_b_in(vec_b),
                .vec_c_in(vec_c),
            );
        end
    endgenerate

    // Module instantiation

    elastic_buffer#() u_wb_meta(); // just add wid and other meta data associated with warp .. (uuid
    arbiter#()        u_issue_arb();
    // find set bit for fire  (warp_to_fire)





endmodule
