// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvortex_afu_shim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vvortex_afu_shim__Syms.h"
#include "Vvortex_afu_shim___024unit.h"

void Vvortex_afu_shim___024unit___ctor_var_reset(Vvortex_afu_shim___024unit* vlSelf);

Vvortex_afu_shim___024unit::Vvortex_afu_shim___024unit(Vvortex_afu_shim__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vvortex_afu_shim___024unit___ctor_var_reset(this);
}

void Vvortex_afu_shim___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vvortex_afu_shim___024unit::~Vvortex_afu_shim___024unit() {
}
