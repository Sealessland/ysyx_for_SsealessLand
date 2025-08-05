// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_23060321__Syms.h"


void Vysyx_23060321___024root__trace_chg_0_sub_0(Vysyx_23060321___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vysyx_23060321___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060321___024root__trace_chg_0\n"); );
    // Init
    Vysyx_23060321___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_23060321___024root*>(voidSelf);
    Vysyx_23060321__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vysyx_23060321___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vysyx_23060321___024root__trace_chg_0_sub_0(Vysyx_23060321___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060321___024root__trace_chg_0_sub_0\n"); );
    Vysyx_23060321__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.clock));
    bufp->chgBit(oldp+1,(vlSelfRef.reset));
    bufp->chgBit(oldp+2,(vlSelfRef.io_master_awvalid));
    bufp->chgBit(oldp+3,(vlSelfRef.io_master_awready));
    bufp->chgCData(oldp+4,(vlSelfRef.io_master_awid),4);
    bufp->chgIData(oldp+5,(vlSelfRef.io_master_awaddr),32);
    bufp->chgCData(oldp+6,(vlSelfRef.io_master_awlen),8);
    bufp->chgCData(oldp+7,(vlSelfRef.io_master_awsize),3);
    bufp->chgCData(oldp+8,(vlSelfRef.io_master_awburst),2);
    bufp->chgBit(oldp+9,(vlSelfRef.io_master_wvalid));
    bufp->chgBit(oldp+10,(vlSelfRef.io_master_wready));
    bufp->chgIData(oldp+11,(vlSelfRef.io_master_wdata),32);
    bufp->chgCData(oldp+12,(vlSelfRef.io_master_wstrb),4);
    bufp->chgBit(oldp+13,(vlSelfRef.io_master_wlast));
    bufp->chgBit(oldp+14,(vlSelfRef.io_master_arvalid));
    bufp->chgBit(oldp+15,(vlSelfRef.io_master_arready));
    bufp->chgCData(oldp+16,(vlSelfRef.io_master_arid),4);
    bufp->chgIData(oldp+17,(vlSelfRef.io_master_araddr),32);
    bufp->chgCData(oldp+18,(vlSelfRef.io_master_arlen),8);
    bufp->chgCData(oldp+19,(vlSelfRef.io_master_arsize),3);
    bufp->chgCData(oldp+20,(vlSelfRef.io_master_arburst),2);
    bufp->chgBit(oldp+21,(vlSelfRef.io_master_rvalid));
    bufp->chgBit(oldp+22,(vlSelfRef.io_master_rready));
    bufp->chgCData(oldp+23,(vlSelfRef.io_master_rid),4);
    bufp->chgIData(oldp+24,(vlSelfRef.io_master_rdata),32);
    bufp->chgCData(oldp+25,(vlSelfRef.io_master_rresp),2);
    bufp->chgBit(oldp+26,(vlSelfRef.io_master_rlast));
    bufp->chgBit(oldp+27,(vlSelfRef.io_master_bvalid));
    bufp->chgBit(oldp+28,(vlSelfRef.io_master_bready));
    bufp->chgCData(oldp+29,(vlSelfRef.io_master_bid),4);
    bufp->chgCData(oldp+30,(vlSelfRef.io_master_bresp),2);
    bufp->chgBit(oldp+31,(vlSelfRef.io_slave_awvalid));
    bufp->chgBit(oldp+32,(vlSelfRef.io_slave_awready));
    bufp->chgCData(oldp+33,(vlSelfRef.io_slave_awid),4);
    bufp->chgIData(oldp+34,(vlSelfRef.io_slave_awaddr),32);
    bufp->chgCData(oldp+35,(vlSelfRef.io_slave_awlen),8);
    bufp->chgCData(oldp+36,(vlSelfRef.io_slave_awsize),3);
    bufp->chgCData(oldp+37,(vlSelfRef.io_slave_awburst),2);
    bufp->chgBit(oldp+38,(vlSelfRef.io_slave_wvalid));
    bufp->chgBit(oldp+39,(vlSelfRef.io_slave_wready));
    bufp->chgIData(oldp+40,(vlSelfRef.io_slave_wdata),32);
    bufp->chgCData(oldp+41,(vlSelfRef.io_slave_wstrb),4);
    bufp->chgBit(oldp+42,(vlSelfRef.io_slave_wlast));
    bufp->chgBit(oldp+43,(vlSelfRef.io_slave_arvalid));
    bufp->chgBit(oldp+44,(vlSelfRef.io_slave_arready));
    bufp->chgCData(oldp+45,(vlSelfRef.io_slave_arid),4);
    bufp->chgIData(oldp+46,(vlSelfRef.io_slave_araddr),32);
    bufp->chgCData(oldp+47,(vlSelfRef.io_slave_arlen),8);
    bufp->chgCData(oldp+48,(vlSelfRef.io_slave_arsize),3);
    bufp->chgCData(oldp+49,(vlSelfRef.io_slave_arburst),2);
    bufp->chgBit(oldp+50,(vlSelfRef.io_slave_rvalid));
    bufp->chgBit(oldp+51,(vlSelfRef.io_slave_rready));
    bufp->chgCData(oldp+52,(vlSelfRef.io_slave_rid),4);
    bufp->chgIData(oldp+53,(vlSelfRef.io_slave_rdata),32);
    bufp->chgCData(oldp+54,(vlSelfRef.io_slave_rresp),2);
    bufp->chgBit(oldp+55,(vlSelfRef.io_slave_rlast));
    bufp->chgBit(oldp+56,(vlSelfRef.io_slave_bvalid));
    bufp->chgBit(oldp+57,(vlSelfRef.io_slave_bready));
    bufp->chgCData(oldp+58,(vlSelfRef.io_slave_bid),4);
    bufp->chgCData(oldp+59,(vlSelfRef.io_slave_bresp),2);
}

void Vysyx_23060321___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060321___024root__trace_cleanup\n"); );
    // Init
    Vysyx_23060321___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_23060321___024root*>(voidSelf);
    Vysyx_23060321__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
