module tensor_core#() (
    // Inputs
    input clk,
    input reset,
    input wire [`XLEN-1:0] acc_src,
    // Output
    typedef struct packed {
        logic [`UUID_WIDTH-1:0]     uuid;
        logic [`NW_WIDTH-1:0]       wid;
        logic [NUM_LANES-1:0]       tmask;
        logic [`XLEN-1:0]           PC;
        logic                       wb;
        logic [`NR_BITS-1:0]        rd;
        logic [NUM_LANES-1:0][`XLEN-1:0] data;
        logic [PID_WIDTH-1:0]       pid;
        logic                       sop;
        logic                       eop;
    } data_t;

    logic  valid;
    data_t data;
    logic  ready;
    )



    logic wid_r; // an r
    logic rd_r ;
    logic wb_r ;
    logic acc_src;
    logic [NUM_THREADS-1:0]tmask ; // The

    // Pipe register here

endmodule

