// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VVortex.h"
#include "VVortex__Syms.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

VVortex::VVortex(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VVortex__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , mem_req_valid{vlSymsp->TOP.mem_req_valid}
    , mem_req_rw{vlSymsp->TOP.mem_req_rw}
    , mem_req_ready{vlSymsp->TOP.mem_req_ready}
    , mem_rsp_valid{vlSymsp->TOP.mem_rsp_valid}
    , mem_rsp_ready{vlSymsp->TOP.mem_rsp_ready}
    , dcr_wr_valid{vlSymsp->TOP.dcr_wr_valid}
    , busy{vlSymsp->TOP.busy}
    , mem_req_tag{vlSymsp->TOP.mem_req_tag}
    , mem_rsp_tag{vlSymsp->TOP.mem_rsp_tag}
    , dcr_wr_addr{vlSymsp->TOP.dcr_wr_addr}
    , mem_req_addr{vlSymsp->TOP.mem_req_addr}
    , mem_req_data{vlSymsp->TOP.mem_req_data}
    , mem_rsp_data{vlSymsp->TOP.mem_rsp_data}
    , dcr_wr_data{vlSymsp->TOP.dcr_wr_data}
    , mem_req_byteen{vlSymsp->TOP.mem_req_byteen}
    , Vortex{vlSymsp->TOP.Vortex}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VVortex::VVortex(const char* _vcname__)
    : VVortex(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VVortex::~VVortex() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VVortex___024root___eval_initial(VVortex___024root* vlSelf);
void VVortex___024root___eval_settle(VVortex___024root* vlSelf);
void VVortex___024root___eval(VVortex___024root* vlSelf);
QData VVortex___024root___change_request(VVortex___024root* vlSelf);
#ifdef VL_DEBUG
void VVortex___024root___eval_debug_assertions(VVortex___024root* vlSelf);
#endif  // VL_DEBUG
void VVortex___024root___final(VVortex___024root* vlSelf);

static void _eval_initial_loop(VVortex__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VVortex___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VVortex___024root___eval_settle(&(vlSymsp->TOP));
        VVortex___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VVortex___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("../../hw/rtl/Vortex.sv", 16, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VVortex___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VVortex::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VVortex::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VVortex___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VVortex___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VVortex___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("../../hw/rtl/Vortex.sv", 16, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VVortex___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* VVortex::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VVortex::final() {
    VVortex___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VVortex::hierName() const { return vlSymsp->name(); }
const char* VVortex::modelName() const { return "VVortex"; }
unsigned VVortex::threads() const { return 1; }
