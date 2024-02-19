// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vvortex_afu_shim.h"
#include "Vvortex_afu_shim__Syms.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vvortex_afu_shim::Vvortex_afu_shim(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vvortex_afu_shim__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , vcp2af_sRxPort_c0_TxAlmFull{vlSymsp->TOP.vcp2af_sRxPort_c0_TxAlmFull}
    , vcp2af_sRxPort_c1_TxAlmFull{vlSymsp->TOP.vcp2af_sRxPort_c1_TxAlmFull}
    , vcp2af_sRxPort_c0_hdr_vc_used{vlSymsp->TOP.vcp2af_sRxPort_c0_hdr_vc_used}
    , vcp2af_sRxPort_c0_hdr_rsvd1{vlSymsp->TOP.vcp2af_sRxPort_c0_hdr_rsvd1}
    , vcp2af_sRxPort_c0_hdr_hit_miss{vlSymsp->TOP.vcp2af_sRxPort_c0_hdr_hit_miss}
    , vcp2af_sRxPort_c0_hdr_rsvd0{vlSymsp->TOP.vcp2af_sRxPort_c0_hdr_rsvd0}
    , vcp2af_sRxPort_c0_hdr_cl_num{vlSymsp->TOP.vcp2af_sRxPort_c0_hdr_cl_num}
    , vcp2af_sRxPort_c0_hdr_resp_type{vlSymsp->TOP.vcp2af_sRxPort_c0_hdr_resp_type}
    , vcp2af_sRxPort_c0_rspValid{vlSymsp->TOP.vcp2af_sRxPort_c0_rspValid}
    , vcp2af_sRxPort_c0_mmioRdValid{vlSymsp->TOP.vcp2af_sRxPort_c0_mmioRdValid}
    , vcp2af_sRxPort_c0_mmioWrValid{vlSymsp->TOP.vcp2af_sRxPort_c0_mmioWrValid}
    , vcp2af_sRxPort_c0_ReqMmioHdr_length{vlSymsp->TOP.vcp2af_sRxPort_c0_ReqMmioHdr_length}
    , vcp2af_sRxPort_c0_ReqMmioHdr_rsvd{vlSymsp->TOP.vcp2af_sRxPort_c0_ReqMmioHdr_rsvd}
    , vcp2af_sRxPort_c1_hdr_vc_used{vlSymsp->TOP.vcp2af_sRxPort_c1_hdr_vc_used}
    , vcp2af_sRxPort_c1_hdr_rsvd1{vlSymsp->TOP.vcp2af_sRxPort_c1_hdr_rsvd1}
    , vcp2af_sRxPort_c1_hdr_hit_miss{vlSymsp->TOP.vcp2af_sRxPort_c1_hdr_hit_miss}
    , vcp2af_sRxPort_c1_hdr_format{vlSymsp->TOP.vcp2af_sRxPort_c1_hdr_format}
    , vcp2af_sRxPort_c1_hdr_rsvd0{vlSymsp->TOP.vcp2af_sRxPort_c1_hdr_rsvd0}
    , vcp2af_sRxPort_c1_hdr_cl_num{vlSymsp->TOP.vcp2af_sRxPort_c1_hdr_cl_num}
    , vcp2af_sRxPort_c1_hdr_resp_type{vlSymsp->TOP.vcp2af_sRxPort_c1_hdr_resp_type}
    , vcp2af_sRxPort_c1_rspValid{vlSymsp->TOP.vcp2af_sRxPort_c1_rspValid}
    , af2cp_sTxPort_c0_hdr_vc_sel{vlSymsp->TOP.af2cp_sTxPort_c0_hdr_vc_sel}
    , af2cp_sTxPort_c0_hdr_rsvd1{vlSymsp->TOP.af2cp_sTxPort_c0_hdr_rsvd1}
    , af2cp_sTxPort_c0_hdr_cl_len{vlSymsp->TOP.af2cp_sTxPort_c0_hdr_cl_len}
    , af2cp_sTxPort_c0_hdr_req_type{vlSymsp->TOP.af2cp_sTxPort_c0_hdr_req_type}
    , af2cp_sTxPort_c0_hdr_rsvd0{vlSymsp->TOP.af2cp_sTxPort_c0_hdr_rsvd0}
    , af2cp_sTxPort_c0_valid{vlSymsp->TOP.af2cp_sTxPort_c0_valid}
    , af2cp_sTxPort_c1_hdr_rsvd2{vlSymsp->TOP.af2cp_sTxPort_c1_hdr_rsvd2}
    , af2cp_sTxPort_c1_hdr_vc_sel{vlSymsp->TOP.af2cp_sTxPort_c1_hdr_vc_sel}
    , af2cp_sTxPort_c1_hdr_sop{vlSymsp->TOP.af2cp_sTxPort_c1_hdr_sop}
    , af2cp_sTxPort_c1_hdr_rsvd1{vlSymsp->TOP.af2cp_sTxPort_c1_hdr_rsvd1}
    , af2cp_sTxPort_c1_hdr_cl_len{vlSymsp->TOP.af2cp_sTxPort_c1_hdr_cl_len}
    , af2cp_sTxPort_c1_hdr_req_type{vlSymsp->TOP.af2cp_sTxPort_c1_hdr_req_type}
    , af2cp_sTxPort_c1_hdr_rsvd0{vlSymsp->TOP.af2cp_sTxPort_c1_hdr_rsvd0}
    , af2cp_sTxPort_c1_valid{vlSymsp->TOP.af2cp_sTxPort_c1_valid}
    , af2cp_sTxPort_c2_mmioRdValid{vlSymsp->TOP.af2cp_sTxPort_c2_mmioRdValid}
    , vcp2af_sRxPort_c0_hdr_mdata{vlSymsp->TOP.vcp2af_sRxPort_c0_hdr_mdata}
    , vcp2af_sRxPort_c0_ReqMmioHdr_address{vlSymsp->TOP.vcp2af_sRxPort_c0_ReqMmioHdr_address}
    , vcp2af_sRxPort_c0_ReqMmioHdr_tid{vlSymsp->TOP.vcp2af_sRxPort_c0_ReqMmioHdr_tid}
    , vcp2af_sRxPort_c1_hdr_mdata{vlSymsp->TOP.vcp2af_sRxPort_c1_hdr_mdata}
    , af2cp_sTxPort_c0_hdr_mdata{vlSymsp->TOP.af2cp_sTxPort_c0_hdr_mdata}
    , af2cp_sTxPort_c1_hdr_mdata{vlSymsp->TOP.af2cp_sTxPort_c1_hdr_mdata}
    , af2cp_sTxPort_c2_hdr_tid{vlSymsp->TOP.af2cp_sTxPort_c2_hdr_tid}
    , vcp2af_sRxPort_c0_data{vlSymsp->TOP.vcp2af_sRxPort_c0_data}
    , af2cp_sTxPort_c1_data{vlSymsp->TOP.af2cp_sTxPort_c1_data}
    , af2cp_sTxPort_c0_hdr_address{vlSymsp->TOP.af2cp_sTxPort_c0_hdr_address}
    , af2cp_sTxPort_c1_hdr_address{vlSymsp->TOP.af2cp_sTxPort_c1_hdr_address}
    , af2cp_sTxPort_c2_data{vlSymsp->TOP.af2cp_sTxPort_c2_data}
    , avs_writedata{vlSymsp->TOP.avs_writedata}
    , avs_readdata{vlSymsp->TOP.avs_readdata}
    , avs_address{vlSymsp->TOP.avs_address}
    , avs_waitrequest{vlSymsp->TOP.avs_waitrequest}
    , avs_write{vlSymsp->TOP.avs_write}
    , avs_read{vlSymsp->TOP.avs_read}
    , avs_byteenable{vlSymsp->TOP.avs_byteenable}
    , avs_burstcount{vlSymsp->TOP.avs_burstcount}
    , avs_readdatavalid{vlSymsp->TOP.avs_readdatavalid}
    , vortex_afu_shim{vlSymsp->TOP.vortex_afu_shim}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vvortex_afu_shim::Vvortex_afu_shim(const char* _vcname__)
    : Vvortex_afu_shim(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vvortex_afu_shim::~Vvortex_afu_shim() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vvortex_afu_shim___024root___eval_initial(Vvortex_afu_shim___024root* vlSelf);
void Vvortex_afu_shim___024root___eval_settle(Vvortex_afu_shim___024root* vlSelf);
void Vvortex_afu_shim___024root___eval(Vvortex_afu_shim___024root* vlSelf);
QData Vvortex_afu_shim___024root___change_request(Vvortex_afu_shim___024root* vlSelf);
#ifdef VL_DEBUG
void Vvortex_afu_shim___024root___eval_debug_assertions(Vvortex_afu_shim___024root* vlSelf);
#endif  // VL_DEBUG
void Vvortex_afu_shim___024root___final(Vvortex_afu_shim___024root* vlSelf);

static void _eval_initial_loop(Vvortex_afu_shim__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vvortex_afu_shim___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vvortex_afu_shim___024root___eval_settle(&(vlSymsp->TOP));
        Vvortex_afu_shim___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vvortex_afu_shim___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("vortex_afu_shim.sv", 21, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vvortex_afu_shim___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vvortex_afu_shim::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vvortex_afu_shim::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vvortex_afu_shim___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vvortex_afu_shim___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vvortex_afu_shim___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("vortex_afu_shim.sv", 21, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vvortex_afu_shim___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vvortex_afu_shim::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vvortex_afu_shim::final() {
    Vvortex_afu_shim___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vvortex_afu_shim::hierName() const { return vlSymsp->name(); }
const char* Vvortex_afu_shim::modelName() const { return "Vvortex_afu_shim"; }
unsigned Vvortex_afu_shim::threads() const { return 1; }
