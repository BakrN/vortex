// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVortex.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VVortex__Syms.h"
#include "VVortex___024unit.h"

void VVortex___024unit___ctor_var_reset(VVortex___024unit* vlSelf);

VVortex___024unit::VVortex___024unit(VVortex__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VVortex___024unit___ctor_var_reset(this);
}

void VVortex___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VVortex___024unit::~VVortex___024unit() {
}
