// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VVORTEX__DPI_H_
#define VERILATED_VVORTEX__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at ../../hw/dpi/util_dpi.vh:29:30
    extern void dpi_assert(int inst, svLogic cond, int delay);
    // DPI import at ../../hw/dpi/float_dpi.vh:34:30
    extern void dpi_f2f(svLogic enable, int dst_fmt, long long a, long long* result);
    // DPI import at ../../hw/dpi/float_dpi.vh:19:30
    extern void dpi_fadd(svLogic enable, int dst_fmt, long long a, long long b, const svBitVecVal* frm, long long* result, svBitVecVal* fflags);
    // DPI import at ../../hw/dpi/float_dpi.vh:36:30
    extern void dpi_fclss(svLogic enable, int dst_fmt, long long a, long long* result);
    // DPI import at ../../hw/dpi/float_dpi.vh:27:30
    extern void dpi_fdiv(svLogic enable, int dst_fmt, long long a, long long b, const svBitVecVal* frm, long long* result, svBitVecVal* fflags);
    // DPI import at ../../hw/dpi/float_dpi.vh:43:30
    extern void dpi_feq(svLogic enable, int dst_fmt, long long a, long long b, long long* result, svBitVecVal* fflags);
    // DPI import at ../../hw/dpi/float_dpi.vh:42:30
    extern void dpi_fle(svLogic enable, int dst_fmt, long long a, long long b, long long* result, svBitVecVal* fflags);
    // DPI import at ../../hw/dpi/float_dpi.vh:41:30
    extern void dpi_flt(svLogic enable, int dst_fmt, long long a, long long b, long long* result, svBitVecVal* fflags);
    // DPI import at ../../hw/dpi/float_dpi.vh:22:30
    extern void dpi_fmadd(svLogic enable, int dst_fmt, long long a, long long b, long long c, const svBitVecVal* frm, long long* result, svBitVecVal* fflags);
    // DPI import at ../../hw/dpi/float_dpi.vh:45:30
    extern void dpi_fmax(svLogic enable, int dst_fmt, long long a, long long b, long long* result, svBitVecVal* fflags);
    // DPI import at ../../hw/dpi/float_dpi.vh:44:30
    extern void dpi_fmin(svLogic enable, int dst_fmt, long long a, long long b, long long* result, svBitVecVal* fflags);
    // DPI import at ../../hw/dpi/float_dpi.vh:23:30
    extern void dpi_fmsub(svLogic enable, int dst_fmt, long long a, long long b, long long c, const svBitVecVal* frm, long long* result, svBitVecVal* fflags);
    // DPI import at ../../hw/dpi/float_dpi.vh:21:30
    extern void dpi_fmul(svLogic enable, int dst_fmt, long long a, long long b, const svBitVecVal* frm, long long* result, svBitVecVal* fflags);
    // DPI import at ../../hw/dpi/float_dpi.vh:24:30
    extern void dpi_fnmadd(svLogic enable, int dst_fmt, long long a, long long b, long long c, const svBitVecVal* frm, long long* result, svBitVecVal* fflags);
    // DPI import at ../../hw/dpi/float_dpi.vh:25:30
    extern void dpi_fnmsub(svLogic enable, int dst_fmt, long long a, long long b, long long c, const svBitVecVal* frm, long long* result, svBitVecVal* fflags);
    // DPI import at ../../hw/dpi/float_dpi.vh:37:30
    extern void dpi_fsgnj(svLogic enable, int dst_fmt, long long a, long long b, long long* result);
    // DPI import at ../../hw/dpi/float_dpi.vh:38:30
    extern void dpi_fsgnjn(svLogic enable, int dst_fmt, long long a, long long b, long long* result);
    // DPI import at ../../hw/dpi/float_dpi.vh:39:30
    extern void dpi_fsgnjx(svLogic enable, int dst_fmt, long long a, long long b, long long* result);
    // DPI import at ../../hw/dpi/float_dpi.vh:28:30
    extern void dpi_fsqrt(svLogic enable, int dst_fmt, long long a, const svBitVecVal* frm, long long* result, svBitVecVal* fflags);
    // DPI import at ../../hw/dpi/float_dpi.vh:20:30
    extern void dpi_fsub(svLogic enable, int dst_fmt, long long a, long long b, const svBitVecVal* frm, long long* result, svBitVecVal* fflags);
    // DPI import at ../../hw/dpi/float_dpi.vh:30:30
    extern void dpi_ftoi(svLogic enable, int dst_fmt, int src_fmt, long long a, const svBitVecVal* frm, long long* result, svBitVecVal* fflags);
    // DPI import at ../../hw/dpi/float_dpi.vh:31:30
    extern void dpi_ftou(svLogic enable, int dst_fmt, int src_fmt, long long a, const svBitVecVal* frm, long long* result, svBitVecVal* fflags);
    // DPI import at ../../hw/dpi/util_dpi.vh:26:30
    extern void dpi_idiv(svLogic enable, svLogic is_signed, int a, int b, int* quotient, int* remainder);
    // DPI import at ../../hw/dpi/util_dpi.vh:25:30
    extern void dpi_imul(svLogic enable, svLogic is_signed_a, svLogic is_signed_b, int a, int b, int* resultl, int* resulth);
    // DPI import at ../../hw/dpi/float_dpi.vh:32:30
    extern void dpi_itof(svLogic enable, int dst_fmt, int src_fmt, long long a, const svBitVecVal* frm, long long* result, svBitVecVal* fflags);
    // DPI import at ../../hw/dpi/util_dpi.vh:28:29
    extern int dpi_register();
    // DPI import at ../../hw/dpi/util_dpi.vh:31:30
    extern void dpi_trace(int level, const char* format);
    // DPI import at ../../hw/dpi/util_dpi.vh:32:30
    extern void dpi_trace_start();
    // DPI import at ../../hw/dpi/util_dpi.vh:33:30
    extern void dpi_trace_stop();
    // DPI import at ../../hw/dpi/float_dpi.vh:33:30
    extern void dpi_utof(svLogic enable, int dst_fmt, int src_fmt, long long a, const svBitVecVal* frm, long long* result, svBitVecVal* fflags);
    // DPI import at ../../hw/dpi/util_dpi.vh:35:33
    extern long long dpi_uuid_gen(svLogic reset, int wid, long long PC);

#ifdef __cplusplus
}
#endif

#endif  // guard
