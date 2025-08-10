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
            VL_FATAL_MT("build/core.sv", 2256, "", "Settle region did not converge.");
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

void Vcore___024root____Vdpiimwrap_core__DOT__if_sram__DOT__read_backend__DOT__memory_read_TOP(IData/*31:0*/ ar_addr, IData/*31:0*/ &r_data);

VL_ATTR_COLD void Vcore___024root___stl_sequent__TOP__0(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___stl_sequent__TOP__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.io_debugPC = vlSelfRef.core__DOT__ifu__DOT__pc;
    vlSelfRef.io_debugInst = vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data;
    vlSelfRef.core__DOT__lsu__DOT__io_in_ready_0 = 
        (0U == (IData)(vlSelfRef.core__DOT__lsu__DOT__state));
    vlSelfRef.core__DOT__lsu__DOT___GEN = (1U == (IData)(vlSelfRef.core__DOT__lsu__DOT__state));
    vlSelfRef.core__DOT__lsu__DOT___GEN_0 = (2U == (IData)(vlSelfRef.core__DOT__lsu__DOT__state));
    vlSelfRef.core__DOT__lsu__DOT___GEN_4 = (3U == (IData)(vlSelfRef.core__DOT__lsu__DOT__state));
    vlSelfRef.io_inst_done = ((IData)(vlSelfRef.core__DOT__LS_reg) 
                              | (IData)(vlSelfRef.core__DOT__wbu__DOT__io_w2f_inst_done_REG));
    vlSelfRef.core__DOT__ifu__DOT___GEN_1 = ((~ (IData)(vlSelfRef.core__DOT__if_sram__DOT__r_state)) 
                                             & ((~ (IData)(vlSelfRef.core__DOT__ifu__DOT__state)) 
                                                & (0U 
                                                   == (IData)(vlSelfRef.core__DOT__lsu__DOT__state))));
    vlSelfRef.core__DOT___ifu_io_axi_r_ready = ((0U 
                                                 == (IData)(vlSelfRef.core__DOT__lsu__DOT__state)) 
                                                & (IData)(vlSelfRef.core__DOT__ifu__DOT__state));
    vlSelfRef.core__DOT__lsu__DOT__io_axi_ar_valid_0 
        = ((0U != (IData)(vlSelfRef.core__DOT__lsu__DOT__state)) 
           & (1U == (IData)(vlSelfRef.core__DOT__lsu__DOT__state)));
    vlSelfRef.core__DOT___exu_io_out_valid = ((IData)(vlSelfRef.core__DOT__if_sram__DOT__r_valid_reg) 
                                              & (IData)(vlSelfRef.core__DOT__ifu__DOT__state));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_75 
        = (IData)((0x4000U == (0x5000U & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_91 
        = (IData)((0U == (0xbe000000U & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_80 
        = (IData)((0x4000U == (0x6000U & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_87 
        = (IData)((0U == (0x5040U & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)));
    vlSelfRef.core__DOT__lsu__DOT____VdfgRegularize_hbcd0008a_0_0 
        = ((0U == (IData)(vlSelfRef.core__DOT__lsu__DOT__state)) 
           | (1U == (IData)(vlSelfRef.core__DOT__lsu__DOT__state)));
    vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_4 
        = ((((0x80U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                       << 7U)) | (0x40U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                           << 5U))) 
            | ((0x20U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                             >> 2U)) << 5U)) | (0x10U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                     >> 3U)) 
                                                   << 4U)))) 
           | (((8U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                          >> 4U)) << 3U)) | (4U & (
                                                   (~ 
                                                    (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                     >> 6U)) 
                                                   << 2U))) 
              | ((2U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                            >> 0xcU)) << 1U)) | (1U 
                                                 & (~ 
                                                    (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                     >> 0xeU))))));
    vlSelfRef.core__DOT__rf__DOT__casez_tmp_0 = ((0x1000000U 
                                                  & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                  ? 
                                                 ((0x800000U 
                                                   & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                   ? 
                                                  ((0x400000U 
                                                    & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                    ? 
                                                   ((0x200000U 
                                                     & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_31
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_30)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_29
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_28))
                                                    : 
                                                   ((0x200000U 
                                                     & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_27
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_26)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_25
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_24)))
                                                   : 
                                                  ((0x400000U 
                                                    & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                    ? 
                                                   ((0x200000U 
                                                     & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_23
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_22)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_21
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_20))
                                                    : 
                                                   ((0x200000U 
                                                     & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_19
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_18)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_17
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_16))))
                                                  : 
                                                 ((0x800000U 
                                                   & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                   ? 
                                                  ((0x400000U 
                                                    & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                    ? 
                                                   ((0x200000U 
                                                     & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_15
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_14)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_13
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_12))
                                                    : 
                                                   ((0x200000U 
                                                     & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_11
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_10)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_9
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_8)))
                                                   : 
                                                  ((0x400000U 
                                                    & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                    ? 
                                                   ((0x200000U 
                                                     & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_7
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_6)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_5
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_4))
                                                    : 
                                                   ((0x200000U 
                                                     & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_3
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_2)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_1
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_0)))));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_69 
        = (IData)((0x2000U == (0x6000U & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_84 
        = (IData)((0x40000000U == (0xfc000000U & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)));
    vlSelfRef.core__DOT__rf__DOT__casez_tmp = ((0x80000U 
                                                & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                ? (
                                                   (0x40000U 
                                                    & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                    ? 
                                                   ((0x20000U 
                                                     & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                     ? 
                                                    ((0x10000U 
                                                      & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                      ? 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_31
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_30)
                                                      : 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_29
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_28))
                                                     : 
                                                    ((0x10000U 
                                                      & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                      ? 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_27
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_26)
                                                      : 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_25
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_24)))
                                                    : 
                                                   ((0x20000U 
                                                     & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                     ? 
                                                    ((0x10000U 
                                                      & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                      ? 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_23
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_22)
                                                      : 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_21
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_20))
                                                     : 
                                                    ((0x10000U 
                                                      & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                      ? 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_19
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_18)
                                                      : 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_17
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_16))))
                                                : (
                                                   (0x40000U 
                                                    & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                    ? 
                                                   ((0x20000U 
                                                     & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                     ? 
                                                    ((0x10000U 
                                                      & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                      ? 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_15
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_14)
                                                      : 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_13
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_12))
                                                     : 
                                                    ((0x10000U 
                                                      & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                      ? 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_11
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_10)
                                                      : 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_9
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_8)))
                                                    : 
                                                   ((0x20000U 
                                                     & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                     ? 
                                                    ((0x10000U 
                                                      & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                      ? 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_7
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_6)
                                                      : 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_5
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_4))
                                                     : 
                                                    ((0x10000U 
                                                      & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                      ? 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_3
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_2)
                                                      : 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_1
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_0)))));
    vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_22 
        = ((((0x80U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                       << 7U)) | (0x40U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                           << 5U))) 
            | ((0x20U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                             >> 2U)) << 5U)) | (0x10U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                     >> 3U)) 
                                                   << 4U)))) 
           | (((8U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                          >> 4U)) << 3U)) | (4U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                   >> 3U))) 
              | ((2U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                        >> 5U)) | (1U & (~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                            >> 0xdU))))));
    vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_58 
        = ((((0x80U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                       << 7U)) | (0x40U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                           << 5U))) 
            | ((0x20U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                             >> 2U)) << 5U)) | (0x10U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                     >> 3U)) 
                                                   << 4U)))) 
           | (((8U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                          >> 4U)) << 3U)) | (4U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                   >> 3U))) 
              | ((2U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                        >> 5U)) | (1U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                         >> 0xeU)))));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_43 
        = (IData)((0x6060U == (0x6060U & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_42 
        = (IData)((0x5060U == (0x5060U & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_52 
        = (IData)((0U == (0x6000U & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_70 
        = (IData)((0U == (0xfc000000U & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)));
    vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T 
        = ((((0x40U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                       << 6U)) | (0x20U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                           << 4U))) 
            | ((0x10U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                             >> 2U)) << 4U)) | (8U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                     >> 3U)) 
                                                   << 3U)))) 
           | ((4U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                         >> 5U)) << 2U)) | ((2U & (
                                                   (~ 
                                                    (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                     >> 6U)) 
                                                   << 1U)) 
                                            | (1U & 
                                               (~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                   >> 0xcU))))));
    vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_3 
        = ((((0x80U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                       << 7U)) | (0x40U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                           << 5U))) 
            | ((0x20U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                             >> 2U)) << 5U)) | (0x10U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                     >> 3U)) 
                                                   << 4U)))) 
           | (((8U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                          >> 4U)) << 3U)) | (4U & (
                                                   (~ 
                                                    (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                     >> 5U)) 
                                                   << 2U))) 
              | ((2U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                            >> 6U)) << 1U)) | (1U & 
                                               (~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                   >> 0xeU))))));
    vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_41 
        = ((((0x80U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                       << 7U)) | (0x40U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                           << 5U))) 
            | ((0x20U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                             >> 2U)) << 5U)) | (0x10U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                     >> 3U)) 
                                                   << 4U)))) 
           | (((8U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                      >> 1U)) | (4U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                           >> 5U)) 
                                       << 2U))) | (
                                                   (2U 
                                                    & ((~ 
                                                        (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                         >> 6U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                         >> 0xdU)))));
    vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_10 
        = (((0x20U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                      << 5U)) | ((0x10U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                           << 3U)) 
                                 | (8U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                          << 1U)))) 
           | ((4U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                         >> 3U)) << 2U)) | ((2U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                   >> 3U)) 
                                            | (1U & 
                                               (~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                   >> 6U))))));
    vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_26 
        = ((((0x40U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                       << 6U)) | (0x20U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                           << 4U))) 
            | ((0x10U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                         << 2U)) | (8U & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data))) 
           | ((4U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                         >> 4U)) << 2U)) | ((2U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                   >> 4U)) 
                                            | (1U & 
                                               (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                >> 6U)))));
    vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_1 
        = ((((0x80U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                       << 7U)) | (0x40U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                           << 5U))) 
            | ((0x20U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                             >> 2U)) << 5U)) | (0x10U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                     >> 3U)) 
                                                   << 4U)))) 
           | (((8U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                          >> 4U)) << 3U)) | (4U & (
                                                   (~ 
                                                    (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                     >> 5U)) 
                                                   << 2U))) 
              | ((2U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                            >> 6U)) << 1U)) | (1U & 
                                               (~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                   >> 0xdU))))));
    vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_47 
        = ((((0x80U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                       << 7U)) | (0x40U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                           << 5U))) 
            | ((0x20U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                             >> 2U)) << 5U)) | (0x10U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                     >> 3U)) 
                                                   << 4U)))) 
           | (((8U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                      >> 1U)) | (4U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                       >> 3U))) | (
                                                   (2U 
                                                    & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                       >> 5U)) 
                                                   | (1U 
                                                      & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                         >> 0xdU)))));
    vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_39 
        = ((((0x80U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                       << 7U)) | (0x40U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                           << 5U))) 
            | ((0x20U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                             >> 2U)) << 5U)) | (0x10U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                     >> 3U)) 
                                                   << 4U)))) 
           | (((8U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                      >> 1U)) | (4U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                       >> 3U))) | (
                                                   (2U 
                                                    & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                       >> 5U)) 
                                                   | (1U 
                                                      & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                         >> 0xcU)))));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_95 
        = ((4U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                      >> 0xcU)) << 2U)) | ((2U & ((~ 
                                                   (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                    >> 0xdU)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                  >> 0xeU)))));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_102 
        = (((0x10U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                          >> 0x1aU)) << 4U)) | ((8U 
                                                 & ((~ 
                                                     (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                      >> 0x1bU)) 
                                                    << 3U)) 
                                                | (4U 
                                                   & ((~ 
                                                       (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                        >> 0x1cU)) 
                                                      << 2U)))) 
           | ((2U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                         >> 0x1dU)) << 1U)) | (1U & 
                                               (~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                   >> 0x1fU)))));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_97 
        = ((2U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                      >> 0x1eU)) << 1U)) | (1U & (~ 
                                                  (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                   >> 0x1fU))));
    if (vlSelfRef.core__DOT__ifu__DOT___GEN_1) {
        Vcore___024root____Vdpiimwrap_core__DOT__if_sram__DOT__read_backend__DOT__memory_read_TOP(vlSelfRef.core__DOT__ifu__DOT__pc, vlSelfRef.__Vtask_core__DOT__if_sram__DOT__read_backend__DOT__memory_read__1__r_data);
        vlSelfRef.core__DOT__if_sram__DOT__read_backend__DOT__r_data_comb 
            = vlSelfRef.__Vtask_core__DOT__if_sram__DOT__read_backend__DOT__memory_read__1__r_data;
    } else {
        vlSelfRef.core__DOT__if_sram__DOT__read_backend__DOT__r_data_comb = 0U;
    }
    vlSelfRef.core__DOT__if_sram__DOT___GEN = ((IData)(vlSelfRef.core__DOT___ifu_io_axi_r_ready) 
                                               & (IData)(vlSelfRef.core__DOT__if_sram__DOT__r_valid_reg));
    vlSelfRef.core__DOT__ls_sram__DOT___read_backend_io_en_T 
        = ((~ (IData)(vlSelfRef.core__DOT__ls_sram__DOT__r_state)) 
           & (IData)(vlSelfRef.core__DOT__lsu__DOT__io_axi_ar_valid_0));
    vlSelfRef.core__DOT__ifu__DOT___GEN = ((IData)(vlSelfRef.core__DOT___ifu_io_axi_r_ready) 
                                           & (IData)(vlSelfRef.core__DOT___exu_io_out_valid));
    vlSelfRef.core__DOT__lsu__DOT___GEN_12 = ((0U == (IData)(vlSelfRef.core__DOT__lsu__DOT__state)) 
                                              & (IData)(vlSelfRef.core__DOT___exu_io_out_valid));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_92 
        = (IData)(((0x5000U == (0x7040U & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)) 
                   & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_91)));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_88 
        = ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
               >> 5U)) & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_87));
    vlSelfRef.core__DOT__lsu__DOT___GEN_1 = (((~ (IData)(vlSelfRef.core__DOT__lsu__DOT____VdfgRegularize_hbcd0008a_0_0)) 
                                              & (2U 
                                                 == (IData)(vlSelfRef.core__DOT__lsu__DOT__state))) 
                                             & (IData)(vlSelfRef.core__DOT__ls_sram__DOT__r_valid_reg));
    vlSelfRef.core__DOT__lsu__DOT___GEN_5 = ((IData)(vlSelfRef.core__DOT__lsu__DOT____VdfgRegularize_hbcd0008a_0_0) 
                                             | (2U 
                                                == (IData)(vlSelfRef.core__DOT__lsu__DOT__state)));
    vlSelfRef.core__DOT___rf_io_r2e_rs2_data = ((0U 
                                                 != 
                                                 (0x1fU 
                                                  & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                     >> 0x14U)))
                                                 ? vlSelfRef.core__DOT__rf__DOT__casez_tmp_0
                                                 : 0U);
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_79 
        = (IData)(((0U == (0x1040U & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)) 
                   & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_69)));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_85 
        = ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
               >> 0x19U)) & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_84));
    vlSelfRef.core__DOT___rf_io_r2e_rs1_data = ((0U 
                                                 != 
                                                 (0x1fU 
                                                  & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                     >> 0xfU)))
                                                 ? vlSelfRef.core__DOT__rf__DOT__casez_tmp
                                                 : 0U);
    vlSelfRef.core__DOT___idu_io_out_bits_branch_en 
        = ((0xffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_22)) 
           | (0xffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_58)));
    vlSelfRef.core__DOT__idu__DOT___decodedBundle_orMatrixOutputs_T_36 
        = (((IData)(((0x13U == (0x1fU & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)) 
                     & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_42))) 
            << 1U) | (IData)(((0x13U == (0x1fU & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)) 
                              & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_43))));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_94 
        = ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
               >> 6U)) & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_52));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_90 
        = ((vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
            >> 0xcU) & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_52));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_89 
        = (IData)(((0U == (0x6000U & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)) 
                   & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_70)));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_71 
        = ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
               >> 0x19U)) & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_70));
    vlSelfRef.__VdfgRegularize_hd87f99a1_1_1 = (((IData)(
                                                         (0xffU 
                                                          == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_47))) 
                                                 << 1U) 
                                                | (0xffU 
                                                   == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_39)));
    vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_25 
        = ((((0x200U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                        << 9U)) | ((0x100U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                              << 7U)) 
                                   | (0x80U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                               << 5U)))) 
            | ((0x40U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                             >> 3U)) << 6U)) | (0x20U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                     >> 4U)) 
                                                   << 5U)))) 
           | ((0x10U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                        >> 1U)) | ((8U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                          >> 3U)) | (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_95))));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_96 
        = ((0x10U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                         >> 5U)) << 4U)) | ((8U & (
                                                   (~ 
                                                    (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                     >> 6U)) 
                                                   << 3U)) 
                                            | (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_95)));
    vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_61 
        = (((((0x4000U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                          << 0xeU)) | (0x2000U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                  << 0xcU))) 
             | ((0x1000U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                >> 2U)) << 0xcU)) | 
                (0x800U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                               >> 3U)) << 0xbU)))) 
            | (((0x400U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                           << 6U)) | (0x200U & ((~ 
                                                 (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                  >> 5U)) 
                                                << 9U))) 
               | ((0x100U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                 >> 6U)) << 8U)) | 
                  (0x80U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                            >> 5U))))) | ((0x40U & 
                                           ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                >> 0xdU)) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                 >> 9U)) 
                                             | (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_102))));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_103 
        = (((0x200U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                           >> 6U)) << 9U)) | ((0x100U 
                                               & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                  >> 4U)) 
                                              | (0x80U 
                                                 & ((~ 
                                                     (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                      >> 0xdU)) 
                                                    << 7U)))) 
           | ((0x40U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                        >> 8U)) | ((0x20U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                 >> 0x19U)) 
                                             << 5U)) 
                                   | (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_102))));
    vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_77 
        = ((((((0x8000000U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                              << 0x17U)) | (0x4000000U 
                                            & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                               << 0x15U))) 
              | ((0x2000000U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                << 0x13U)) | (0x1000000U 
                                              & ((~ 
                                                  (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                   >> 7U)) 
                                                 << 0x18U)))) 
             | ((0x800000U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                  >> 8U)) << 0x17U)) 
                | ((0x400000U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                     >> 9U)) << 0x16U)) 
                   | (0x200000U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                       >> 0xaU)) << 0x15U))))) 
            | ((((0x100000U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                   >> 0xbU)) << 0x14U)) 
                 | (0x80000U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                    >> 0xcU)) << 0x13U))) 
                | ((0x40000U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                    >> 0xdU)) << 0x12U)) 
                   | (0x20000U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                      >> 0xeU)) << 0x11U)))) 
               | ((0x10000U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                   >> 0xfU)) << 0x10U)) 
                  | ((0x8000U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                     >> 0x10U)) << 0xfU)) 
                     | (0x4000U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                       >> 0x11U)) << 0xeU)))))) 
           | (((((0x2000U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                 >> 0x12U)) << 0xdU)) 
                 | (0x1000U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                   >> 0x13U)) << 0xcU))) 
                | ((0x800U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                  >> 0x14U)) << 0xbU)) 
                   | (0x400U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                >> 0xbU)))) | ((0x200U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                     >> 0x16U)) 
                                                   << 9U)) 
                                               | ((0x100U 
                                                   & ((~ 
                                                       (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                        >> 0x17U)) 
                                                      << 8U)) 
                                                  | (0x80U 
                                                     & ((~ 
                                                         (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                          >> 0x18U)) 
                                                        << 7U))))) 
              | ((((0x40U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                 >> 0x19U)) << 6U)) 
                   | (0x20U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                   >> 0x1aU)) << 5U))) 
                  | ((0x10U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                   >> 0x1bU)) << 4U)) 
                     | (8U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                              >> 0x19U)))) | ((4U & 
                                               (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                >> 0x1bU)) 
                                              | (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_97)))));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_98 
        = ((4U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                      >> 0x1dU)) << 2U)) | (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_97));
    vlSelfRef.core__DOT___exu_io_csr_w_addr = ((0xffU 
                                                == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_39))
                                                ? (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                   >> 0x14U)
                                                : 0U);
    if (vlSelfRef.core__DOT__ls_sram__DOT___read_backend_io_en_T) {
        Vcore___024root____Vdpiimwrap_core__DOT__if_sram__DOT__read_backend__DOT__memory_read_TOP(
                                                                                (((1U 
                                                                                != (IData)(vlSelfRef.core__DOT__lsu__DOT__state)) 
                                                                                | (0U 
                                                                                == (IData)(vlSelfRef.core__DOT__lsu__DOT__state)))
                                                                                 ? 0U
                                                                                 : vlSelfRef.core__DOT__lsu__DOT__e2l_reg_maddr), vlSelfRef.__Vtask_core__DOT__ls_sram__DOT__read_backend__DOT__memory_read__3__r_data);
        vlSelfRef.core__DOT__ls_sram__DOT__read_backend__DOT__r_data_comb 
            = vlSelfRef.__Vtask_core__DOT__ls_sram__DOT__read_backend__DOT__memory_read__3__r_data;
    } else {
        vlSelfRef.core__DOT__ls_sram__DOT__read_backend__DOT__r_data_comb = 0U;
    }
    vlSelfRef.core__DOT__lsu__DOT___GEN_6 = ((3U != (IData)(vlSelfRef.core__DOT__lsu__DOT__state)) 
                                             | (IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_5));
    vlSelfRef.core__DOT__lsu__DOT__io_axi_w_valid_0 
        = ((~ (IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_5)) 
           & (3U == (IData)(vlSelfRef.core__DOT__lsu__DOT__state)));
    vlSelfRef.core__DOT___lsu_io_axi_b_ready = ((~ 
                                                 ((IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_5) 
                                                  | (3U 
                                                     == (IData)(vlSelfRef.core__DOT__lsu__DOT__state)))) 
                                                & (4U 
                                                   == (IData)(vlSelfRef.core__DOT__lsu__DOT__state)));
    vlSelfRef.core__DOT___exu_io_out_bits_rd_addr = 
        ((IData)(vlSelfRef.core__DOT___idu_io_out_bits_branch_en)
          ? 0U : (0x1fU & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                           >> 7U)));
    vlSelfRef.core__DOT___exu_io_out_bits_mem_wr = 
        (((IData)(((0x23U == (0x3fU & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)) 
                   & ((IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_87) 
                      | (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_94)))) 
          << 1U) | ((0xffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_1)) 
                    | (IData)(((3U == (0x1fU & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)) 
                               & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_88)))));
    vlSelfRef.core__DOT___exu_io_out_bits_mem_en = 
        ((0xffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_1)) 
         | ((0xffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_4)) 
            | (IData)(((3U == (0x1fU & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)) 
                       & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_94)))));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_76 
        = ((vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
            >> 0xeU) & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_71));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_93 
        = (IData)(((0U == (0x1e00000U & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)) 
                   & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_71)));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_72 
        = ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
               >> 0xeU)) & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_71));
    vlSelfRef.core__DOT___idu_io_out_bits_jump_en = 
        ((0x3ffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_25)) 
         | (0x7fU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_26)));
    vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_8 
        = (((0x200U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                       << 9U)) | ((0x100U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                             << 7U)) 
                                  | (0x80U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                              << 5U)))) 
           | ((0x40U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                        << 3U)) | ((0x20U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                 >> 4U)) 
                                             << 5U)) 
                                   | (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_96))));
    vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_9 
        = (((0x100U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                       << 8U)) | (0x80U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                           << 6U))) 
           | ((0x40U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                            >> 2U)) << 6U)) | ((0x20U 
                                                & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                   << 1U)) 
                                               | (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_96))));
    vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_63 
        = (((0x8000U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                        << 0xfU)) | ((0x4000U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                 << 0xdU)) 
                                     | (0x2000U & (
                                                   (~ 
                                                    (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                     >> 2U)) 
                                                   << 0xdU)))) 
           | ((0x1000U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                          << 9U)) | ((0x800U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                << 7U)) 
                                     | ((0x400U & (
                                                   (~ 
                                                    (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                     >> 5U)) 
                                                   << 0xaU)) 
                                        | (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_103)))));
    vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_76 
        = ((((((0x8000000U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                              << 0x17U)) | (0x4000000U 
                                            & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                               << 0x15U))) 
              | ((0x2000000U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                << 0x13U)) | (0x1000000U 
                                              & ((~ 
                                                  (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                   >> 7U)) 
                                                 << 0x18U)))) 
             | ((0x800000U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                  >> 8U)) << 0x17U)) 
                | ((0x400000U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                     >> 9U)) << 0x16U)) 
                   | (0x200000U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                       >> 0xaU)) << 0x15U))))) 
            | ((((0x100000U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                   >> 0xbU)) << 0x14U)) 
                 | (0x80000U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                    >> 0xcU)) << 0x13U))) 
                | ((0x40000U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                    >> 0xdU)) << 0x12U)) 
                   | (0x20000U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                      >> 0xeU)) << 0x11U)))) 
               | ((0x10000U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                   >> 0xfU)) << 0x10U)) 
                  | ((0x8000U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                     >> 0x10U)) << 0xfU)) 
                     | (0x4000U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                       >> 0x11U)) << 0xeU)))))) 
           | (((((0x2000U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                 >> 0x12U)) << 0xdU)) 
                 | (0x1000U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                   >> 0x13U)) << 0xcU))) 
                | ((0x800U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                              >> 9U)) | (0x400U & (
                                                   (~ 
                                                    (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                     >> 0x15U)) 
                                                   << 0xaU)))) 
               | ((0x200U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                             >> 0xdU)) | ((0x100U & 
                                           ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                >> 0x17U)) 
                                            << 8U)) 
                                          | (0x80U 
                                             & ((~ 
                                                 (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                  >> 0x18U)) 
                                                << 7U))))) 
              | (((0x40U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                >> 0x19U)) << 6U)) 
                  | (0x20U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                  >> 0x1aU)) << 5U))) 
                 | ((0x10U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                  >> 0x1bU)) << 4U)) 
                    | ((8U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                              >> 0x19U)) | (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_98))))));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_99 
        = ((0x20U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                         >> 0x1aU)) << 5U)) | ((0x10U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                     >> 0x1bU)) 
                                                   << 4U)) 
                                               | ((8U 
                                                   & ((~ 
                                                       (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                        >> 0x1cU)) 
                                                      << 3U)) 
                                                  | (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_98))));
    vlSelfRef.core__DOT__ls_sram__DOT___write_backend_io_en_T 
        = ((~ (IData)(vlSelfRef.core__DOT__ls_sram__DOT__w_state)) 
           & (IData)(vlSelfRef.core__DOT__lsu__DOT__io_axi_w_valid_0));
    vlSelfRef.core__DOT__ls_sram__DOT___GEN_0 = ((IData)(vlSelfRef.core__DOT__ls_sram__DOT__b_valid_reg) 
                                                 & (IData)(vlSelfRef.core__DOT___lsu_io_axi_b_ready));
    vlSelfRef.core__DOT__lsu__DOT___GEN_10 = ((4U == (IData)(vlSelfRef.core__DOT__lsu__DOT__state)) 
                                              & ((IData)(vlSelfRef.core__DOT___lsu_io_axi_b_ready) 
                                                 & (IData)(vlSelfRef.core__DOT__ls_sram__DOT__b_valid_reg)));
    vlSelfRef.core__DOT__lsu__DOT__isPassthrough = 
        ((~ (IData)(vlSelfRef.core__DOT___exu_io_out_bits_mem_en)) 
         & (IData)(vlSelfRef.core__DOT___exu_io_out_valid));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_73 
        = ((vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
            >> 0xdU) & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_72));
    vlSelfRef.core__DOT___idu_io_out_bits_rd_en = (
                                                   (0x7fU 
                                                    == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T)) 
                                                   | ((0xffU 
                                                       == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_1)) 
                                                      | ((0xffU 
                                                          == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_3)) 
                                                         | ((0x3ffU 
                                                             == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_8)) 
                                                            | ((0x1ffU 
                                                                == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_9)) 
                                                               | ((0x3fU 
                                                                   == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_10)) 
                                                                  | ((IData)(
                                                                             ((0x33U 
                                                                               == 
                                                                               (0x7077U 
                                                                                & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)) 
                                                                              & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_91))) 
                                                                     | ((IData)(
                                                                                ((0x33U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)) 
                                                                                & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_70))) 
                                                                        | ((IData)(
                                                                                ((0x33U 
                                                                                == 
                                                                                (0x1077U 
                                                                                & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)) 
                                                                                & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_89))) 
                                                                           | ((0x3ffU 
                                                                               == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_25)) 
                                                                              | ((0x7fU 
                                                                                == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_26)) 
                                                                                | ((IData)(
                                                                                ((0x1013U 
                                                                                == 
                                                                                (0x305fU 
                                                                                & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)) 
                                                                                & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_70))) 
                                                                                | ((IData)(
                                                                                ((0x101bU 
                                                                                == 
                                                                                (0x305fU 
                                                                                & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)) 
                                                                                & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_71))) 
                                                                                | ((0xffU 
                                                                                == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_39)) 
                                                                                | ((0xffU 
                                                                                == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_41)) 
                                                                                | ((0xffU 
                                                                                == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_47)) 
                                                                                | ((0x7fffU 
                                                                                == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_61)) 
                                                                                | (IData)(
                                                                                ((3U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)) 
                                                                                & ((IData)(
                                                                                ((0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)) 
                                                                                & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_92))) 
                                                                                | (IData)(
                                                                                ((0x30U 
                                                                                == 
                                                                                (0x30U 
                                                                                & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)) 
                                                                                & ((IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_92) 
                                                                                | (IData)(
                                                                                ((0x2004000U 
                                                                                == 
                                                                                (0x2004040U 
                                                                                & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)) 
                                                                                & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_70))))))))))))))))))))))))));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_51 
        = ((0x7fffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_61)) 
           | (0xffffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_63)));
    vlSelfRef.core__DOT___idu_io_out_bits_system = 
        ((((IData)(((0x70U == (0x1ffff0U & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)) 
                    & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_93))) 
           << 3U) | (((0x3ffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_8)) 
                      | (0xfffffffU == vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_76)) 
                     << 2U)) | ((((0x3ffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_8)) 
                                  | (0xfffffffU == vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_77)) 
                                 << 1U) | (IData)((
                                                   (0x100070U 
                                                    == 
                                                    (0x1ffff0U 
                                                     & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)) 
                                                   & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_93)))));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_66 
        = ((0xffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_47)) 
           | ((0x7fffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_61)) 
              | ((0xffffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_63)) 
                 | ((0xfffffffU == vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_76) 
                    | (0xfffffffU == vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_77)))));
    vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_32 
        = (((((0x4000U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                          << 0xeU)) | (0x2000U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                  << 0xcU))) 
             | ((0x1000U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                >> 2U)) << 0xcU)) | 
                (0x800U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                               >> 3U)) << 0xbU)))) 
            | (((0x400U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                           << 6U)) | (0x200U & ((~ 
                                                 (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                  >> 5U)) 
                                                << 9U))) 
               | ((0x100U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                 >> 6U)) << 8U)) | 
                  (0x80U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                            >> 5U))))) | ((0x40U & 
                                           ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                >> 0xdU)) 
                                            << 6U)) 
                                          | (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_99)));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_100 
        = ((0x40U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                         >> 0x19U)) << 6U)) | (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_99));
    vlSelfRef.core__DOT__lsu__DOT___GEN_11 = (1U & 
                                              ((~ (IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_10)) 
                                               | (3U 
                                                  == (IData)(vlSelfRef.core__DOT__lsu__DOT__state))));
    vlSelfRef.core__DOT___exu_io_out_bits_rd_en = ((IData)(vlSelfRef.core__DOT___idu_io_out_bits_branch_en) 
                                                   | (IData)(vlSelfRef.core__DOT___idu_io_out_bits_rd_en));
    vlSelfRef.core__DOT__exu__DOT___GEN_1 = ((2U != (IData)(vlSelfRef.core__DOT___idu_io_out_bits_system)) 
                                             | (1U 
                                                == (IData)(vlSelfRef.core__DOT___idu_io_out_bits_system)));
    vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_28 
        = ((((((0x8000000U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                              << 0x1bU)) | (0x4000000U 
                                            & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                               << 0x16U))) 
              | ((0x2000000U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                << 0x14U)) | (0x1000000U 
                                              & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                 << 0x12U)))) 
             | ((0x800000U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                  >> 7U)) << 0x17U)) 
                | ((0x400000U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                     >> 8U)) << 0x16U)) 
                   | (0x200000U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                       >> 9U)) << 0x15U))))) 
            | ((((0x100000U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                   >> 0xaU)) << 0x14U)) 
                 | (0x80000U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                    >> 0xbU)) << 0x13U))) 
                | ((0x40000U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                    >> 0xcU)) << 0x12U)) 
                   | (0x20000U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                      >> 0xdU)) << 0x11U)))) 
               | ((0x10000U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                   >> 0xeU)) << 0x10U)) 
                  | ((0x8000U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                     >> 0xfU)) << 0xfU)) 
                     | (0x4000U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                       >> 0x10U)) << 0xeU)))))) 
           | ((((0x2000U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                >> 0x11U)) << 0xdU)) 
                | (0x1000U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                  >> 0x12U)) << 0xcU))) 
               | ((0x800U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                 >> 0x13U)) << 0xbU)) 
                  | (0x400U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                   >> 0x15U)) << 0xaU)))) 
              | ((0x200U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                >> 0x16U)) << 9U)) 
                 | ((0x100U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                   >> 0x17U)) << 8U)) 
                    | ((0x80U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                     >> 0x18U)) << 7U)) 
                       | (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_100))))));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_101 
        = ((0x200U & ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                          >> 6U)) << 9U)) | ((0x100U 
                                              & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                 >> 4U)) 
                                             | ((0x80U 
                                                 & ((~ 
                                                     (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                      >> 0xdU)) 
                                                    << 7U)) 
                                                | (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_100))));
    vlSelfRef.core__DOT___csr_io_r_data = (((1U != (IData)(vlSelfRef.core__DOT___idu_io_out_bits_system)) 
                                            & (2U == (IData)(vlSelfRef.core__DOT___idu_io_out_bits_system)))
                                            ? ((0x300U 
                                                == 
                                                ((IData)(vlSelfRef.core__DOT__exu__DOT___GEN_1)
                                                  ? 0U
                                                  : 0x341U))
                                                ? vlSelfRef.core__DOT__csr__DOT__mstatus
                                                : (
                                                   (0x305U 
                                                    == 
                                                    ((IData)(vlSelfRef.core__DOT__exu__DOT___GEN_1)
                                                      ? 0U
                                                      : 0x341U))
                                                    ? vlSelfRef.core__DOT__csr__DOT__mtvec
                                                    : 
                                                   ((0x341U 
                                                     == 
                                                     ((IData)(vlSelfRef.core__DOT__exu__DOT___GEN_1)
                                                       ? 0U
                                                       : 0x341U))
                                                     ? vlSelfRef.core__DOT__csr__DOT__mepc
                                                     : 
                                                    ((0x342U 
                                                      == 
                                                      ((IData)(vlSelfRef.core__DOT__exu__DOT___GEN_1)
                                                        ? 0U
                                                        : 0x341U))
                                                      ? vlSelfRef.core__DOT__csr__DOT__mcause
                                                      : 
                                                     ((0x344U 
                                                       == 
                                                       ((IData)(vlSelfRef.core__DOT__exu__DOT___GEN_1)
                                                         ? 0U
                                                         : 0x341U))
                                                       ? vlSelfRef.core__DOT__csr__DOT__mip
                                                       : 
                                                      ((0x345U 
                                                        == 
                                                        ((IData)(vlSelfRef.core__DOT__exu__DOT___GEN_1)
                                                          ? 0U
                                                          : 0x341U))
                                                        ? vlSelfRef.core__DOT__csr__DOT__mie
                                                        : 0U))))))
                                            : 0U);
    vlSelfRef.core__DOT___idu_io_out_bits_opcode = 
        ((((IData)(((3U == (0xfU & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)) 
                    & ((IData)(((0x1010U == (0x1070U 
                                             & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)) 
                                & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_69))) 
                       | ((IData)(((0x1030U == (0x1070U 
                                                & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)) 
                                   & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_73))) 
                          | ((~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                 >> 4U)) & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_43)))))) 
           << 4U) | ((8U & (((IData)(((0x63U == (0x7fU 
                                                 & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)) 
                                      & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_52))) 
                             | ((0x7fffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_32)) 
                                | ((IData)(((0x33U 
                                             == (0x3fU 
                                                 & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)) 
                                            & (0x3ffU 
                                               == (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_101)))) 
                                   | ((IData)(((0x13U 
                                                == 
                                                (0x7fU 
                                                 & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)) 
                                               & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_75))) 
                                      | ((IData)(((0x33U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)) 
                                                  & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_76))) 
                                         | ((0x7fffU 
                                             == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_61)) 
                                            | ((IData)(
                                                       ((0x33U 
                                                         == 
                                                         (0x3fU 
                                                          & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)) 
                                                        & (0x3ffU 
                                                           == (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_103)))) 
                                               | (IData)(
                                                         (0x6013U 
                                                          == 
                                                          (0x607fU 
                                                           & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)))))))))) 
                            << 3U)) | (4U & (((0x7fffU 
                                               == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_32)) 
                                              | ((IData)(
                                                         ((0x33U 
                                                           == 
                                                           (0x3fU 
                                                            & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)) 
                                                          & (0x3ffU 
                                                             == (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_101)))) 
                                                 | ((IData)(
                                                            ((0x13U 
                                                              == 
                                                              (0x3fU 
                                                               & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)) 
                                                             & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_79))) 
                                                    | ((IData)(
                                                               ((0x33U 
                                                                 == 
                                                                 (0x107fU 
                                                                  & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)) 
                                                                & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_73))) 
                                                       | ((IData)(
                                                                  ((0x13U 
                                                                    == 
                                                                    (0x107fU 
                                                                     & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)) 
                                                                   & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_80))) 
                                                          | ((IData)(
                                                                     ((0x33U 
                                                                       == 
                                                                       (0x207fU 
                                                                        & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)) 
                                                                      & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_76))) 
                                                             | ((IData)(
                                                                        (0x4063U 
                                                                         == 
                                                                         (0x607fU 
                                                                          & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data))) 
                                                                | ((0x7fffU 
                                                                    == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_61)) 
                                                                   | (IData)(
                                                                             ((0x33U 
                                                                               == 
                                                                               (0x3fU 
                                                                                & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)) 
                                                                              & (0x3ffU 
                                                                                == (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_103)))))))))))) 
                                             << 2U)))) 
         | ((2U & (((IData)((0x2013U == (0x307fU & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data))) 
                    | ((IData)(((0x2033U == (0x307fU 
                                             & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)) 
                                & (0x7fU == (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_100)))) 
                       | ((IData)((0x4063U == (0x607fU 
                                               & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data))) 
                          | ((0x7fffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_61)) 
                             | ((IData)(((0x33U == 
                                          (0x3fU & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)) 
                                         & (0x3ffU 
                                            == (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_103)))) 
                                | ((IData)(((0x1033U 
                                             == (0x107fU 
                                                 & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)) 
                                            & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_76))) 
                                   | ((IData)(((3U 
                                                == 
                                                (0x1fU 
                                                 & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)) 
                                               & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_42))) 
                                      | ((IData)((0x6013U 
                                                  == 
                                                  (0x607fU 
                                                   & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data))) 
                                         | (IData)(
                                                   ((0x33U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)) 
                                                    & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_85))))))))))) 
                   << 1U)) | (1U & ((0xffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_1)) 
                                    | ((0xffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_4)) 
                                       | ((IData)((
                                                   (3U 
                                                    == 
                                                    (0xfU 
                                                     & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)) 
                                                   & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_88))) 
                                          | ((0x3fU 
                                              == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_10)) 
                                             | ((IData)(
                                                        ((0x33U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)) 
                                                         & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_72))) 
                                                | ((0x3ffU 
                                                    == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_25)) 
                                                   | ((0x7fU 
                                                       == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_26)) 
                                                      | ((IData)(
                                                                 ((0x1013U 
                                                                   == 
                                                                   (0x107fU 
                                                                    & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)) 
                                                                  & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_89))) 
                                                         | ((IData)(
                                                                    ((0x23U 
                                                                      == 
                                                                      (0x3fU 
                                                                       & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)) 
                                                                     & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_90))) 
                                                            | ((IData)(
                                                                       (0x2013U 
                                                                        == 
                                                                        (0x307fU 
                                                                         & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data))) 
                                                               | ((IData)(
                                                                          ((0x13U 
                                                                            == 
                                                                            (0x7fU 
                                                                             & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)) 
                                                                           & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_69))) 
                                                                  | ((IData)(
                                                                             ((0x2033U 
                                                                               == 
                                                                               (0x307fU 
                                                                                & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)) 
                                                                              & (0x7fU 
                                                                                == (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_100)))) 
                                                                     | (IData)(
                                                                               ((3U 
                                                                                == 
                                                                                (0xfU 
                                                                                & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)) 
                                                                                & ((IData)(
                                                                                ((0x60U 
                                                                                == 
                                                                                (0x70U 
                                                                                & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)) 
                                                                                & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_75))) 
                                                                                | ((vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                                                >> 4U) 
                                                                                & ((IData)(
                                                                                ((0x5000U 
                                                                                == 
                                                                                (0x7060U 
                                                                                & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)) 
                                                                                & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_84))) 
                                                                                | (IData)(
                                                                                ((0x5020U 
                                                                                == 
                                                                                (0x7060U 
                                                                                & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)) 
                                                                                & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_85)))))))))))))))))))))));
    vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_35 
        = (((0x8000U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                        << 0xfU)) | ((0x4000U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                 << 0xdU)) 
                                     | (0x2000U & (
                                                   (~ 
                                                    (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                     >> 2U)) 
                                                   << 0xdU)))) 
           | ((0x1000U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                          << 9U)) | ((0x800U & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                << 7U)) 
                                     | ((0x400U & (
                                                   (~ 
                                                    (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                     >> 5U)) 
                                                   << 0xaU)) 
                                        | (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_101)))));
    if ((0U == (IData)(vlSelfRef.core__DOT__lsu__DOT__state))) {
        if (vlSelfRef.core__DOT__lsu__DOT__isPassthrough) {
            vlSelfRef.core__DOT___wbu_io_out_addr = vlSelfRef.core__DOT___exu_io_out_bits_rd_addr;
            vlSelfRef.core__DOT___wbu_io_out_en = vlSelfRef.core__DOT___exu_io_out_bits_rd_en;
        } else {
            vlSelfRef.core__DOT___wbu_io_out_addr = 0U;
            vlSelfRef.core__DOT___wbu_io_out_en = 0U;
        }
    } else {
        vlSelfRef.core__DOT___wbu_io_out_addr = ((1U 
                                                  == (IData)(vlSelfRef.core__DOT__lsu__DOT__state))
                                                  ? 0U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.core__DOT__lsu__DOT__state))
                                                   ? 
                                                  ((IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_1)
                                                    ? (IData)(vlSelfRef.core__DOT__lsu__DOT__e2l_reg_rd_addr)
                                                    : 0U)
                                                   : 
                                                  ((IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_11)
                                                    ? 0U
                                                    : (IData)(vlSelfRef.core__DOT__lsu__DOT__e2l_reg_rd_addr))));
        vlSelfRef.core__DOT___wbu_io_out_en = ((1U 
                                                != (IData)(vlSelfRef.core__DOT__lsu__DOT__state)) 
                                               & ((2U 
                                                   == (IData)(vlSelfRef.core__DOT__lsu__DOT__state))
                                                   ? 
                                                  ((IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_1) 
                                                   & (IData)(vlSelfRef.core__DOT__lsu__DOT__e2l_reg_rd_en))
                                                   : 
                                                  ((3U 
                                                    != (IData)(vlSelfRef.core__DOT__lsu__DOT__state)) 
                                                   & ((IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_10) 
                                                      & (IData)(vlSelfRef.core__DOT__lsu__DOT__e2l_reg_rd_en)))));
    }
    vlSelfRef.core__DOT__rf__DOT___GEN = ((IData)(vlSelfRef.core__DOT___wbu_io_out_en) 
                                          & (0U != (IData)(vlSelfRef.core__DOT___wbu_io_out_addr)));
    vlSelfRef.core__DOT__idu__DOT___decodedBundle_T_1 
        = (((((IData)((0U != (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_orMatrixOutputs_T_36))) 
              << 1U) | ((0x3fU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_10)) 
                        | ((0x7fU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_26)) 
                           | ((0x7fffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_32)) 
                              | ((0xffffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_35)) 
                                 | (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_51)))))) 
            << 2U) | ((2U & (((IData)((0x23U == (0x407fU 
                                                 & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data))) 
                              | ((IData)(((0x23U == 
                                           (0x3fU & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)) 
                                          & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_52))) 
                                 | ((0x7fffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_32)) 
                                    | ((0xffffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_35)) 
                                       | ((0xffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_58)) 
                                          | (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_51)))))) 
                             << 1U)) | ((0x7fU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T)) 
                                        | ((0xffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_1)) 
                                           | ((0xffU 
                                               == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_3)) 
                                              | ((0x1ffU 
                                                  == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_9)) 
                                                 | ((0xffU 
                                                     == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_22)) 
                                                    | ((IData)(
                                                               ((0x63U 
                                                                 == 
                                                                 (0x107bU 
                                                                  & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)) 
                                                                & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_52))) 
                                                       | ((0x7fU 
                                                           == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_26)) 
                                                          | ((0xffffU 
                                                              == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_35)) 
                                                             | ((0xffU 
                                                                 == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_41)) 
                                                                | ((0xffU 
                                                                    == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_58)) 
                                                                   | (0xffffU 
                                                                      == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_63))))))))))))));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_67 
        = ((0xfffffffU == vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_28) 
           | ((0x7fffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_32)) 
              | ((0xffffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_35)) 
                 | ((0xffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_39)) 
                    | (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_66)))));
    vlSelfRef.core__DOT___idu_io_out_bits_imm = ((7U 
                                                  == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_T_1))
                                                  ? 
                                                 (0x1fU 
                                                  & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                     >> 0x14U))
                                                  : 
                                                 ((6U 
                                                   == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_T_1))
                                                   ? 
                                                  (0x3fU 
                                                   & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                      >> 0x14U))
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_T_1))
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                                 >> 0x1fU))) 
                                                     << 0x14U) 
                                                    | (((0xff000U 
                                                         & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data) 
                                                        | (0x800U 
                                                           & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                              >> 9U))) 
                                                       | (0x7feU 
                                                          & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                             >> 0x14U))))
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_T_1))
                                                     ? 
                                                    (0xfffff000U 
                                                     & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_T_1))
                                                      ? 
                                                     (((- (IData)(
                                                                  (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                                   >> 0x1fU))) 
                                                       << 0xcU) 
                                                      | ((0x800U 
                                                          & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                             << 4U)) 
                                                         | ((0x7e0U 
                                                             & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                                >> 0x14U)) 
                                                            | (0x1eU 
                                                               & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                                  >> 7U)))))
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_T_1))
                                                       ? 
                                                      (((- (IData)(
                                                                   (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                                    >> 0x1fU))) 
                                                        << 0xcU) 
                                                       | ((0xfe0U 
                                                           & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                              >> 0x14U)) 
                                                          | (0x1fU 
                                                             & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                                >> 7U))))
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_T_1))
                                                        ? 
                                                       (((- (IData)(
                                                                    (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                                     >> 0x1fU))) 
                                                         << 0xcU) 
                                                        | (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                           >> 0x14U))
                                                        : 0U)))))));
    vlSelfRef.core__DOT___idu_io_out_bits_alusel = 
        ((((IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_67) 
           | ((0x3ffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_8)) 
              | (0x37U == (0x7fU & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)))) 
          << 2U) | ((((IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_67) 
                      | (((0x3ffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_8)) 
                          | (0x17U == (0x7fU & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data))) 
                         | (0x7fU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_26)))) 
                     << 1U) | ((0x7fU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T)) 
                               | ((0xffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_1)) 
                                  | ((0xffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_3)) 
                                     | ((0x3ffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_8)) 
                                        | ((0x1ffU 
                                            == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_9)) 
                                           | ((0x3fU 
                                               == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_10)) 
                                              | ((0x3ffU 
                                                  == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_25)) 
                                                 | ((0x7fU 
                                                     == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_26)) 
                                                    | ((0xfffffffU 
                                                        == vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_28) 
                                                       | ((0x7fffU 
                                                           == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_32)) 
                                                          | ((0xffffU 
                                                              == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_35)) 
                                                             | ((0xffU 
                                                                 == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_39)) 
                                                                | ((0xffU 
                                                                    == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_41)) 
                                                                   | (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_66))))))))))))))));
    vlSelfRef.core__DOT__exu__DOT__csrUnit__DOT__write_source 
        = (((0xffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_39)) 
            & (0U != (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_orMatrixOutputs_T_36)))
            ? ((0xffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_39))
                ? vlSelfRef.core__DOT___idu_io_out_bits_imm
                : 0U) : ((0xffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_39))
                          ? vlSelfRef.core__DOT___rf_io_r2e_rs1_data
                          : 0U));
    if ((0xffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_39))) {
        vlSelfRef.core__DOT__exu__DOT__csrUnit__DOT____VdfgRegularize_hc5739c28_0_0 
            = vlSelfRef.__VdfgRegularize_hd87f99a1_1_1;
        vlSelfRef.core__DOT__exu__DOT____Vcellinp__csrUnit__io_csr_old_value 
            = vlSelfRef.core__DOT___csr_io_r_data;
        vlSelfRef.core__DOT___exu_io_csr_w_data = (
                                                   (1U 
                                                    == (IData)(vlSelfRef.core__DOT__exu__DOT__csrUnit__DOT____VdfgRegularize_hc5739c28_0_0))
                                                    ? vlSelfRef.core__DOT__exu__DOT__csrUnit__DOT__write_source
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelfRef.core__DOT__exu__DOT__csrUnit__DOT____VdfgRegularize_hc5739c28_0_0))
                                                     ? 
                                                    (vlSelfRef.core__DOT__exu__DOT____Vcellinp__csrUnit__io_csr_old_value 
                                                     | vlSelfRef.core__DOT__exu__DOT__csrUnit__DOT__write_source)
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSelfRef.core__DOT__exu__DOT__csrUnit__DOT____VdfgRegularize_hc5739c28_0_0))
                                                      ? 
                                                     ((~ vlSelfRef.core__DOT__exu__DOT__csrUnit__DOT__write_source) 
                                                      & vlSelfRef.core__DOT__exu__DOT____Vcellinp__csrUnit__io_csr_old_value)
                                                      : 
                                                     ((0U 
                                                       == (IData)(vlSelfRef.core__DOT__exu__DOT__csrUnit__DOT____VdfgRegularize_hc5739c28_0_0))
                                                       ? vlSelfRef.core__DOT__exu__DOT____Vcellinp__csrUnit__io_csr_old_value
                                                       : 0U))));
    } else {
        vlSelfRef.core__DOT__exu__DOT__csrUnit__DOT____VdfgRegularize_hc5739c28_0_0 = 0U;
        vlSelfRef.core__DOT__exu__DOT____Vcellinp__csrUnit__io_csr_old_value = 0U;
        vlSelfRef.core__DOT___exu_io_csr_w_data = 0U;
    }
    vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in2 
        = (((5U == (IData)(vlSelfRef.core__DOT___idu_io_out_bits_alusel)) 
            | ((3U == (IData)(vlSelfRef.core__DOT___idu_io_out_bits_alusel)) 
               | (1U == (IData)(vlSelfRef.core__DOT___idu_io_out_bits_alusel))))
            ? vlSelfRef.core__DOT___idu_io_out_bits_imm
            : ((0U == (IData)(vlSelfRef.core__DOT___idu_io_out_bits_alusel))
                ? vlSelfRef.core__DOT___rf_io_r2e_rs2_data
                : 0U));
    vlSelfRef.__VdfgRegularize_hd87f99a1_1_0 = ((3U 
                                                 == (IData)(vlSelfRef.core__DOT___idu_io_out_bits_alusel))
                                                 ? vlSelfRef.core__DOT__ifu__DOT__pc_reg
                                                 : 
                                                (((1U 
                                                   == (IData)(vlSelfRef.core__DOT___idu_io_out_bits_alusel)) 
                                                  | (0U 
                                                     == (IData)(vlSelfRef.core__DOT___idu_io_out_bits_alusel)))
                                                  ? vlSelfRef.core__DOT___rf_io_r2e_rs1_data
                                                  : 0U));
    vlSelfRef.core__DOT___exu_io_csr_w_en = (IData)(
                                                    ((0xffU 
                                                      == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_39)) 
                                                     & ((~ 
                                                         (((2U 
                                                            == (IData)(vlSelfRef.core__DOT__exu__DOT__csrUnit__DOT____VdfgRegularize_hc5739c28_0_0)) 
                                                           | (3U 
                                                              == (IData)(vlSelfRef.core__DOT__exu__DOT__csrUnit__DOT____VdfgRegularize_hc5739c28_0_0))) 
                                                          & (0U 
                                                             == vlSelfRef.core__DOT__exu__DOT__csrUnit__DOT__write_source))) 
                                                        & (0U 
                                                           != (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_1)))));
    vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in1 
        = ((5U == (IData)(vlSelfRef.core__DOT___idu_io_out_bits_alusel))
            ? 0U : vlSelfRef.__VdfgRegularize_hd87f99a1_1_0);
    vlSelfRef.core__DOT__exu__DOT__alu__DOT___mulu_res_T 
        = ((QData)((IData)(vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in1)) 
           * (QData)((IData)(vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in2)));
    vlSelfRef.core__DOT__exu__DOT__alu__DOT__casez_tmp 
        = ((0x10U & (IData)(vlSelfRef.core__DOT___idu_io_out_bits_opcode))
            ? ((8U & (IData)(vlSelfRef.core__DOT___idu_io_out_bits_opcode))
                ? 0U : ((4U & (IData)(vlSelfRef.core__DOT___idu_io_out_bits_opcode))
                         ? ((2U & (IData)(vlSelfRef.core__DOT___idu_io_out_bits_opcode))
                             ? 0U : ((1U & (IData)(vlSelfRef.core__DOT___idu_io_out_bits_opcode))
                                      ? (IData)((vlSelfRef.core__DOT__exu__DOT__alu__DOT___mulu_res_T 
                                                 >> 0x20U))
                                      : VL_MODDIV_III(32, vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in1, vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in2)))
                         : ((2U & (IData)(vlSelfRef.core__DOT___idu_io_out_bits_opcode))
                             ? ((1U & (IData)(vlSelfRef.core__DOT___idu_io_out_bits_opcode))
                                 ? VL_DIV_III(32, vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in1, vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in2)
                                 : (vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in1 
                                    >= vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in2))
                             : ((1U & (IData)(vlSelfRef.core__DOT___idu_io_out_bits_opcode))
                                 ? (vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in1 
                                    < vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in2)
                                 : 0U)))) : ((8U & (IData)(vlSelfRef.core__DOT___idu_io_out_bits_opcode))
                                              ? ((4U 
                                                  & (IData)(vlSelfRef.core__DOT___idu_io_out_bits_opcode))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.core__DOT___idu_io_out_bits_opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.core__DOT___idu_io_out_bits_opcode))
                                                    ? 
                                                   VL_SHIFTRS_III(32,32,32, vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in1, 
                                                                  (0x1fU 
                                                                   & vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in2))
                                                    : 
                                                   VL_SHIFTR_III(32,32,32, vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in1, 
                                                                 (0x1fU 
                                                                  & vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in2)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.core__DOT___idu_io_out_bits_opcode))
                                                    ? 
                                                   (vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in1 
                                                    << 
                                                    (0x1fU 
                                                     & vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in2))
                                                    : 
                                                   (vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in1 
                                                    ^ vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in2)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.core__DOT___idu_io_out_bits_opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.core__DOT___idu_io_out_bits_opcode))
                                                    ? 
                                                   (vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in1 
                                                    | vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in2)
                                                    : 
                                                   (vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in1 
                                                    & vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in2))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.core__DOT___idu_io_out_bits_opcode))
                                                    ? 
                                                   (vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in1 
                                                    != vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in2)
                                                    : 
                                                   (vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in1 
                                                    == vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in2))))
                                              : ((4U 
                                                  & (IData)(vlSelfRef.core__DOT___idu_io_out_bits_opcode))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.core__DOT___idu_io_out_bits_opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.core__DOT___idu_io_out_bits_opcode))
                                                    ? 
                                                   VL_LTS_III(32, vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in1, vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in2)
                                                    : 
                                                   VL_GTES_III(32, vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in1, vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in2))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.core__DOT___idu_io_out_bits_opcode))
                                                    ? 
                                                   VL_MODDIVS_III(32, vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in1, vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in2)
                                                    : (IData)(
                                                              (0x1ffffffffULL 
                                                               & VL_DIVS_QQQ(33, 
                                                                             (((QData)((IData)(
                                                                                ((5U 
                                                                                != (IData)(vlSelfRef.core__DOT___idu_io_out_bits_alusel)) 
                                                                                & (vlSelfRef.__VdfgRegularize_hd87f99a1_1_0 
                                                                                >> 0x1fU)))) 
                                                                               << 0x20U) 
                                                                              | (QData)((IData)(vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in1))), 
                                                                             (((QData)((IData)(
                                                                                (vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in2 
                                                                                >> 0x1fU))) 
                                                                               << 0x20U) 
                                                                              | (QData)((IData)(vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in2))))))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.core__DOT___idu_io_out_bits_opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.core__DOT___idu_io_out_bits_opcode))
                                                    ? (IData)(vlSelfRef.core__DOT__exu__DOT__alu__DOT___mulu_res_T)
                                                    : 
                                                   (vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in1 
                                                    - vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in2))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.core__DOT___idu_io_out_bits_opcode))
                                                    ? 
                                                   (vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in1 
                                                    + vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in2)
                                                    : vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in1)))));
    vlSelfRef.core__DOT___exu_io_pcCtrl_dnpc = ((IData)(vlSelfRef.core__DOT__exu__DOT___GEN_1)
                                                 ? 
                                                ((IData)(vlSelfRef.core__DOT___idu_io_out_bits_jump_en)
                                                  ? vlSelfRef.core__DOT__exu__DOT__alu__DOT__casez_tmp
                                                  : 
                                                 (((IData)(vlSelfRef.core__DOT___idu_io_out_bits_branch_en) 
                                                   & (1U 
                                                      == vlSelfRef.core__DOT__exu__DOT__alu__DOT__casez_tmp))
                                                   ? 
                                                  (vlSelfRef.core__DOT___idu_io_out_bits_imm 
                                                   + vlSelfRef.core__DOT__ifu__DOT__pc_reg)
                                                   : 0U))
                                                 : vlSelfRef.core__DOT___csr_io_r_data);
    vlSelfRef.core__DOT___exu_io_out_bits_rd_data = 
        ((IData)(vlSelfRef.core__DOT___idu_io_out_bits_jump_en)
          ? ((IData)(4U) + vlSelfRef.core__DOT__ifu__DOT__pc_reg)
          : vlSelfRef.core__DOT__exu__DOT__alu__DOT__casez_tmp);
    vlSelfRef.core__DOT___wbu_io_out_data = ((0U == (IData)(vlSelfRef.core__DOT__lsu__DOT__state))
                                              ? ((IData)(vlSelfRef.core__DOT__lsu__DOT__isPassthrough)
                                                  ? vlSelfRef.core__DOT___exu_io_out_bits_rd_data
                                                  : 0U)
                                              : ((1U 
                                                  == (IData)(vlSelfRef.core__DOT__lsu__DOT__state))
                                                  ? 0U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.core__DOT__lsu__DOT__state))
                                                   ? 
                                                  ((IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_1)
                                                    ? 
                                                   ((0U 
                                                     == (IData)(vlSelfRef.core__DOT__lsu__DOT__e2l_reg_mlen))
                                                     ? 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (~ (IData)(
                                                                               ((3U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)) 
                                                                                & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_80))))))) 
                                                      << 8U) 
                                                     | (0xffU 
                                                        & (vlSelfRef.core__DOT__ls_sram__DOT__r_bits_reg_data 
                                                           >> 
                                                           (0x18U 
                                                            & (vlSelfRef.core__DOT__lsu__DOT__e2l_reg_maddr 
                                                               << 3U)))))
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelfRef.core__DOT__lsu__DOT__e2l_reg_mlen))
                                                      ? 
                                                     (((- (IData)(
                                                                  (1U 
                                                                   & (~ (IData)(
                                                                                ((3U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)) 
                                                                                & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_80))))))) 
                                                       << 0x10U) 
                                                      | (0xffffU 
                                                         & ((2U 
                                                             & vlSelfRef.core__DOT__lsu__DOT__e2l_reg_maddr)
                                                             ? 
                                                            (vlSelfRef.core__DOT__ls_sram__DOT__r_bits_reg_data 
                                                             >> 0x10U)
                                                             : vlSelfRef.core__DOT__ls_sram__DOT__r_bits_reg_data)))
                                                      : vlSelfRef.core__DOT__ls_sram__DOT__r_bits_reg_data))
                                                    : 0U)
                                                   : 
                                                  ((IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_11)
                                                    ? 0U
                                                    : vlSelfRef.core__DOT__lsu__DOT__e2l_reg_rd_data))));
    vlSelfRef.core__DOT__ifu__DOT___GEN_0 = (vlSelfRef.core__DOT__ifu__DOT__dnpc_delay 
                                             == vlSelfRef.core__DOT___exu_io_pcCtrl_dnpc);
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
    vlSelf->io_inst_done = VL_RAND_RESET_I(1);
    vlSelf->core__DOT___csr_io_r_data = VL_RAND_RESET_I(32);
    vlSelf->core__DOT___rf_io_r2e_rs1_data = VL_RAND_RESET_I(32);
    vlSelf->core__DOT___rf_io_r2e_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->core__DOT___wbu_io_out_addr = VL_RAND_RESET_I(5);
    vlSelf->core__DOT___wbu_io_out_data = VL_RAND_RESET_I(32);
    vlSelf->core__DOT___wbu_io_out_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT___lsu_io_axi_b_ready = VL_RAND_RESET_I(1);
    vlSelf->core__DOT___exu_io_pcCtrl_dnpc = VL_RAND_RESET_I(32);
    vlSelf->core__DOT___exu_io_out_valid = VL_RAND_RESET_I(1);
    vlSelf->core__DOT___exu_io_out_bits_rd_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT___exu_io_out_bits_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->core__DOT___exu_io_out_bits_rd_data = VL_RAND_RESET_I(32);
    vlSelf->core__DOT___exu_io_out_bits_mem_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT___exu_io_out_bits_mem_wr = VL_RAND_RESET_I(2);
    vlSelf->core__DOT___exu_io_csr_w_addr = VL_RAND_RESET_I(12);
    vlSelf->core__DOT___exu_io_csr_w_data = VL_RAND_RESET_I(32);
    vlSelf->core__DOT___exu_io_csr_w_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT___idu_io_out_bits_imm = VL_RAND_RESET_I(32);
    vlSelf->core__DOT___idu_io_out_bits_alusel = VL_RAND_RESET_I(3);
    vlSelf->core__DOT___idu_io_out_bits_opcode = VL_RAND_RESET_I(5);
    vlSelf->core__DOT___idu_io_out_bits_rd_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT___idu_io_out_bits_system = VL_RAND_RESET_I(4);
    vlSelf->core__DOT___idu_io_out_bits_jump_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT___idu_io_out_bits_branch_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT___ifu_io_axi_r_ready = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__LS_reg = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__ifu__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__ifu__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__ifu__DOT__pc_reg = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__ifu__DOT__dnpc_delay = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__ifu__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__ifu__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__ifu__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T = VL_RAND_RESET_I(7);
    vlSelf->core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_1 = VL_RAND_RESET_I(8);
    vlSelf->core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_3 = VL_RAND_RESET_I(8);
    vlSelf->core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_4 = VL_RAND_RESET_I(8);
    vlSelf->core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_8 = VL_RAND_RESET_I(10);
    vlSelf->core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_9 = VL_RAND_RESET_I(9);
    vlSelf->core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_10 = VL_RAND_RESET_I(6);
    vlSelf->core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_22 = VL_RAND_RESET_I(8);
    vlSelf->core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_25 = VL_RAND_RESET_I(10);
    vlSelf->core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_26 = VL_RAND_RESET_I(7);
    vlSelf->core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_28 = VL_RAND_RESET_I(28);
    vlSelf->core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_32 = VL_RAND_RESET_I(15);
    vlSelf->core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_35 = VL_RAND_RESET_I(16);
    vlSelf->core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_39 = VL_RAND_RESET_I(8);
    vlSelf->core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_41 = VL_RAND_RESET_I(8);
    vlSelf->core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_47 = VL_RAND_RESET_I(8);
    vlSelf->core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_58 = VL_RAND_RESET_I(8);
    vlSelf->core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_61 = VL_RAND_RESET_I(15);
    vlSelf->core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_63 = VL_RAND_RESET_I(16);
    vlSelf->core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_76 = VL_RAND_RESET_I(28);
    vlSelf->core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_77 = VL_RAND_RESET_I(28);
    vlSelf->core__DOT__idu__DOT___decodedBundle_orMatrixOutputs_T_36 = VL_RAND_RESET_I(2);
    vlSelf->core__DOT__idu__DOT___decodedBundle_T_1 = VL_RAND_RESET_I(4);
    vlSelf->core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_42 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_43 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_51 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_52 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_66 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_67 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_69 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_70 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_71 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_72 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_73 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_75 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_76 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_79 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_80 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_84 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_85 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_87 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_88 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_89 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_90 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_91 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_92 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_93 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_94 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_95 = VL_RAND_RESET_I(3);
    vlSelf->core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_96 = VL_RAND_RESET_I(5);
    vlSelf->core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_97 = VL_RAND_RESET_I(2);
    vlSelf->core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_98 = VL_RAND_RESET_I(3);
    vlSelf->core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_99 = VL_RAND_RESET_I(6);
    vlSelf->core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_100 = VL_RAND_RESET_I(7);
    vlSelf->core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_101 = VL_RAND_RESET_I(10);
    vlSelf->core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_102 = VL_RAND_RESET_I(5);
    vlSelf->core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_103 = VL_RAND_RESET_I(10);
    vlSelf->core__DOT__exu__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__exu__DOT____Vcellinp__alu__io_in2 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__exu__DOT____Vcellinp__alu__io_in1 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__exu__DOT____Vcellinp__csrUnit__io_csr_old_value = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__exu__DOT__alu__DOT__casez_tmp = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__exu__DOT__alu__DOT___mulu_res_T = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__exu__DOT__csrUnit__DOT__write_source = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__exu__DOT__csrUnit__DOT____VdfgRegularize_hc5739c28_0_0 = VL_RAND_RESET_I(3);
    vlSelf->core__DOT__lsu__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->core__DOT__lsu__DOT__e2l_reg_rd_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__lsu__DOT__e2l_reg_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->core__DOT__lsu__DOT__e2l_reg_rd_data = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__lsu__DOT__e2l_reg_mlen = VL_RAND_RESET_I(3);
    vlSelf->core__DOT__lsu__DOT__e2l_reg_wdata = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__lsu__DOT__e2l_reg_maddr = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__lsu__DOT__isPassthrough = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__lsu__DOT__io_in_ready_0 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__lsu__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__lsu__DOT__io_axi_ar_valid_0 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__lsu__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__lsu__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__lsu__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__lsu__DOT___GEN_5 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__lsu__DOT__io_axi_w_valid_0 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__lsu__DOT___GEN_6 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__lsu__DOT___GEN_10 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__lsu__DOT___GEN_11 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__lsu__DOT___GEN_12 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__lsu__DOT____VdfgRegularize_hbcd0008a_0_0 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__wbu__DOT__io_w2f_inst_done_REG = VL_RAND_RESET_I(1);
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
    vlSelf->core__DOT__csr__DOT__mstatus = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__csr__DOT__mtvec = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__csr__DOT__mepc = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__csr__DOT__mcause = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__csr__DOT__mip = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__csr__DOT__mie = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__if_sram__DOT__r_state = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__if_sram__DOT___write_backend_done = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__if_sram__DOT___read_backend_done = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__if_sram__DOT__write_backend_io_en_REG = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__if_sram__DOT__r_valid_reg = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__if_sram__DOT__r_bits_reg_data = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__if_sram__DOT__w_state = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__if_sram__DOT__write_backend_io_aw_addr_REG = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__if_sram__DOT__write_backend_io_w_data_REG = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__if_sram__DOT__write_backend_io_w_strb_REG = VL_RAND_RESET_I(4);
    vlSelf->core__DOT__if_sram__DOT__b_valid_reg = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__if_sram__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__if_sram__DOT__read_backend__DOT__r_data_reg = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__if_sram__DOT__read_backend__DOT__r_data_comb = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__if_sram__DOT__read_backend__DOT__delay = VL_RAND_RESET_I(3);
    vlSelf->core__DOT__ls_sram__DOT__r_state = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__ls_sram__DOT___write_backend_done = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__ls_sram__DOT___read_backend_done = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__ls_sram__DOT___read_backend_io_en_T = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__ls_sram__DOT__write_backend_io_en_REG = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__ls_sram__DOT__r_valid_reg = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__ls_sram__DOT__r_bits_reg_data = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__ls_sram__DOT__w_state = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__ls_sram__DOT__write_backend_io_aw_addr_REG = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__ls_sram__DOT__write_backend_io_w_data_REG = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__ls_sram__DOT__write_backend_io_w_strb_REG = VL_RAND_RESET_I(4);
    vlSelf->core__DOT__ls_sram__DOT__b_valid_reg = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__ls_sram__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__ls_sram__DOT___write_backend_io_en_T = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__ls_sram__DOT__read_backend__DOT__r_data_reg = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__ls_sram__DOT__read_backend__DOT__r_data_comb = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__ls_sram__DOT__read_backend__DOT__delay = VL_RAND_RESET_I(3);
    vlSelf->__VdfgRegularize_hd87f99a1_1_0 = VL_RAND_RESET_I(32);
    vlSelf->__VdfgRegularize_hd87f99a1_1_1 = VL_RAND_RESET_I(2);
    vlSelf->__Vtask_core__DOT__if_sram__DOT__read_backend__DOT__memory_read__1__r_data = 0;
    vlSelf->__Vtask_core__DOT__ls_sram__DOT__read_backend__DOT__memory_read__3__r_data = 0;
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
