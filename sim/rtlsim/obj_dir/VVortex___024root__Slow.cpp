// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVortex.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VVortex__Syms.h"
#include "VVortex___024root.h"

void VVortex___024root___ctor_var_reset(VVortex___024root* vlSelf);

VVortex___024root::VVortex___024root(VVortex__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VVortex___024root___ctor_var_reset(this);
}

void VVortex___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VVortex___024root::~VVortex___024root() {
}
