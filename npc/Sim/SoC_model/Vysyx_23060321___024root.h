// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_23060321.h for the primary calling header

#ifndef VERILATED_VYSYX_23060321___024ROOT_H_
#define VERILATED_VYSYX_23060321___024ROOT_H_  // guard

#include "verilated.h"
class Vysyx_23060321___024unit;


class Vysyx_23060321__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vysyx_23060321___024root final : public VerilatedModule {
  public:
    // CELLS
    Vysyx_23060321___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(io_master_awvalid,0,0);
    VL_IN8(io_master_awready,0,0);
    VL_OUT8(io_master_awid,3,0);
    VL_OUT8(io_master_awlen,7,0);
    VL_OUT8(io_master_awsize,2,0);
    VL_OUT8(io_master_awburst,1,0);
    VL_OUT8(io_master_wvalid,0,0);
    VL_IN8(io_master_wready,0,0);
    VL_OUT8(io_master_wstrb,3,0);
    VL_OUT8(io_master_wlast,0,0);
    VL_OUT8(io_master_arvalid,0,0);
    VL_IN8(io_master_arready,0,0);
    VL_OUT8(io_master_arid,3,0);
    VL_OUT8(io_master_arlen,7,0);
    VL_OUT8(io_master_arsize,2,0);
    VL_OUT8(io_master_arburst,1,0);
    VL_IN8(io_master_rvalid,0,0);
    VL_OUT8(io_master_rready,0,0);
    VL_IN8(io_master_rid,3,0);
    VL_IN8(io_master_rresp,1,0);
    VL_IN8(io_master_rlast,0,0);
    VL_IN8(io_master_bvalid,0,0);
    VL_OUT8(io_master_bready,0,0);
    VL_IN8(io_master_bid,3,0);
    VL_IN8(io_master_bresp,1,0);
    VL_IN8(io_slave_awvalid,0,0);
    VL_OUT8(io_slave_awready,0,0);
    VL_IN8(io_slave_awid,3,0);
    VL_IN8(io_slave_awlen,7,0);
    VL_IN8(io_slave_awsize,2,0);
    VL_IN8(io_slave_awburst,1,0);
    VL_IN8(io_slave_wvalid,0,0);
    VL_OUT8(io_slave_wready,0,0);
    VL_IN8(io_slave_wstrb,3,0);
    VL_IN8(io_slave_wlast,0,0);
    VL_IN8(io_slave_arvalid,0,0);
    VL_OUT8(io_slave_arready,0,0);
    VL_IN8(io_slave_arid,3,0);
    VL_IN8(io_slave_arlen,7,0);
    VL_IN8(io_slave_arsize,2,0);
    VL_IN8(io_slave_arburst,1,0);
    VL_OUT8(io_slave_rvalid,0,0);
    VL_IN8(io_slave_rready,0,0);
    VL_OUT8(io_slave_rid,3,0);
    VL_OUT8(io_slave_rresp,1,0);
    VL_OUT8(io_slave_rlast,0,0);
    VL_OUT8(io_slave_bvalid,0,0);
    VL_IN8(io_slave_bready,0,0);
    VL_OUT8(io_slave_bid,3,0);
    VL_OUT8(io_slave_bresp,1,0);
    CData/*0:0*/ __VactContinue;
    VL_OUT(io_master_awaddr,31,0);
    VL_OUT(io_master_wdata,31,0);
    VL_OUT(io_master_araddr,31,0);
    VL_IN(io_master_rdata,31,0);
    VL_IN(io_slave_awaddr,31,0);
    VL_IN(io_slave_wdata,31,0);
    VL_IN(io_slave_araddr,31,0);
    VL_OUT(io_slave_rdata,31,0);
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vysyx_23060321__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vysyx_23060321___024root(Vysyx_23060321__Syms* symsp, const char* v__name);
    ~Vysyx_23060321___024root();
    VL_UNCOPYABLE(Vysyx_23060321___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
