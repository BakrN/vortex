// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VVortex.h for the primary calling header

#ifndef VERILATED_VVORTEX___024UNIT_H_
#define VERILATED_VVORTEX___024UNIT_H_  // guard

#include "verilated.h"

class VVortex__Syms;

class VVortex___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    VVortex__Syms* const vlSymsp;

    // CONSTRUCTORS
    VVortex___024unit(VVortex__Syms* symsp, const char* name);
    ~VVortex___024unit();
    VL_UNCOPYABLE(VVortex___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
