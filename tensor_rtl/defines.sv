`ifndef _DEF_HEAD_J
`define _DEF_HEAD_J

`ifndef NUM_WARPS
`define NUM_WARPS         8
`endif

`ifndef NUM_TILE_REGS
`define NUM_TILE_REGS     32
`endif

`ifndef NUM_TILE_BUFS
`define NUM_TILE_BUFS     1
`endif

`ifndef THREAD_GROUP_SIZE
`define THREAD_GROUP_SIZE 1
`endif

`ifndef NUM_THREADS
`define NUM_THREADS       4
`endif

`ifndef XLEN
`define XLEN              32
`endif

`ifndef FLUSH_FIFO_DEPTH
`define FLUSH_FIFO_DEPTH `NUM_WARPS
`endif


`define MAX(a, b) (((a) > (b)) ? (a) : (b))

typedef enum logic[1:0] {
    MMA_COOP ,  // Cooperative warp execution mode
    MMA_NORMAL,   // Normal mode, A,B, C
    MMA_C,        // Normal mode: C Only
    FLUSH_TC
} op_t;


`define MUL_LAT 3
`define ADD_LAT 2

typedef enum logic[1:0] {
    op_FP32  = 0,
    op_FP16  =1 ,
    op_BFP16 =2,
    op_FP8   = 3
}  op_fmt_t;

typedef enum logic {
    r_FP32 = 0, // (from op_fmt_t: op_FP32,op_FP16,op_BFP16)
    r_FP16 = 1 // (from op_fmt_t: op_FP8)
} res_fmt_t;

typedef enum bit {
    NORMAL, // A, B , C
    C_ONLY
} load_t;

typedef struct packed {
    logic [$clog2(`NUM_WARPS)-1:0] wid ;
    logic is_tile_reg;
    logic [`MAX($clog2(32), $clog2(`NUM_TILE_REGS))-1:0] wb_reg;
    //logic [31:0] reg;
} commit_info_t;

`define assert_equals(signal1, signal2, message) \
  if (signal1 !== signal2) begin \
    $error("Assertion failed: signal1:%d , signal2:%d ,%s", signal1, signal2, message); \
  end else begin \
    $display("signal1: %d and signal2: %d were equal", signal1, signal2); \
  end



// following is from vortex

`ifdef VERILATOR
`define TRACING_ON      /* verilator tracing_on */
`define TRACING_OFF     /* verilator tracing_off */
`ifndef NDEBUG
    `define DEBUG_BLOCK(x) /* verilator lint_off UNUSED */ \
                           x \
                           /* verilator lint_on UNUSED */
`else
    `define DEBUG_BLOCK(x)
`endif

`define IGNORE_UNOPTFLAT_BEGIN /* verilator lint_off UNOPTFLAT */

`define IGNORE_UNOPTFLAT_END  /* verilator lint_off UNOPTFLAT */

`define IGNORE_UNUSED_BEGIN   /* verilator lint_off UNUSED */

`define IGNORE_UNUSED_END     /* verilator lint_on UNUSED */

`define IGNORE_WARNINGS_BEGIN /* verilator lint_off UNUSED */ \
                              /* verilator lint_off PINCONNECTEMPTY */ \
                              /* verilator lint_off WIDTH */ \
                              /* verilator lint_off UNOPTFLAT */ \
                              /* verilator lint_off UNDRIVEN */ \
                              /* verilator lint_off DECLFILENAME */ \
                              /* verilator lint_off IMPLICIT */ \
                              /* verilator lint_off PINMISSING */ \
                              /* verilator lint_off IMPORTSTAR */ \
                              /* verilator lint_off UNSIGNED */

`define IGNORE_WARNINGS_END   /* verilator lint_on UNUSED */ \
                              /* verilator lint_on PINCONNECTEMPTY */ \
                              /* verilator lint_on WIDTH */ \
                              /* verilator lint_on UNOPTFLAT */ \
                              /* verilator lint_on UNDRIVEN */ \
                              /* verilator lint_on DECLFILENAME */ \
                              /* verilator lint_on IMPLICIT */ \
                              /* verilator lint_off PINMISSING */ \
                              /* verilator lint_on IMPORTSTAR */ \
                              /* verilator lint_on UNSIGNED */

`define UNUSED_PARAM(x)  /* verilator lint_off UNUSED */ \
                         localparam  __``x = x; \
                         /* verilator lint_on UNUSED */

`define UNUSED_SPARAM(x) /* verilator lint_off UNUSED */ \
                         localparam `STRING __``x = x; \
                         /* verilator lint_on UNUSED */

`define UNUSED_VAR(x)   if (1) begin \
                            /* verilator lint_off UNUSED */ \
                            wire [$bits(x)-1:0] __x = x; \
                            /* verilator lint_on UNUSED */ \
                        end

`define UNUSED_PIN(x)   /* verilator lint_off PINCONNECTEMPTY */ \
                        . x () \
                        /* verilator lint_on PINCONNECTEMPTY */
`define UNUSED_ARG(x)   /* verilator lint_off UNUSED */ \
                        x \
                        /* verilator lint_on UNUSED */

`else

`define STATIC_ASSERT(cond, msg)
`define ERROR(msg)                  //
`define ASSERT(cond, msg)           //
`define RUNTIME_ASSERT(cond, msg)

`define DEBUG_BLOCK(x)
`define TRACE(level, args)

`define TRACING_ON
`define TRACING_OFF

`define IGNORE_UNOPTFLAT_BEGIN
`define IGNORE_UNOPTFLAT_END
`define IGNORE_UNUSED_BEGIN
`define IGNORE_UNUSED_END
`define IGNORE_WARNINGS_BEGIN
`define IGNORE_WARNINGS_END
`define UNUSED_PARAM(x)
`define UNUSED_SPARAM(x)
`define UNUSED_VAR(x)
`define UNUSED_PIN(x) .x()
`define UNUSED_ARG(x) x

`define __SCOPE (* mark_debug="true" *)

`define __SCOPE_X

`define __SCOPE_ON  \
    `undef __SCOPE_X \
    `define __SCOPE_X `__SCOPE

`define __SCOPE_OFF  \
    `undef __SCOPE_X \
    `define __SCOPE_X

`endif



`endif
