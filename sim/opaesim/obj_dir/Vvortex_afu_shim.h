// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VVORTEX_AFU_SHIM_H_
#define VERILATED_VVORTEX_AFU_SHIM_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class Vvortex_afu_shim__Syms;
class Vvortex_afu_shim___024root;
class Vvortex_afu_shim_vortex_afu_shim;
class Vvortex_afu_shim___024unit;


// This class is the main interface to the Verilated model
class Vvortex_afu_shim VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vvortex_afu_shim__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&reset,0,0);
    VL_IN8(&vcp2af_sRxPort_c0_TxAlmFull,0,0);
    VL_IN8(&vcp2af_sRxPort_c1_TxAlmFull,0,0);
    VL_IN8(&vcp2af_sRxPort_c0_hdr_vc_used,1,0);
    VL_IN8(&vcp2af_sRxPort_c0_hdr_rsvd1,0,0);
    VL_IN8(&vcp2af_sRxPort_c0_hdr_hit_miss,0,0);
    VL_IN8(&vcp2af_sRxPort_c0_hdr_rsvd0,1,0);
    VL_IN8(&vcp2af_sRxPort_c0_hdr_cl_num,1,0);
    VL_IN8(&vcp2af_sRxPort_c0_hdr_resp_type,3,0);
    VL_IN8(&vcp2af_sRxPort_c0_rspValid,0,0);
    VL_IN8(&vcp2af_sRxPort_c0_mmioRdValid,0,0);
    VL_IN8(&vcp2af_sRxPort_c0_mmioWrValid,0,0);
    VL_IN8(&vcp2af_sRxPort_c0_ReqMmioHdr_length,1,0);
    VL_IN8(&vcp2af_sRxPort_c0_ReqMmioHdr_rsvd,0,0);
    VL_IN8(&vcp2af_sRxPort_c1_hdr_vc_used,1,0);
    VL_IN8(&vcp2af_sRxPort_c1_hdr_rsvd1,0,0);
    VL_IN8(&vcp2af_sRxPort_c1_hdr_hit_miss,0,0);
    VL_IN8(&vcp2af_sRxPort_c1_hdr_format,0,0);
    VL_IN8(&vcp2af_sRxPort_c1_hdr_rsvd0,0,0);
    VL_IN8(&vcp2af_sRxPort_c1_hdr_cl_num,1,0);
    VL_IN8(&vcp2af_sRxPort_c1_hdr_resp_type,3,0);
    VL_IN8(&vcp2af_sRxPort_c1_rspValid,0,0);
    VL_OUT8(&af2cp_sTxPort_c0_hdr_vc_sel,1,0);
    VL_OUT8(&af2cp_sTxPort_c0_hdr_rsvd1,1,0);
    VL_OUT8(&af2cp_sTxPort_c0_hdr_cl_len,1,0);
    VL_OUT8(&af2cp_sTxPort_c0_hdr_req_type,3,0);
    VL_OUT8(&af2cp_sTxPort_c0_hdr_rsvd0,5,0);
    VL_OUT8(&af2cp_sTxPort_c0_valid,0,0);
    VL_OUT8(&af2cp_sTxPort_c1_hdr_rsvd2,5,0);
    VL_OUT8(&af2cp_sTxPort_c1_hdr_vc_sel,1,0);
    VL_OUT8(&af2cp_sTxPort_c1_hdr_sop,0,0);
    VL_OUT8(&af2cp_sTxPort_c1_hdr_rsvd1,0,0);
    VL_OUT8(&af2cp_sTxPort_c1_hdr_cl_len,1,0);
    VL_OUT8(&af2cp_sTxPort_c1_hdr_req_type,3,0);
    VL_OUT8(&af2cp_sTxPort_c1_hdr_rsvd0,5,0);
    VL_OUT8(&af2cp_sTxPort_c1_valid,0,0);
    VL_OUT8(&af2cp_sTxPort_c2_mmioRdValid,0,0);
    VL_IN16(&vcp2af_sRxPort_c0_hdr_mdata,15,0);
    VL_IN16(&vcp2af_sRxPort_c0_ReqMmioHdr_address,15,0);
    VL_IN16(&vcp2af_sRxPort_c0_ReqMmioHdr_tid,8,0);
    VL_IN16(&vcp2af_sRxPort_c1_hdr_mdata,15,0);
    VL_OUT16(&af2cp_sTxPort_c0_hdr_mdata,15,0);
    VL_OUT16(&af2cp_sTxPort_c1_hdr_mdata,15,0);
    VL_OUT16(&af2cp_sTxPort_c2_hdr_tid,8,0);
    VL_INW(&vcp2af_sRxPort_c0_data,511,0,16);
    VL_OUTW(&af2cp_sTxPort_c1_data,511,0,16);
    VL_OUT64(&af2cp_sTxPort_c0_hdr_address,41,0);
    VL_OUT64(&af2cp_sTxPort_c1_hdr_address,41,0);
    VL_OUT64(&af2cp_sTxPort_c2_data,63,0);
    VL_OUTW((&avs_writedata)[2],511,0,16);
    VL_INW((&avs_readdata)[2],511,0,16);
    VL_OUT((&avs_address)[2],25,0);
    VL_IN8((&avs_waitrequest)[2],0,0);
    VL_OUT8((&avs_write)[2],0,0);
    VL_OUT8((&avs_read)[2],0,0);
    VL_OUT64((&avs_byteenable)[2],63,0);
    VL_OUT8((&avs_burstcount)[2],3,0);
    VL_IN8((&avs_readdatavalid)[2],0,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vvortex_afu_shim_vortex_afu_shim* const vortex_afu_shim;
    Vvortex_afu_shim___024unit* const __PVT____024unit;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vvortex_afu_shim___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vvortex_afu_shim(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vvortex_afu_shim(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vvortex_afu_shim();
  private:
    VL_UNCOPYABLE(Vvortex_afu_shim);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
