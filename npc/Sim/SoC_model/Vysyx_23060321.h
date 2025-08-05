// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VYSYX_23060321_H_
#define VERILATED_VYSYX_23060321_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class Vysyx_23060321__Syms;
class Vysyx_23060321___024root;
class VerilatedVcdC;
class Vysyx_23060321___024unit;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vysyx_23060321 VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vysyx_23060321__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = true;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clock,0,0);
    VL_IN8(&reset,0,0);
    VL_OUT8(&io_master_awvalid,0,0);
    VL_IN8(&io_master_awready,0,0);
    VL_OUT8(&io_master_awid,3,0);
    VL_OUT8(&io_master_awlen,7,0);
    VL_OUT8(&io_master_awsize,2,0);
    VL_OUT8(&io_master_awburst,1,0);
    VL_OUT8(&io_master_wvalid,0,0);
    VL_IN8(&io_master_wready,0,0);
    VL_OUT8(&io_master_wstrb,3,0);
    VL_OUT8(&io_master_wlast,0,0);
    VL_OUT8(&io_master_arvalid,0,0);
    VL_IN8(&io_master_arready,0,0);
    VL_OUT8(&io_master_arid,3,0);
    VL_OUT8(&io_master_arlen,7,0);
    VL_OUT8(&io_master_arsize,2,0);
    VL_OUT8(&io_master_arburst,1,0);
    VL_IN8(&io_master_rvalid,0,0);
    VL_OUT8(&io_master_rready,0,0);
    VL_IN8(&io_master_rid,3,0);
    VL_IN8(&io_master_rresp,1,0);
    VL_IN8(&io_master_rlast,0,0);
    VL_IN8(&io_master_bvalid,0,0);
    VL_OUT8(&io_master_bready,0,0);
    VL_IN8(&io_master_bid,3,0);
    VL_IN8(&io_master_bresp,1,0);
    VL_IN8(&io_slave_awvalid,0,0);
    VL_OUT8(&io_slave_awready,0,0);
    VL_IN8(&io_slave_awid,3,0);
    VL_IN8(&io_slave_awlen,7,0);
    VL_IN8(&io_slave_awsize,2,0);
    VL_IN8(&io_slave_awburst,1,0);
    VL_IN8(&io_slave_wvalid,0,0);
    VL_OUT8(&io_slave_wready,0,0);
    VL_IN8(&io_slave_wstrb,3,0);
    VL_IN8(&io_slave_wlast,0,0);
    VL_IN8(&io_slave_arvalid,0,0);
    VL_OUT8(&io_slave_arready,0,0);
    VL_IN8(&io_slave_arid,3,0);
    VL_IN8(&io_slave_arlen,7,0);
    VL_IN8(&io_slave_arsize,2,0);
    VL_IN8(&io_slave_arburst,1,0);
    VL_OUT8(&io_slave_rvalid,0,0);
    VL_IN8(&io_slave_rready,0,0);
    VL_OUT8(&io_slave_rid,3,0);
    VL_OUT8(&io_slave_rresp,1,0);
    VL_OUT8(&io_slave_rlast,0,0);
    VL_OUT8(&io_slave_bvalid,0,0);
    VL_IN8(&io_slave_bready,0,0);
    VL_OUT8(&io_slave_bid,3,0);
    VL_OUT8(&io_slave_bresp,1,0);
    VL_OUT(&io_master_awaddr,31,0);
    VL_OUT(&io_master_wdata,31,0);
    VL_OUT(&io_master_araddr,31,0);
    VL_IN(&io_master_rdata,31,0);
    VL_IN(&io_slave_awaddr,31,0);
    VL_IN(&io_slave_wdata,31,0);
    VL_IN(&io_slave_araddr,31,0);
    VL_OUT(&io_slave_rdata,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vysyx_23060321___024unit* const __PVT____024unit;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vysyx_23060321___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vysyx_23060321(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vysyx_23060321(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vysyx_23060321();
  private:
    VL_UNCOPYABLE(Vysyx_23060321);  ///< Copying not allowed

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
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
