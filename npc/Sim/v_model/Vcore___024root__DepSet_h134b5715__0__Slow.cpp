// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"
#include "Vcore___024root.h"

VL_ATTR_COLD void Vcore___024root___eval_static(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_static\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vcore___024root___eval_initial(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_initial\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clock__0 = vlSelfRef.clock;
}

VL_ATTR_COLD void Vcore___024root___eval_final(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_final\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcore___024root___dump_triggers__stl(Vcore___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vcore___024root___eval_phase__stl(Vcore___024root* vlSelf);

VL_ATTR_COLD void Vcore___024root___eval_settle(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_settle\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vcore___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("build/core.sv", 1702, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vcore___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcore___024root___dump_triggers__stl(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___dump_triggers__stl\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcore___024root___stl_sequent__TOP__0(Vcore___024root* vlSelf);
VL_ATTR_COLD void Vcore___024root____Vm_traceActivitySetAll(Vcore___024root* vlSelf);

VL_ATTR_COLD void Vcore___024root___eval_stl(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_stl\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcore___024root___stl_sequent__TOP__0(vlSelf);
        Vcore___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

void Vcore___024root____Vdpiimwrap_core__DOT__ram2r1w__DOT__mem__DOT__inst_mem_read_TOP(IData/*31:0*/ addr, IData/*31:0*/ len, IData/*31:0*/ &data);
void Vcore___024root____Vdpiimwrap_core__DOT__ram2r1w__DOT__mem__DOT__data_mem_read_TOP(IData/*31:0*/ addr, IData/*31:0*/ len, IData/*31:0*/ &data);

VL_ATTR_COLD void Vcore___024root___stl_sequent__TOP__0(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___stl_sequent__TOP__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.io_debugPC = ((IData)(vlSelfRef.core__DOT__instfetch__DOT__pc_en)
                             ? vlSelfRef.core__DOT__instfetch__DOT__pc
                             : 0U);
    Vcore___024root____Vdpiimwrap_core__DOT__ram2r1w__DOT__mem__DOT__inst_mem_read_TOP(
                                                                                (0xfffffffcU 
                                                                                & vlSelfRef.core__DOT__instfetch__DOT__pc), 4U, vlSelfRef.__Vtask_core__DOT__ram2r1w__DOT__mem__DOT__inst_mem_read__0__data);
    vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__imem_rdata_reg 
        = vlSelfRef.__Vtask_core__DOT__ram2r1w__DOT__mem__DOT__inst_mem_read__0__data;
    if (vlSelfRef.core__DOT__instfetch__DOT__pc_en) {
        vlSelfRef.core__DOT___decode_io_rd_addr = (0x1fU 
                                                   & (vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__imem_rdata_reg 
                                                      >> 7U));
        vlSelfRef.core__DOT____VdfgRegularize_h47660625_0_0 
            = (vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__imem_rdata_reg 
               >> 0x14U);
        vlSelfRef.io_debugInst = vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__imem_rdata_reg;
        vlSelfRef.core__DOT___decode_io_rs1_addr = 
            (0x1fU & (vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__imem_rdata_reg 
                      >> 0xfU));
        vlSelfRef.core__DOT___decode_io_rs2_addr = 
            (0x1fU & (vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__imem_rdata_reg 
                      >> 0x14U));
        vlSelfRef.core__DOT____VdfgRegularize_h47660625_0_2 
            = (0U != (0x1fU & (vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__imem_rdata_reg 
                               >> 0xfU)));
        vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_37 
            = (1U & (vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__imem_rdata_reg 
                     >> 0xdU));
        vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_11 
            = (1U & (vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__imem_rdata_reg 
                     >> 3U));
        vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_10 
            = (1U & (vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__imem_rdata_reg 
                     >> 2U));
        vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_21 
            = (1U & (vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__imem_rdata_reg 
                     >> 6U));
        vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_36 
            = (1U & (vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__imem_rdata_reg 
                     >> 0xcU));
        vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_38 
            = (1U & (vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__imem_rdata_reg 
                     >> 0xeU));
        vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12 
            = (1U & (vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__imem_rdata_reg 
                     >> 4U));
        vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13 
            = (1U & (vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__imem_rdata_reg 
                     >> 5U));
        vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0 
            = (1U & vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__imem_rdata_reg);
        vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1 
            = (1U & (vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__imem_rdata_reg 
                     >> 1U));
    } else {
        vlSelfRef.core__DOT___decode_io_rd_addr = 0U;
        vlSelfRef.core__DOT____VdfgRegularize_h47660625_0_0 = 0U;
        vlSelfRef.io_debugInst = 0U;
        vlSelfRef.core__DOT___decode_io_rs1_addr = 0U;
        vlSelfRef.core__DOT___decode_io_rs2_addr = 0U;
        vlSelfRef.core__DOT____VdfgRegularize_h47660625_0_2 = 0U;
        vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_37 = 0U;
        vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_11 = 0U;
        vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_10 = 0U;
        vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_21 = 0U;
        vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_36 = 0U;
        vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_38 = 0U;
        vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12 = 0U;
        vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13 = 0U;
        vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0 = 0U;
        vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1 = 0U;
    }
    vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
        = (0x3fffffffU & (~ ((IData)(vlSelfRef.core__DOT__instfetch__DOT__pc_en)
                              ? (vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__imem_rdata_reg 
                                 >> 2U) : 0U)));
    vlSelfRef.core__DOT____Vcellinp__executer__io_csrR 
        = ((0x342U == (IData)(vlSelfRef.core__DOT____VdfgRegularize_h47660625_0_0))
            ? vlSelfRef.core__DOT__mcause : ((0x341U 
                                              == (IData)(vlSelfRef.core__DOT____VdfgRegularize_h47660625_0_0))
                                              ? vlSelfRef.core__DOT__mepc
                                              : ((0x305U 
                                                  == (IData)(vlSelfRef.core__DOT____VdfgRegularize_h47660625_0_0))
                                                  ? vlSelfRef.core__DOT__mtvec
                                                  : 
                                                 ((0x300U 
                                                   == (IData)(vlSelfRef.core__DOT____VdfgRegularize_h47660625_0_0))
                                                   ? vlSelfRef.core__DOT__mstatus
                                                   : 0U))));
    vlSelfRef.core__DOT__rf__DOT__casez_tmp = ((0x10U 
                                                & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                ? (
                                                   (8U 
                                                    & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_31
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_30)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_29
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_28))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_27
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_26)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_25
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_24)))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_23
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_22)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_21
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_20))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_19
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_18)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_17
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_16))))
                                                : (
                                                   (8U 
                                                    & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_15
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_14)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_13
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_12))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_11
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_10)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_9
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_8)))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_7
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_6)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_5
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_4))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_3
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_2)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_1
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_0)))));
    vlSelfRef.core__DOT__rf__DOT__casez_tmp_0 = ((0x10U 
                                                  & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_31
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_30)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_29
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_28))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_27
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_26)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_25
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_24)))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_23
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_22)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_21
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_20))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_19
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_18)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_17
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_16))))
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_15
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_14)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_13
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_12))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_11
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_10)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_9
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_8)))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_7
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_6)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_5
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_4))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_3
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_2)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_1
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_0)))));
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_61 
        = ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_37) 
           & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_38));
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_62 
        = (IData)((0x1410U == (0x1410U & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)));
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_73 
        = (IData)((0xc18U == (0xc18U & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)));
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_78 
        = ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_37) 
           & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
              >> 0xcU));
    vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T 
        = (((((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
              << 6U) | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                        << 5U)) | ((0x10U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                             << 4U)) 
                                   | (8U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                            << 2U)))) 
           | ((4U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                     >> 1U)) | ((2U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                       >> 3U)) | (1U 
                                                  & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                     >> 0xaU)))));
    vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_40 
        = (((((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
              << 7U) | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                        << 6U)) | ((0x20U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                             << 5U)) 
                                   | (0x10U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                               << 3U)))) 
           | ((((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12) 
                << 3U) | (4U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                >> 1U))) | ((2U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                   >> 3U)) 
                                            | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_37))));
    vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_48 
        = (((((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
              << 7U) | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                        << 6U)) | ((0x20U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                             << 5U)) 
                                   | (0x10U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                               << 3U)))) 
           | (((8U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                      << 1U)) | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13) 
                                 << 2U)) | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_21) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_38))));
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_80 
        = ((2U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                  >> 3U)) | (1U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                   >> 0xcU)));
    vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_24 
        = (((((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
              << 7U) | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                        << 6U)) | ((0x20U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                             << 5U)) 
                                   | (0x10U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                               << 3U)))) 
           | (((8U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                      << 1U)) | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13) 
                                 << 2U)) | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_21) 
                                             << 1U) 
                                            | (1U & 
                                               (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                >> 0xbU)))));
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_68 
        = ((vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
            >> 0xbU) & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_38));
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_71 
        = (IData)((((0x2f000000U == (0x2f000000U & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                    & (IData)(vlSelfRef.core__DOT__instfetch__DOT__pc_en)) 
                   & (vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__imem_rdata_reg 
                      >> 0x1eU)));
    vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_1 
        = (((((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
              << 7U) | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                        << 6U)) | ((0x20U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                             << 5U)) 
                                   | (0x10U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                               << 3U)))) 
           | (((8U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                      << 1U)) | (4U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                       >> 1U))) | (
                                                   (2U 
                                                    & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                       >> 3U)) 
                                                   | (1U 
                                                      & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                         >> 0xbU)))));
    vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_14 
        = ((((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
             << 5U) | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                        << 4U) | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_10) 
                                  << 3U))) | ((4U & 
                                               (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                << 1U)) 
                                              | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12) 
                                                  << 1U) 
                                                 | (1U 
                                                    & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                       >> 4U)))));
    vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_27 
        = (((((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
              << 6U) | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                        << 5U)) | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_10) 
                                    << 4U) | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_11) 
                                              << 3U))) 
           | ((4U & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs) 
              | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13) 
                  << 1U) | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_21))));
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_63 
        = (IData)((0x1800U == (0x1800U & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)));
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_84 
        = (((0x10U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                      >> 0x14U)) | ((8U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                           >> 0x16U)) 
                                    | (4U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                             >> 0x18U)))) 
           | ((2U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                     >> 0x1aU)) | (1U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                         >> 0x1dU))));
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_54 
        = (IData)((0x3f000000U == (0x3f000000U & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)));
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_81 
        = ((2U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                  >> 0xaU)) | (1U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                     >> 0xcU)));
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_86 
        = (((0x20U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                      >> 0x13U)) | ((0x10U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                              >> 0x15U)) 
                                    | (8U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                             >> 0x17U)))) 
           | ((4U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                     >> 0x19U)) | ((2U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                          >> 0x1bU)) 
                                   | (1U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                            >> 0x1dU)))));
    if (vlSelfRef.core__DOT____VdfgRegularize_h47660625_0_2) {
        vlSelfRef.core__DOT____VdfgRegularize_h47660625_0_1 
            = (0U != vlSelfRef.core__DOT__rf__DOT__casez_tmp);
        vlSelfRef.core__DOT____Vcellinp__control__io_rf_data 
            = vlSelfRef.core__DOT__rf__DOT__casez_tmp;
    } else {
        vlSelfRef.core__DOT____VdfgRegularize_h47660625_0_1 = 0U;
        vlSelfRef.core__DOT____Vcellinp__control__io_rf_data = 0U;
    }
    vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_4 
        = (((((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
              << 7U) | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                        << 6U)) | ((0x20U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                             << 5U)) 
                                   | (0x10U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                               << 3U)))) 
           | ((8U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                     << 1U)) | ((4U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                       >> 1U)) | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_80))));
    vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_16 
        = (((((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
              << 7U) | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                        << 6U)) | ((0x20U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                             << 5U)) 
                                   | (0x10U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                               << 3U)))) 
           | ((8U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                     << 1U)) | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13) 
                                 << 2U) | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_80))));
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_79 
        = (IData)(((0x418U == (0x418U & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                   & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_68)));
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_72 
        = ((vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
            >> 0x17U) & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_71));
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_64 
        = ((vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
            >> 4U) & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_63));
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_76 
        = ((vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
            >> 4U) & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_36) 
                      & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_63)));
    vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_51 
        = ((((((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
               << 0xeU) | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                           << 0xdU)) | ((0x1000U & 
                                         (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                          << 0xcU)) 
                                        | (0x800U & 
                                           (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                            << 0xaU)))) 
            | ((((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12) 
                 << 0xaU) | (0x200U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                       << 6U))) | (
                                                   (0x100U 
                                                    & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                       << 4U)) 
                                                   | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_36) 
                                                      << 7U)))) 
           | ((0x40U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                        >> 5U)) | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_38) 
                                    << 5U) | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_84))));
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_85 
        = ((0x20U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                     >> 0x12U)) | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_84));
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_55 
        = ((vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
            >> 0x17U) & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_54));
    vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_18 
        = (((((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
              << 7U) | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                        << 6U)) | ((0x20U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                             << 5U)) 
                                   | (0x10U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                               << 3U)))) 
           | ((8U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                     << 1U)) | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13) 
                                 << 2U) | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_81))));
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_82 
        = ((4U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                  >> 8U)) | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_81));
    vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_20 
        = (((((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
              << 0xcU) | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                          << 0xbU)) | ((0x400U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                  << 0xaU)) 
                                       | (0x200U & 
                                          (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                           << 8U)))) 
           | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12) 
               << 8U) | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13) 
                          << 7U) | ((0x40U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                              << 2U)) 
                                    | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_86)))));
    vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_21 
        = ((((((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
               << 0xeU) | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                           << 0xdU)) | ((0x1000U & 
                                         (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                          << 0xcU)) 
                                        | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12) 
                                           << 0xbU))) 
            | ((((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13) 
                 << 0xaU) | (0x200U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                       << 5U))) | (
                                                   (0x100U 
                                                    & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                       >> 2U)) 
                                                   | (0x80U 
                                                      & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                         >> 4U))))) 
           | ((0x40U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                        >> 6U)) | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_86)));
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_89 
        = ((0x100U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                      << 4U)) | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_36) 
                                  << 7U) | ((0x40U 
                                             & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                >> 5U)) 
                                            | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_86))));
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_88 
        = ((0x40U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                     >> 0x11U)) | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_86));
    vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_19 
        = ((((((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
               << 0xeU) | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                           << 0xdU)) | ((0x1000U & 
                                         (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                          << 0xcU)) 
                                        | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12) 
                                           << 0xbU))) 
            | ((((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13) 
                 << 0xaU) | (0x200U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                       << 5U))) | (
                                                   (0x100U 
                                                    & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                       >> 2U)) 
                                                   | (0x80U 
                                                      & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                         >> 4U))))) 
           | ((0x40U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                        >> 6U)) | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_85)));
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_91 
        = (((0x200U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                       << 5U)) | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_36) 
                                  << 8U)) | ((0x80U 
                                              & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                 >> 4U)) 
                                             | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_38) 
                                                 << 6U) 
                                                | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_85))));
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_69 
        = ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_38) 
           & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_55));
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_56 
        = ((vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
            >> 0xcU) & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_55));
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_87 
        = (((0x40U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                      << 5U)) | (0x20U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                          << 3U))) 
           | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13) 
               << 4U) | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_21) 
                          << 3U) | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_82))));
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_83 
        = ((0x10U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                     << 1U)) | ((8U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                       >> 1U)) | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_82)));
    vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_30 
        = ((((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
             << 0xdU) | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                          << 0xcU) | (0x800U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                << 0xbU)))) 
           | ((0x400U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                         << 9U)) | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12) 
                                     << 9U) | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_89))));
    vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_31 
        = ((((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
             << 0xeU) | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                          << 0xdU) | (0x1000U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                 << 0xcU)))) 
           | ((0x800U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                         << 0xaU)) | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12) 
                                       << 0xaU) | (
                                                   (0x200U 
                                                    & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                       << 6U)) 
                                                   | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_89)))));
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_90 
        = ((0x200U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                      << 5U)) | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_36) 
                                  << 8U) | ((0x80U 
                                             & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                >> 4U)) 
                                            | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_88))));
    vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_53 
        = ((((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
             << 0xfU) | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                          << 0xeU) | (0x2000U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                 << 0xdU)))) 
           | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_11) 
               << 0xcU) | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12) 
                            << 0xbU) | ((0x400U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                   << 7U)) 
                                        | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_91)))));
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_52 
        = ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
           & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
              & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                 & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12) 
                    & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13) 
                       & ((0x3ffU == (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_91)) 
                          | ((vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                              >> 4U) & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_38) 
                                        & (((IData)(vlSelfRef.core__DOT__instfetch__DOT__pc_en) 
                                            & (vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__imem_rdata_reg 
                                               >> 0x19U)) 
                                           & (0x3fU 
                                              == (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_86)))))))))));
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_70 
        = ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_37) 
           & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_69));
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_57 
        = ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12) 
           & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13) 
              & (IData)(((0x810U == (0x810U & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                         & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_56)))));
    vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_25 
        = (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
            << 8U) | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                       << 7U) | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_87)));
    vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_26 
        = (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
            << 9U) | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                       << 8U) | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_10) 
                                  << 7U) | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_87))));
    vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_12 
        = ((((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
             << 8U) | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                       << 7U)) | ((0x40U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                            << 6U)) 
                                  | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12) 
                                      << 5U) | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_83))));
    vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_9 
        = ((((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
             << 9U) | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                        << 8U) | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_10) 
                                  << 7U))) | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_11) 
                                               << 6U) 
                                              | ((0x20U 
                                                  & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                     << 3U)) 
                                                 | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_83))));
    vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_33 
        = ((((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
             << 0xeU) | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                          << 0xdU) | (0x1000U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                 << 0xcU)))) 
           | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_11) 
               << 0xbU) | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12) 
                            << 0xaU) | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_90))));
    vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_34 
        = ((((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
             << 0xfU) | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                          << 0xeU) | (0x2000U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                 << 0xdU)))) 
           | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_11) 
               << 0xcU) | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12) 
                            << 0xbU) | ((0x400U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                   << 7U)) 
                                        | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_90)))));
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_53 
        = ((0x7fffU == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_51)) 
           | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
               & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                  & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                     & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_11) 
                        & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12) 
                           & (0x3ffU == (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_91))))))) 
              | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_52)));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_2 = ((((
                                                   (0x3ffU 
                                                    == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_9)) 
                                                   | ((0x3fU 
                                                       == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_14)) 
                                                      | ((0x3ffU 
                                                          == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_26)) 
                                                         | ((0x7fU 
                                                             == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_27)) 
                                                            | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                               & (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12) 
                                                                   & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13) 
                                                                      & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_21) 
                                                                         & (IData)(
                                                                                ((0x7bffe0U 
                                                                                == 
                                                                                (0x7bffe0U 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                                & (0x7fU 
                                                                                == (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_88))))))) 
                                                                  | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                                     & (IData)(
                                                                               ((((7U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_21)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_61)))))))))) 
                                                  << 5U) 
                                                 | ((((0xffU 
                                                       == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_1)) 
                                                      | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                          & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                             & (IData)(
                                                                       ((7U 
                                                                         == 
                                                                         (7U 
                                                                          & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                        & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_62))))) 
                                                         | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                             & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                                & (IData)(
                                                                          ((7U 
                                                                            == 
                                                                            (7U 
                                                                             & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                           & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_64))))) 
                                                            | ((0xffU 
                                                                == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_24)) 
                                                               | ((0x7fffU 
                                                                   == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_31)) 
                                                                  | ((0x7fffU 
                                                                      == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_51)) 
                                                                     | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                                        & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                                           & (IData)(
                                                                                ((((0x1bU 
                                                                                == 
                                                                                (0x1bU 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_36)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_61))))))))))) 
                                                     << 4U) 
                                                    | (((0x3ffU 
                                                         == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_9)) 
                                                        | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                            & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                               & (IData)(
                                                                         ((0x41bU 
                                                                           == 
                                                                           (0x41bU 
                                                                            & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                          & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12))))) 
                                                           | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                               & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                                  & (IData)(
                                                                            ((0x1417U 
                                                                              == 
                                                                              (0x1417U 
                                                                               & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                             & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13))))) 
                                                              | ((0xffU 
                                                                  == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_18)) 
                                                                 | ((0xffU 
                                                                     == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_24)) 
                                                                    | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                                       & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                                          & ((IData)(
                                                                                (((0x101bU 
                                                                                == 
                                                                                (0x101bU 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_37))) 
                                                                             | (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                                                & ((vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                                                >> 1U) 
                                                                                & ((IData)(
                                                                                (((0x1cU 
                                                                                == 
                                                                                (0x1cU 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_36)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_68))) 
                                                                                | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12) 
                                                                                & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13) 
                                                                                & ((vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                                                >> 4U) 
                                                                                & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_70) 
                                                                                | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_36) 
                                                                                & ((vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                                                >> 0xbU) 
                                                                                & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_38) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_72))))))))))))))))))) 
                                                       << 3U))) 
                                                | (((((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                      & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                         & (IData)(
                                                                   ((7U 
                                                                     == 
                                                                     (7U 
                                                                      & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                    & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_73))))) 
                                                     | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                         & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                            & (IData)(
                                                                      ((0xfU 
                                                                        == 
                                                                        (0xfU 
                                                                         & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                       & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_62))))) 
                                                        | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                            & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                               & (IData)(
                                                                         ((0xfU 
                                                                           == 
                                                                           (0xfU 
                                                                            & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                          & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_64))))) 
                                                           | ((0x3fU 
                                                               == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_14)) 
                                                              | ((0xffU 
                                                                  == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_24)) 
                                                                 | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                                    & (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12) 
                                                                        & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13) 
                                                                           & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_21) 
                                                                              & (IData)(
                                                                                ((0x7bffe0U 
                                                                                == 
                                                                                (0x7bffe0U 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                                & (0x7fU 
                                                                                == (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_88))))))) 
                                                                       | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                                          & ((IData)(
                                                                                (((0x101bU 
                                                                                == 
                                                                                (0x101bU 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_37))) 
                                                                             | ((IData)(
                                                                                (((((0x13U 
                                                                                == 
                                                                                (0x13U 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_37)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_56))) 
                                                                                | ((IData)(
                                                                                (((0x41bU 
                                                                                == 
                                                                                (0x41bU 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_38))) 
                                                                                | (IData)(
                                                                                (((((0x813U 
                                                                                == 
                                                                                (0x813U 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_38)) 
                                                                                & (0x7fU 
                                                                                == (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_88))))))))))))))) 
                                                    << 2U) 
                                                   | (((0xfffffffeU 
                                                        & (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                            << 1U) 
                                                           & (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                               << 1U) 
                                                              & ((vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                                  << 1U) 
                                                                 & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                                    & (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12) 
                                                                        & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_73)) 
                                                                       << 1U)))))) 
                                                       | (((0x3ffU 
                                                            == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_26)) 
                                                           | ((0x7fU 
                                                               == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_27)) 
                                                              | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                                  & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12) 
                                                                     & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13) 
                                                                        & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_21) 
                                                                           & (IData)(
                                                                                ((0x7bffe0U 
                                                                                == 
                                                                                (0x7bffe0U 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                                & (0x7fU 
                                                                                == (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_88)))))))) 
                                                                 | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                                     & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                                        & (IData)(
                                                                                (((7U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_76))))) 
                                                                    | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                                        & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                                           & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                                              & ((vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                                                >> 1U) 
                                                                                & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12) 
                                                                                & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13) 
                                                                                & (0x3ffU 
                                                                                == (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_90)))))))) 
                                                                       | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                                           & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                                              & (IData)(
                                                                                ((0x417U 
                                                                                == 
                                                                                (0x417U 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_78))))) 
                                                                          | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                                              & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                                                & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                                                & ((vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                                                >> 1U) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_79))))) 
                                                                             | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                                                & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                                                & (IData)(
                                                                                (((0x41bU 
                                                                                == 
                                                                                (0x41bU 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_38))))) 
                                                                                | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                                                & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                                                & (IData)(
                                                                                (((((0x813U 
                                                                                == 
                                                                                (0x813U 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_38)) 
                                                                                & (0x7fU 
                                                                                == (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_88)))))) 
                                                                                | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                                                & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                                                & (IData)(
                                                                                ((((7U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_21)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_68))))) 
                                                                                | ((0x7fffU 
                                                                                == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_51)) 
                                                                                | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                                                & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                                                & (IData)(
                                                                                ((((0x13U 
                                                                                == 
                                                                                (0x13U 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13)) 
                                                                                & (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_36) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_69)) 
                                                                                | (IData)(
                                                                                ((0x1c00U 
                                                                                == 
                                                                                (0x1c00U 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_72))))))))))))))))))) 
                                                          << 1U)) 
                                                      | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                          & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                             & (IData)(
                                                                       (((0x41bU 
                                                                          == 
                                                                          (0x41bU 
                                                                           & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                         & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12)) 
                                                                        & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_63))))) 
                                                         | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                             & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                                & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_10) 
                                                                   & (IData)(
                                                                             ((0x1aU 
                                                                               == 
                                                                               (0x1aU 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                              & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12)))))) 
                                                            | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                                & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                                   & (IData)(
                                                                             ((0x1417U 
                                                                               == 
                                                                               (0x1417U 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                              & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13))))) 
                                                               | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                                   & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                                      & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                                         & ((vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                                             >> 1U) 
                                                                            & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_57))))) 
                                                                  | ((0x3ffU 
                                                                      == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_26)) 
                                                                     | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                                         & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                                            & (IData)(
                                                                                ((0xfU 
                                                                                == 
                                                                                (0xfU 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_76))))) 
                                                                        | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                                            & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                                               & (IData)(
                                                                                ((((0x181bU 
                                                                                == 
                                                                                (0x181bU 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_36)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_54))))) 
                                                                           | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                                               & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                                                & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                                                & ((vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                                                >> 1U) 
                                                                                & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12) 
                                                                                & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13) 
                                                                                & (0x3ffU 
                                                                                == (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_90)))))))) 
                                                                              | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                                                & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                                                & (IData)(
                                                                                (((((0x13U 
                                                                                == 
                                                                                (0x13U 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_36)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_56))))) 
                                                                                | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                                                & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                                                & (IData)(
                                                                                ((((0x807U 
                                                                                == 
                                                                                (0x807U 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_21)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_36))))) 
                                                                                | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                                                & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                                                & (IData)(
                                                                                ((((0x1bU 
                                                                                == 
                                                                                (0x1bU 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_36)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_78))))) 
                                                                                | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                                                & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                                                & (IData)(
                                                                                ((7U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_79))))) 
                                                                                | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                                                & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                                                & (IData)(
                                                                                (((((7U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_21)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_36)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_38))))) 
                                                                                | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                                                & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                                                & (IData)(
                                                                                (((0x41bU 
                                                                                == 
                                                                                (0x41bU 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_61))))) 
                                                                                | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                                                & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                                                & (IData)(
                                                                                ((((0x413U 
                                                                                == 
                                                                                (0x413U 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_70))))) 
                                                                                | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12) 
                                                                                & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13) 
                                                                                & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_21) 
                                                                                & (IData)(
                                                                                ((((0x7bffe0U 
                                                                                == 
                                                                                (0x7bffe0U 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                                & (IData)(vlSelfRef.core__DOT__instfetch__DOT__pc_en)) 
                                                                                & (vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__imem_rdata_reg 
                                                                                >> 0x14U)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_55)))))) 
                                                                                | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                                                & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                                                & (IData)(
                                                                                (((((0x81bU 
                                                                                == 
                                                                                (0x81bU 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_36)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_38)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_71))))))))))))))))))))))));
    vlSelfRef.core__DOT__decode__DOT__casez_tmp = (
                                                   ((0x3fU 
                                                     == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_14)) 
                                                    | ((0x7fU 
                                                        == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_27)) 
                                                       | ((0x7fffU 
                                                           == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_31)) 
                                                          | ((0xffffU 
                                                              == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_34)) 
                                                             | ((0x7fffU 
                                                                 == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_51)) 
                                                                | (0xffffU 
                                                                   == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_53)))))))
                                                    ? 
                                                   (((0xffU 
                                                      == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_16)) 
                                                     | ((0xffU 
                                                         == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_18)) 
                                                        | ((0x7fffU 
                                                            == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_31)) 
                                                           | ((0xffffU 
                                                               == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_34)) 
                                                              | ((0xffU 
                                                                  == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_48)) 
                                                                 | ((0x7fffU 
                                                                     == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_51)) 
                                                                    | (0xffffU 
                                                                       == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_53))))))))
                                                     ? 
                                                    (((0x7fU 
                                                       == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T)) 
                                                      | ((0xffU 
                                                          == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_1)) 
                                                         | ((0xffU 
                                                             == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_4)) 
                                                            | ((0x1ffU 
                                                                == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_12)) 
                                                               | ((0xffU 
                                                                   == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_24)) 
                                                                  | ((0x1ffU 
                                                                      == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_25)) 
                                                                     | ((0x7fU 
                                                                         == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_27)) 
                                                                        | ((0xffffU 
                                                                            == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_34)) 
                                                                           | ((0xffU 
                                                                               == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_40)) 
                                                                              | ((0xffU 
                                                                                == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_48)) 
                                                                                | (0xffffU 
                                                                                == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_53))))))))))))
                                                      ? (QData)((IData)(
                                                                        (0x1fU 
                                                                         & (vlSelfRef.io_debugInst 
                                                                            >> 0x14U))))
                                                      : (QData)((IData)(
                                                                        (0x3fU 
                                                                         & (vlSelfRef.io_debugInst 
                                                                            >> 0x14U)))))
                                                     : 
                                                    (((0x7fU 
                                                       == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T)) 
                                                      | ((0xffU 
                                                          == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_1)) 
                                                         | ((0xffU 
                                                             == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_4)) 
                                                            | ((0x1ffU 
                                                                == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_12)) 
                                                               | ((0xffU 
                                                                   == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_24)) 
                                                                  | ((0x1ffU 
                                                                      == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_25)) 
                                                                     | ((0x7fU 
                                                                         == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_27)) 
                                                                        | ((0xffffU 
                                                                            == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_34)) 
                                                                           | ((0xffU 
                                                                               == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_40)) 
                                                                              | ((0xffU 
                                                                                == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_48)) 
                                                                                | (0xffffU 
                                                                                == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_53))))))))))))
                                                      ? 
                                                     (((- (QData)((IData)(
                                                                          (vlSelfRef.io_debugInst 
                                                                           >> 0x1fU)))) 
                                                       << 0x14U) 
                                                      | (QData)((IData)(
                                                                        (((0xff000U 
                                                                           & vlSelfRef.io_debugInst) 
                                                                          | (0x800U 
                                                                             & (vlSelfRef.io_debugInst 
                                                                                >> 9U))) 
                                                                         | (0x7feU 
                                                                            & (vlSelfRef.io_debugInst 
                                                                               >> 0x14U))))))
                                                      : 
                                                     (((QData)((IData)(
                                                                       (- (IData)(
                                                                                (vlSelfRef.io_debugInst 
                                                                                >> 0x1fU))))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        (0xfffff000U 
                                                                         & vlSelfRef.io_debugInst))))))
                                                    : 
                                                   (((0xffU 
                                                      == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_16)) 
                                                     | ((0xffU 
                                                         == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_18)) 
                                                        | ((0x7fffU 
                                                            == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_31)) 
                                                           | ((0xffffU 
                                                               == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_34)) 
                                                              | ((0xffU 
                                                                  == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_48)) 
                                                                 | ((0x7fffU 
                                                                     == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_51)) 
                                                                    | (0xffffU 
                                                                       == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_53))))))))
                                                     ? 
                                                    (((0x7fU 
                                                       == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T)) 
                                                      | ((0xffU 
                                                          == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_1)) 
                                                         | ((0xffU 
                                                             == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_4)) 
                                                            | ((0x1ffU 
                                                                == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_12)) 
                                                               | ((0xffU 
                                                                   == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_24)) 
                                                                  | ((0x1ffU 
                                                                      == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_25)) 
                                                                     | ((0x7fU 
                                                                         == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_27)) 
                                                                        | ((0xffffU 
                                                                            == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_34)) 
                                                                           | ((0xffU 
                                                                               == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_40)) 
                                                                              | ((0xffU 
                                                                                == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_48)) 
                                                                                | (0xffffU 
                                                                                == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_53))))))))))))
                                                      ? 
                                                     (((- (QData)((IData)(
                                                                          (vlSelfRef.io_debugInst 
                                                                           >> 0x1fU)))) 
                                                       << 0xcU) 
                                                      | (QData)((IData)(
                                                                        ((0x800U 
                                                                          & (vlSelfRef.io_debugInst 
                                                                             << 4U)) 
                                                                         | ((0x7e0U 
                                                                             & (vlSelfRef.io_debugInst 
                                                                                >> 0x14U)) 
                                                                            | (0x1eU 
                                                                               & (vlSelfRef.io_debugInst 
                                                                                >> 7U)))))))
                                                      : 
                                                     (((- (QData)((IData)(
                                                                          (vlSelfRef.io_debugInst 
                                                                           >> 0x1fU)))) 
                                                       << 0xcU) 
                                                      | (QData)((IData)(
                                                                        ((0xfe0U 
                                                                          & (vlSelfRef.io_debugInst 
                                                                             >> 0x14U)) 
                                                                         | (0x1fU 
                                                                            & (vlSelfRef.io_debugInst 
                                                                               >> 7U)))))))
                                                     : 
                                                    (((0x7fU 
                                                       == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T)) 
                                                      | ((0xffU 
                                                          == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_1)) 
                                                         | ((0xffU 
                                                             == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_4)) 
                                                            | ((0x1ffU 
                                                                == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_12)) 
                                                               | ((0xffU 
                                                                   == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_24)) 
                                                                  | ((0x1ffU 
                                                                      == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_25)) 
                                                                     | ((0x7fU 
                                                                         == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_27)) 
                                                                        | ((0xffffU 
                                                                            == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_34)) 
                                                                           | ((0xffU 
                                                                               == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_40)) 
                                                                              | ((0xffU 
                                                                                == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_48)) 
                                                                                | (0xffffU 
                                                                                == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_53))))))))))))
                                                      ? 
                                                     (((- (QData)((IData)(
                                                                          (vlSelfRef.io_debugInst 
                                                                           >> 0x1fU)))) 
                                                       << 0xcU) 
                                                      | (QData)((IData)(
                                                                        (vlSelfRef.io_debugInst 
                                                                         >> 0x14U))))
                                                      : 0ULL)));
    vlSelfRef.core__DOT__rf__DOT___GEN = (((0x7fU == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T)) 
                                           | ((0xffU 
                                               == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_1)) 
                                              | ((0xffU 
                                                  == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_4)) 
                                                 | ((0x3ffU 
                                                     == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_9)) 
                                                    | ((0x1ffU 
                                                        == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_12)) 
                                                       | ((0x3fU 
                                                           == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_14)) 
                                                          | ((0x7fffU 
                                                              == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_19)) 
                                                             | ((0x1fffU 
                                                                 == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_20)) 
                                                                | ((0x7fffU 
                                                                    == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_21)) 
                                                                   | ((0x3ffU 
                                                                       == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_26)) 
                                                                      | ((0x7fU 
                                                                          == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_27)) 
                                                                         | ((0x3fffU 
                                                                             == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_30)) 
                                                                            | ((0x7fffU 
                                                                                == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_33)) 
                                                                               | ((0xffU 
                                                                                == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_40)) 
                                                                                | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_53))))))))))))))) 
                                          & (0U != (IData)(vlSelfRef.core__DOT___decode_io_rd_addr)));
    vlSelfRef.io_debugin1 = (((0x3fU == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_14)) 
                              | ((0x3ffU == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_26)) 
                                 | (0x7fU == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_27))))
                              ? vlSelfRef.io_debugPC
                              : (((0x7fU == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T)) 
                                  | ((0xffU == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_1)) 
                                     | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                         & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                            & (IData)(
                                                      (0x1017U 
                                                       == 
                                                       (0x1017U 
                                                        & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs))))) 
                                        | ((0x3ffU 
                                            == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_9)) 
                                           | ((0x1ffU 
                                               == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_12)) 
                                              | ((0xffU 
                                                  == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_18)) 
                                                 | ((0x7fffU 
                                                     == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_19)) 
                                                    | ((0x1fffU 
                                                        == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_20)) 
                                                       | ((0x7fffU 
                                                           == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_21)) 
                                                          | ((0x1ffU 
                                                              == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_25)) 
                                                             | ((0x3fffU 
                                                                 == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_30)) 
                                                                | ((0x7fffU 
                                                                    == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_33)) 
                                                                   | ((0xffU 
                                                                       == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_40)) 
                                                                      | ((0xffU 
                                                                          == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_48)) 
                                                                         | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_53)))))))))))))))
                                  ? vlSelfRef.core__DOT____Vcellinp__control__io_rf_data
                                  : 0U));
    vlSelfRef.core__DOT__csr_write_en = ((0x29U < (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                         & ((0x30U 
                                             > (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                            & ((0x2aU 
                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                               | ((0x2dU 
                                                   == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                  | (((0x2bU 
                                                       == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                      & (IData)(vlSelfRef.core__DOT____VdfgRegularize_h47660625_0_1)) 
                                                     | (((0x2cU 
                                                          == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                         & (IData)(vlSelfRef.core__DOT____VdfgRegularize_h47660625_0_1)) 
                                                        | (((0x2eU 
                                                             == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                            | (0x2fU 
                                                               == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))) 
                                                           & (IData)(vlSelfRef.core__DOT____VdfgRegularize_h47660625_0_2))))))));
    vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_15 
        = ((0x22U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
           | (0x23U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)));
    vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_19 
        = ((0x1cU == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
           | (0x1dU == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)));
    vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_18 
        = ((0x20U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
           | (0x21U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)));
    vlSelfRef.core__DOT__executer__DOT___GEN_48 = (
                                                   (0x26U 
                                                    == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                   | ((0x27U 
                                                       == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                      | ((0x28U 
                                                          == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                         | (0x29U 
                                                            == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)))));
    vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_11 
        = (((0x19U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
            | (0x1aU == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))) 
           | (0x1bU == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)));
    vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_17 
        = ((0x15U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
           | (0x16U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)));
    vlSelfRef.core__DOT__executer__DOT___GEN_28 = (
                                                   (1U 
                                                    == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                   | ((2U 
                                                       == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                      | ((3U 
                                                          == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                         | ((4U 
                                                             == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                            | ((5U 
                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                               | ((6U 
                                                                   == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                                  | ((7U 
                                                                      == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                                     | ((8U 
                                                                         == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                                        | ((9U 
                                                                            == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                                           | ((0xaU 
                                                                               == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                                              | ((0xbU 
                                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                                                | ((0xcU 
                                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                                                | ((0xdU 
                                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                                                | ((0xeU 
                                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                                                | ((0xfU 
                                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                                                | ((0x10U 
                                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                                                | ((0x11U 
                                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                                                | ((0x12U 
                                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                                                | (0x13U 
                                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))))))))))))))))))));
    vlSelfRef.io_debugImm = (IData)(vlSelfRef.core__DOT__decode__DOT__casez_tmp);
    vlSelfRef.core__DOT__executer__DOT___GEN_29 = ((IData)(vlSelfRef.core__DOT__executer__DOT___GEN_28) 
                                                   | ((0x14U 
                                                       == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                      | ((IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_17) 
                                                         | ((0x17U 
                                                             == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                            | (0x18U 
                                                               == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))))));
    vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_16 
        = (QData)((IData)((vlSelfRef.io_debugImm + vlSelfRef.io_debugin1)));
    vlSelfRef.io_debugin2 = (((0xffU == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_16)) 
                              | ((0xffU == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_18)) 
                                 | ((0x7fffU == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_19)) 
                                    | ((0x1fffU == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_20)) 
                                       | ((0x7fffU 
                                           == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_21)) 
                                          | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                              & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                 & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                    & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_57)))) 
                                             | ((0xffU 
                                                 == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_48)) 
                                                | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_52))))))))
                              ? ((0U != (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                  ? vlSelfRef.core__DOT__rf__DOT__casez_tmp_0
                                  : 0U) : vlSelfRef.io_debugImm);
    vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_24 
        = ((IData)(vlSelfRef.core__DOT__executer__DOT___GEN_29) 
           | ((0x19U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
              | ((0x1aU == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                 | (0x1bU == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)))));
    vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__dmem_addr_base 
        = ((IData)(vlSelfRef.core__DOT__executer__DOT___GEN_28)
            ? 0U : (IData)(((0x14U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                             ? vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_16
                             : ((0x15U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                 ? vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_16
                                 : ((0x16U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                     ? vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_16
                                     : ((0x17U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                         ? vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_16
                                         : ((0x18U 
                                             == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                             ? vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_16
                                             : ((0x19U 
                                                 == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                 ? vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_16
                                                 : 
                                                ((0x1aU 
                                                  == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                  ? vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_16
                                                  : 
                                                 ((0x1bU 
                                                   == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                   ? vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_16
                                                   : 0ULL))))))))));
    vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_1 
        = (vlSelfRef.io_debugin1 + vlSelfRef.io_debugin2);
    vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_22 
        = VL_SHIFTL_III(32,32,6, vlSelfRef.io_debugin1, 
                        (0x3fU & vlSelfRef.io_debugin2));
    vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_4 
        = (vlSelfRef.io_debugin1 ^ vlSelfRef.io_debugin2);
    vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_5 
        = VL_SHIFTR_III(32,32,6, vlSelfRef.io_debugin1, 
                        (0x3fU & vlSelfRef.io_debugin2));
    vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_6 
        = VL_SHIFTRS_III(32,32,6, vlSelfRef.io_debugin1, 
                         (0x3fU & vlSelfRef.io_debugin2));
    vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_7 
        = (vlSelfRef.io_debugin1 | vlSelfRef.io_debugin2);
    vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_8 
        = (vlSelfRef.io_debugin1 & vlSelfRef.io_debugin2);
    vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_2 
        = VL_LTS_III(32, vlSelfRef.io_debugin1, vlSelfRef.io_debugin2);
    vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_3 
        = (vlSelfRef.io_debugin1 < vlSelfRef.io_debugin2);
    vlSelfRef.core__DOT___executer_io_csrW = ((((IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_24) 
                                                | ((IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_19) 
                                                   | ((0x1eU 
                                                       == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                      | ((0x1fU 
                                                          == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                         | ((IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_18) 
                                                            | ((IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_15) 
                                                               | ((0x24U 
                                                                   == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                                  | (0x25U 
                                                                     == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))))))))) 
                                               | (IData)(vlSelfRef.core__DOT__executer__DOT___GEN_48))
                                               ? 0U
                                               : ((0x2aU 
                                                   == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                   ? vlSelfRef.io_debugin1
                                                   : 
                                                  ((0x2bU 
                                                    == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                    ? 
                                                   (vlSelfRef.core__DOT____Vcellinp__executer__io_csrR 
                                                    | vlSelfRef.io_debugin1)
                                                    : 
                                                   ((0x2cU 
                                                     == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                     ? 
                                                    ((~ vlSelfRef.io_debugin1) 
                                                     & vlSelfRef.core__DOT____Vcellinp__executer__io_csrR)
                                                     : 
                                                    ((0x2dU 
                                                      == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                      ? 
                                                     (0x1fU 
                                                      & (IData)(vlSelfRef.core__DOT__decode__DOT__casez_tmp))
                                                      : 
                                                     ((0x2eU 
                                                       == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                       ? 
                                                      ((0xffffffe0U 
                                                        & vlSelfRef.core__DOT____Vcellinp__executer__io_csrR) 
                                                       | (0x1fU 
                                                          & (vlSelfRef.core__DOT____Vcellinp__executer__io_csrR 
                                                             | (IData)(vlSelfRef.core__DOT__decode__DOT__casez_tmp))))
                                                       : 
                                                      ((0x2fU 
                                                        == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                        ? 
                                                       (0x1fU 
                                                        & ((~ (IData)(vlSelfRef.core__DOT__decode__DOT__casez_tmp)) 
                                                           & vlSelfRef.core__DOT____Vcellinp__executer__io_csrR))
                                                        : 0U)))))));
    if ((((~ (IData)(vlSelfRef.core__DOT__executer__DOT___GEN_28)) 
          & ((0x14U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
             | ((IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_17) 
                | ((0x17U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                   | ((0x18U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                      | (IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_11)))))) 
         & (~ ((~ (IData)(vlSelfRef.core__DOT__executer__DOT___GEN_29)) 
               & (IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_11))))) {
        Vcore___024root____Vdpiimwrap_core__DOT__ram2r1w__DOT__mem__DOT__data_mem_read_TOP(vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__dmem_addr_base, 4U, vlSelfRef.__Vtask_core__DOT__ram2r1w__DOT__mem__DOT__data_mem_read__1__data);
        vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__dmem_data_low 
            = vlSelfRef.__Vtask_core__DOT__ram2r1w__DOT__mem__DOT__data_mem_read__1__data;
        Vcore___024root____Vdpiimwrap_core__DOT__ram2r1w__DOT__mem__DOT__data_mem_read_TOP(
                                                                                ((IData)(4U) 
                                                                                + vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__dmem_addr_base), 4U, vlSelfRef.__Vtask_core__DOT__ram2r1w__DOT__mem__DOT__data_mem_read__2__data);
        vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__dmem_data_high 
            = vlSelfRef.__Vtask_core__DOT__ram2r1w__DOT__mem__DOT__data_mem_read__2__data;
        vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__dmem_rdata_reg 
            = (((QData)((IData)(vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__dmem_data_high)) 
                << 0x20U) | (QData)((IData)(vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__dmem_data_low)));
    } else {
        vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__dmem_rdata_reg = 0ULL;
    }
    vlSelfRef.core__DOT___executer_io_branchCond = 
        ((~ (IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_24)) 
         & ((0x1cU == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
             ? (vlSelfRef.io_debugin1 == vlSelfRef.io_debugin2)
             : ((0x1dU == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                 ? (vlSelfRef.io_debugin1 != vlSelfRef.io_debugin2)
                 : ((0x1eU == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                     ? (IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_2)
                     : ((0x1fU == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                         ? VL_GTES_III(32, vlSelfRef.io_debugin1, vlSelfRef.io_debugin2)
                         : ((0x20U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                             ? (IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_3)
                             : ((0x21U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                 ? (vlSelfRef.io_debugin1 
                                    >= vlSelfRef.io_debugin2)
                                 : (IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_15))))))));
    vlSelfRef.core__DOT___executer_io_out = ((1U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                              ? vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_1
                                              : ((2U 
                                                  == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                  ? 
                                                 (vlSelfRef.io_debugin1 
                                                  - vlSelfRef.io_debugin2)
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                   ? vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_22
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                    ? (IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_2)
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                     ? (IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_3)
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                      ? vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_4
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                       ? vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_5
                                                       : 
                                                      ((8U 
                                                        == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                        ? vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_6
                                                        : 
                                                       ((9U 
                                                         == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                         ? vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_7
                                                         : 
                                                        ((0xaU 
                                                          == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                          ? vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_8
                                                          : 
                                                         ((0xbU 
                                                           == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                           ? vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_1
                                                           : 
                                                          ((0xcU 
                                                            == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                            ? (IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_2)
                                                            : 
                                                           ((0xdU 
                                                             == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                             ? (IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_3)
                                                             : 
                                                            ((0xeU 
                                                              == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                              ? vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_4
                                                              : 
                                                             ((0xfU 
                                                               == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                               ? vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_7
                                                               : 
                                                              ((0x10U 
                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                                ? vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_8
                                                                : 
                                                               ((0x11U 
                                                                 == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                                 ? vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_22
                                                                 : 
                                                                ((0x12U 
                                                                  == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                                  ? vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_5
                                                                  : 
                                                                 ((0x13U 
                                                                   == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                                   ? vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_6
                                                                   : 
                                                                  ((0x14U 
                                                                    == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                                    ? 
                                                                   (((- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__dmem_rdata_reg 
                                                                                >> 7U))))) 
                                                                     << 8U) 
                                                                    | (0xffU 
                                                                       & (IData)(vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__dmem_rdata_reg)))
                                                                    : 
                                                                   ((0x15U 
                                                                     == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                                     ? 
                                                                    (((- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__dmem_rdata_reg 
                                                                                >> 0xfU))))) 
                                                                      << 0x10U) 
                                                                     | (0xffffU 
                                                                        & (IData)(vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__dmem_rdata_reg)))
                                                                     : 
                                                                    ((0x16U 
                                                                      == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                                      ? (IData)(vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__dmem_rdata_reg)
                                                                      : 
                                                                     ((0x17U 
                                                                       == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                                       ? 
                                                                      (0xffU 
                                                                       & (IData)(vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__dmem_rdata_reg))
                                                                       : 
                                                                      ((0x18U 
                                                                        == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                                        ? 
                                                                       (0xffffU 
                                                                        & (IData)(vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__dmem_rdata_reg))
                                                                        : 
                                                                       (((IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_11) 
                                                                         | ((IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_19) 
                                                                            | ((0x1eU 
                                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                                               | ((0x1fU 
                                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                                                | (IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_18)))))
                                                                         ? 0U
                                                                         : 
                                                                        ((0x22U 
                                                                          == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                                          ? 
                                                                         ((IData)(4U) 
                                                                          + vlSelfRef.io_debugin1)
                                                                          : 
                                                                         ((0x23U 
                                                                           == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                                           ? 
                                                                          ((IData)(4U) 
                                                                           + vlSelfRef.io_debugin1)
                                                                           : 
                                                                          ((0x24U 
                                                                            == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                                            ? vlSelfRef.io_debugin2
                                                                            : 
                                                                           ((0x25U 
                                                                             == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                                             ? vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_1
                                                                             : 
                                                                            ((1U 
                                                                              & ((~ 
                                                                                ((0x2aU 
                                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                                                | ((0x2bU 
                                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                                                | ((0x2cU 
                                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                                                | ((0x2dU 
                                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                                                | ((0x2eU 
                                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                                                | (0x2fU 
                                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)))))))) 
                                                                                | (IData)(vlSelfRef.core__DOT__executer__DOT___GEN_48)))
                                                                              ? 0U
                                                                              : vlSelfRef.core__DOT____Vcellinp__executer__io_csrR))))))))))))))))))))))))))))));
    vlSelfRef.io_debugBranch = vlSelfRef.core__DOT___executer_io_branchCond;
    vlSelfRef.io_debugDNPC = ((IData)(vlSelfRef.core__DOT___executer_io_branchCond)
                               ? ((0x3ffU == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_26))
                                   ? (vlSelfRef.io_debugImm 
                                      + vlSelfRef.core__DOT____Vcellinp__control__io_rf_data)
                                   : (vlSelfRef.io_debugImm 
                                      + vlSelfRef.io_debugPC))
                               : ((IData)(4U) + vlSelfRef.io_debugPC));
}

VL_ATTR_COLD void Vcore___024root___eval_triggers__stl(Vcore___024root* vlSelf);

VL_ATTR_COLD bool Vcore___024root___eval_phase__stl(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_phase__stl\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vcore___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vcore___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcore___024root___dump_triggers__act(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___dump_triggers__act\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcore___024root___dump_triggers__nba(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___dump_triggers__nba\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcore___024root____Vm_traceActivitySetAll(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root____Vm_traceActivitySetAll\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void Vcore___024root___ctor_var_reset(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___ctor_var_reset\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_debugPC = VL_RAND_RESET_I(32);
    vlSelf->io_debugInst = VL_RAND_RESET_I(32);
    vlSelf->io_debugDNPC = VL_RAND_RESET_I(32);
    vlSelf->io_debugin1 = VL_RAND_RESET_I(32);
    vlSelf->io_debugin2 = VL_RAND_RESET_I(32);
    vlSelf->io_debugBranch = VL_RAND_RESET_I(32);
    vlSelf->io_debugImm = VL_RAND_RESET_I(32);
    vlSelf->core__DOT___executer_io_out = VL_RAND_RESET_I(32);
    vlSelf->core__DOT___executer_io_csrW = VL_RAND_RESET_I(32);
    vlSelf->core__DOT___executer_io_branchCond = VL_RAND_RESET_I(1);
    vlSelf->core__DOT___decode_io_rs1_addr = VL_RAND_RESET_I(5);
    vlSelf->core__DOT___decode_io_rs2_addr = VL_RAND_RESET_I(5);
    vlSelf->core__DOT___decode_io_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->core__DOT__mstatus = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__mtvec = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__mepc = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__mcause = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__csr_write_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT____Vcellinp__executer__io_csrR = VL_RAND_RESET_I(32);
    vlSelf->core__DOT____Vcellinp__control__io_rf_data = VL_RAND_RESET_I(32);
    vlSelf->core__DOT____VdfgRegularize_h47660625_0_0 = VL_RAND_RESET_I(12);
    vlSelf->core__DOT____VdfgRegularize_h47660625_0_1 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT____VdfgRegularize_h47660625_0_2 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__ram2r1w__DOT__mem__DOT__imem_rdata_reg = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__ram2r1w__DOT__mem__DOT__dmem_rdata_reg = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__ram2r1w__DOT__mem__DOT__dmem_addr_base = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__ram2r1w__DOT__mem__DOT__dmem_data_low = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__ram2r1w__DOT__mem__DOT__dmem_data_high = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__decode__DOT__decodedBundle_invInputs = VL_RAND_RESET_I(30);
    vlSelf->core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T = VL_RAND_RESET_I(7);
    vlSelf->core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_1 = VL_RAND_RESET_I(8);
    vlSelf->core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_4 = VL_RAND_RESET_I(8);
    vlSelf->core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_9 = VL_RAND_RESET_I(10);
    vlSelf->core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_12 = VL_RAND_RESET_I(9);
    vlSelf->core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_14 = VL_RAND_RESET_I(6);
    vlSelf->core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_16 = VL_RAND_RESET_I(8);
    vlSelf->core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_18 = VL_RAND_RESET_I(8);
    vlSelf->core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_19 = VL_RAND_RESET_I(15);
    vlSelf->core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_20 = VL_RAND_RESET_I(13);
    vlSelf->core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_21 = VL_RAND_RESET_I(15);
    vlSelf->core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_24 = VL_RAND_RESET_I(8);
    vlSelf->core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_25 = VL_RAND_RESET_I(9);
    vlSelf->core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_26 = VL_RAND_RESET_I(10);
    vlSelf->core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_27 = VL_RAND_RESET_I(7);
    vlSelf->core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_30 = VL_RAND_RESET_I(14);
    vlSelf->core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_31 = VL_RAND_RESET_I(15);
    vlSelf->core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_33 = VL_RAND_RESET_I(15);
    vlSelf->core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_40 = VL_RAND_RESET_I(8);
    vlSelf->core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_48 = VL_RAND_RESET_I(8);
    vlSelf->core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_51 = VL_RAND_RESET_I(15);
    vlSelf->core__DOT__decode__DOT__casez_tmp = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_34 = VL_RAND_RESET_I(16);
    vlSelf->core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_53 = VL_RAND_RESET_I(16);
    vlSelf->core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_10 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_11 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_21 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_36 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_37 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_38 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_52 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_53 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_54 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_55 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_56 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_57 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_61 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_62 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_63 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_64 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_68 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_69 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_70 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_71 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_72 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_73 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_76 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_78 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_79 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_80 = VL_RAND_RESET_I(2);
    vlSelf->core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_81 = VL_RAND_RESET_I(2);
    vlSelf->core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_82 = VL_RAND_RESET_I(3);
    vlSelf->core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_83 = VL_RAND_RESET_I(5);
    vlSelf->core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_84 = VL_RAND_RESET_I(5);
    vlSelf->core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_85 = VL_RAND_RESET_I(6);
    vlSelf->core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_86 = VL_RAND_RESET_I(6);
    vlSelf->core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_87 = VL_RAND_RESET_I(7);
    vlSelf->core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_88 = VL_RAND_RESET_I(7);
    vlSelf->core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_89 = VL_RAND_RESET_I(9);
    vlSelf->core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_90 = VL_RAND_RESET_I(10);
    vlSelf->core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_91 = VL_RAND_RESET_I(10);
    vlSelf->core__DOT__executer__DOT___GEN_28 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__executer__DOT___GEN_29 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__executer__DOT___GEN_48 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_1 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_2 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_3 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_4 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_5 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_6 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_7 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_8 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_11 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_15 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_16 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_17 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_18 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_19 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_22 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_24 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__instfetch__DOT__pc_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__instfetch__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_0 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_1 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_2 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_3 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_4 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_5 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_6 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_7 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_8 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_9 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_10 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_11 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_12 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_13 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_14 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_15 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_16 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_17 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_18 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_19 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_20 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_21 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_22 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_23 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_24 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_25 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_26 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_27 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_28 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_29 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_30 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_31 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__casez_tmp = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__casez_tmp_0 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hd87f99a1_0_2 = VL_RAND_RESET_I(6);
    vlSelf->__Vtask_core__DOT__ram2r1w__DOT__mem__DOT__inst_mem_read__0__data = 0;
    vlSelf->__Vtask_core__DOT__ram2r1w__DOT__mem__DOT__data_mem_read__1__data = 0;
    vlSelf->__Vtask_core__DOT__ram2r1w__DOT__mem__DOT__data_mem_read__2__data = 0;
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
