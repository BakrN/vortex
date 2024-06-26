// synchronous resets
//
module tensor_core #(parameter THREAD_GROUP_SIZE= , parameter NUM_THREADS = , parameter THREAD_N= , parameter XLEN=32, parameter NUM_WARPS=8) (
        input logic clk ,
        input logic reset,

        input logic [NUM_THREADS-1:0][`XLEN-1:0] rs1_data,
        input logic [NUM_THREADS-1:0][`XLEN-1:0] rs2_data,
        input logic [NUM_THREADS-1:0][`XLEN-1:0] rs3_data,

        input logic valid_in ,
        input logic ready_in ,
        input logic wid_in   ,
        input logic load_mode, // 0 normal , 1 not

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

    logic [NUM_WARPS-1:0] ready_to_fire  ; // signal only based on 0th tg synce assumption is same data path delay and synchronous exec. Change this later if i find a problem
    logic [NUM_WARPS-1:0] ready_to_accept ; // signal only based on 0th tg synce assumption is same data path delay and synchronous exec. Change this later if i find a problem

    logic [NUM_WARPS-1:0] arb_grant;
    logic [NUM_WARPS-1:0] arb_req  ;
    logic [NUM_WARPS-1:0] fire; // based on arbiter & ready to fire

    logic [$clog2(THREAD_N)-1:0] B_n_counter [NUM_WARPS];
    logic fire_ready ;

    generate
        for (genvar wid = 0 ; wid < NUM_WARPS; wid=wid+1) begin
            assign ready_to_fire[wid] = ~ready_to_accept[wid] || (wid==wid_in && valid_in);
            assign fire[wid]          = ready_to_fire[wid] && arb_grant[wid];
            assign arb_req[wid]       = ready_to_fire[wid] ;
        end
    endgenerate


    logic [NUM_WARPS-1:0] ready_to_accept_n ;

    always @(*) begin
        ready_to_accept_n = ready_to_accept;
        for (int wid = 0 ; wid < NUM_WARPS; wid=wid+1) begin
            if (valid_in && wid_in == wid && ready_to_accept[wid]) begin
                ready_to_accept_n[wid] = (fire[wid] && fire_ready) ;
            end else if (fire[wid]) begin
                ready_to_accept_n = 0
            end
        end
    end

    // FF block
    always @(posedge clk) begin
        if (reset) begin
        end else begin
            ready_to_accept <= ready_to_accept_n ;

            if () begin

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




endmodule
