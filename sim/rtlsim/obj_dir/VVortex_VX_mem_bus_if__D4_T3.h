// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VVortex.h for the primary calling header

#ifndef VERILATED_VVORTEX_VX_MEM_BUS_IF__D4_T3_H_
#define VERILATED_VVORTEX_VX_MEM_BUS_IF__D4_T3_H_  // guard

#include "verilated.h"

class VVortex__Syms;

class VVortex_VX_mem_bus_if__D4_T3 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VlWide<3>/*69:0*/ __PVT__req_data;
    QData/*34:0*/ __PVT__rsp_data;

    // INTERNAL VARIABLES
    VVortex__Syms* const vlSymsp;

    // CONSTRUCTORS
    VVortex_VX_mem_bus_if__D4_T3(VVortex__Syms* symsp, const char* name);
    ~VVortex_VX_mem_bus_if__D4_T3();
    VL_UNCOPYABLE(VVortex_VX_mem_bus_if__D4_T3);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
