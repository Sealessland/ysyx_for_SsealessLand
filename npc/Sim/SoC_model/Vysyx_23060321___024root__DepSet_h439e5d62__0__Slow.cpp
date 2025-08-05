// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060321.h for the primary calling header

#include "Vysyx_23060321__pch.h"
#include "Vysyx_23060321___024root.h"

VL_ATTR_COLD void Vysyx_23060321___024root___eval_static(Vysyx_23060321___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060321___024root___eval_static\n"); );
    Vysyx_23060321__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vysyx_23060321___024root___eval_initial__TOP(Vysyx_23060321___024root* vlSelf);

VL_ATTR_COLD void Vysyx_23060321___024root___eval_initial(Vysyx_23060321___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060321___024root___eval_initial\n"); );
    Vysyx_23060321__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vysyx_23060321___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vysyx_23060321___024root___eval_initial__TOP(Vysyx_23060321___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060321___024root___eval_initial__TOP\n"); );
    Vysyx_23060321__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.io_master_awvalid = 0U;
    vlSelfRef.io_master_awid = 0U;
    vlSelfRef.io_master_awaddr = 0U;
    vlSelfRef.io_master_awlen = 0U;
    vlSelfRef.io_master_awsize = 0U;
    vlSelfRef.io_master_awburst = 0U;
    vlSelfRef.io_master_wvalid = 0U;
    vlSelfRef.io_master_wdata = 0U;
    vlSelfRef.io_master_wstrb = 0U;
    vlSelfRef.io_master_wlast = 0U;
    vlSelfRef.io_master_arvalid = 0U;
    vlSelfRef.io_master_arid = 0U;
    vlSelfRef.io_master_araddr = 0U;
    vlSelfRef.io_master_arlen = 0U;
    vlSelfRef.io_master_arsize = 0U;
    vlSelfRef.io_master_arburst = 0U;
    vlSelfRef.io_master_rready = 0U;
    vlSelfRef.io_master_bready = 0U;
    vlSelfRef.io_slave_awready = 0U;
    vlSelfRef.io_slave_wready = 0U;
    vlSelfRef.io_slave_arready = 0U;
    vlSelfRef.io_slave_rvalid = 0U;
    vlSelfRef.io_slave_rid = 0U;
    vlSelfRef.io_slave_rdata = 0U;
    vlSelfRef.io_slave_rresp = 0U;
    vlSelfRef.io_slave_rlast = 0U;
    vlSelfRef.io_slave_bvalid = 0U;
    vlSelfRef.io_slave_bid = 0U;
    vlSelfRef.io_slave_bresp = 0U;
}

VL_ATTR_COLD void Vysyx_23060321___024root___eval_final(Vysyx_23060321___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060321___024root___eval_final\n"); );
    Vysyx_23060321__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vysyx_23060321___024root___eval_settle(Vysyx_23060321___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060321___024root___eval_settle\n"); );
    Vysyx_23060321__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060321___024root___dump_triggers__act(Vysyx_23060321___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060321___024root___dump_triggers__act\n"); );
    Vysyx_23060321__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060321___024root___dump_triggers__nba(Vysyx_23060321___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060321___024root___dump_triggers__nba\n"); );
    Vysyx_23060321__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_23060321___024root___ctor_var_reset(Vysyx_23060321___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060321___024root___ctor_var_reset\n"); );
    Vysyx_23060321__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_master_awvalid = VL_RAND_RESET_I(1);
    vlSelf->io_master_awready = VL_RAND_RESET_I(1);
    vlSelf->io_master_awid = VL_RAND_RESET_I(4);
    vlSelf->io_master_awaddr = VL_RAND_RESET_I(32);
    vlSelf->io_master_awlen = VL_RAND_RESET_I(8);
    vlSelf->io_master_awsize = VL_RAND_RESET_I(3);
    vlSelf->io_master_awburst = VL_RAND_RESET_I(2);
    vlSelf->io_master_wvalid = VL_RAND_RESET_I(1);
    vlSelf->io_master_wready = VL_RAND_RESET_I(1);
    vlSelf->io_master_wdata = VL_RAND_RESET_I(32);
    vlSelf->io_master_wstrb = VL_RAND_RESET_I(4);
    vlSelf->io_master_wlast = VL_RAND_RESET_I(1);
    vlSelf->io_master_arvalid = VL_RAND_RESET_I(1);
    vlSelf->io_master_arready = VL_RAND_RESET_I(1);
    vlSelf->io_master_arid = VL_RAND_RESET_I(4);
    vlSelf->io_master_araddr = VL_RAND_RESET_I(32);
    vlSelf->io_master_arlen = VL_RAND_RESET_I(8);
    vlSelf->io_master_arsize = VL_RAND_RESET_I(3);
    vlSelf->io_master_arburst = VL_RAND_RESET_I(2);
    vlSelf->io_master_rvalid = VL_RAND_RESET_I(1);
    vlSelf->io_master_rready = VL_RAND_RESET_I(1);
    vlSelf->io_master_rid = VL_RAND_RESET_I(4);
    vlSelf->io_master_rdata = VL_RAND_RESET_I(32);
    vlSelf->io_master_rresp = VL_RAND_RESET_I(2);
    vlSelf->io_master_rlast = VL_RAND_RESET_I(1);
    vlSelf->io_master_bvalid = VL_RAND_RESET_I(1);
    vlSelf->io_master_bready = VL_RAND_RESET_I(1);
    vlSelf->io_master_bid = VL_RAND_RESET_I(4);
    vlSelf->io_master_bresp = VL_RAND_RESET_I(2);
    vlSelf->io_slave_awvalid = VL_RAND_RESET_I(1);
    vlSelf->io_slave_awready = VL_RAND_RESET_I(1);
    vlSelf->io_slave_awid = VL_RAND_RESET_I(4);
    vlSelf->io_slave_awaddr = VL_RAND_RESET_I(32);
    vlSelf->io_slave_awlen = VL_RAND_RESET_I(8);
    vlSelf->io_slave_awsize = VL_RAND_RESET_I(3);
    vlSelf->io_slave_awburst = VL_RAND_RESET_I(2);
    vlSelf->io_slave_wvalid = VL_RAND_RESET_I(1);
    vlSelf->io_slave_wready = VL_RAND_RESET_I(1);
    vlSelf->io_slave_wdata = VL_RAND_RESET_I(32);
    vlSelf->io_slave_wstrb = VL_RAND_RESET_I(4);
    vlSelf->io_slave_wlast = VL_RAND_RESET_I(1);
    vlSelf->io_slave_arvalid = VL_RAND_RESET_I(1);
    vlSelf->io_slave_arready = VL_RAND_RESET_I(1);
    vlSelf->io_slave_arid = VL_RAND_RESET_I(4);
    vlSelf->io_slave_araddr = VL_RAND_RESET_I(32);
    vlSelf->io_slave_arlen = VL_RAND_RESET_I(8);
    vlSelf->io_slave_arsize = VL_RAND_RESET_I(3);
    vlSelf->io_slave_arburst = VL_RAND_RESET_I(2);
    vlSelf->io_slave_rvalid = VL_RAND_RESET_I(1);
    vlSelf->io_slave_rready = VL_RAND_RESET_I(1);
    vlSelf->io_slave_rid = VL_RAND_RESET_I(4);
    vlSelf->io_slave_rdata = VL_RAND_RESET_I(32);
    vlSelf->io_slave_rresp = VL_RAND_RESET_I(2);
    vlSelf->io_slave_rlast = VL_RAND_RESET_I(1);
    vlSelf->io_slave_bvalid = VL_RAND_RESET_I(1);
    vlSelf->io_slave_bready = VL_RAND_RESET_I(1);
    vlSelf->io_slave_bid = VL_RAND_RESET_I(4);
    vlSelf->io_slave_bresp = VL_RAND_RESET_I(2);
}
