// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VVortex.h for the primary calling header

#ifndef VERILATED_VVORTEX_VX_WRITEBACK_IF_H_
#define VERILATED_VVORTEX_VX_WRITEBACK_IF_H_  // guard

#include "verilated.h"

class VVortex__Syms;

class VVortex_VX_writeback_if final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__valid;
    VlWide<6>/*173:0*/ __PVT__data;

    // INTERNAL VARIABLES
    VVortex__Syms* const vlSymsp;

    // CONSTRUCTORS
    VVortex_VX_writeback_if(VVortex__Syms* symsp, const char* name);
    ~VVortex_VX_writeback_if();
    VL_UNCOPYABLE(VVortex_VX_writeback_if);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
