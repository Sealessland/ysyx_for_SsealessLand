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
            VL_FATAL_MT("build/core.sv", 1615, "", "Settle region did not converge.");
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

void Vcore___024root____Vdpiimwrap_core__DOT__Fsram__DOT__read_backend__DOT__mem_read_TOP(IData/*31:0*/ ar_addr, IData/*31:0*/ &r_data);

VL_ATTR_COLD void Vcore___024root___stl_sequent__TOP__0(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___stl_sequent__TOP__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.io_debugmemaddr = vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_addr;
    vlSelfRef.core__DOT__LSU__DOT__io_in_ready_0 = 
        (0U == (IData)(vlSelfRef.core__DOT__LSU__DOT__state));
    vlSelfRef.core__DOT__LSU__DOT___GEN_1 = (1U == (IData)(vlSelfRef.core__DOT__LSU__DOT__state));
    vlSelfRef.core__DOT__LSU__DOT___GEN_2 = (2U == (IData)(vlSelfRef.core__DOT__LSU__DOT__state));
    vlSelfRef.core__DOT__LSU__DOT___GEN_4 = (3U == (IData)(vlSelfRef.core__DOT__LSU__DOT__state));
    vlSelfRef.core__DOT__LSU__DOT___GEN_5 = (4U == (IData)(vlSelfRef.core__DOT__LSU__DOT__state));
    vlSelfRef.core__DOT__Fsram__DOT___GEN_0 = vlSelfRef.core__DOT__Fsram__DOT__b_valid_reg;
    if ((0U == (IData)(vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_len))) {
        vlSelfRef.core__DOT___LSU_io_axi_w_bits_strb 
            = (0xfU & ((IData)(1U) << (3U & vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_addr)));
        vlSelfRef.core__DOT___LSU_io_axi_w_bits_data 
            = ((0xffU & vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_wdata) 
               << (0x18U & (vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_addr 
                            << 3U)));
    } else if ((1U == (IData)(vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_len))) {
        vlSelfRef.core__DOT___LSU_io_axi_w_bits_strb 
            = (0xfU & ((IData)(3U) << (3U & vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_addr)));
        vlSelfRef.core__DOT___LSU_io_axi_w_bits_data 
            = ((0xffffU & vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_wdata) 
               << (0x18U & (vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_addr 
                            << 3U)));
    } else {
        vlSelfRef.core__DOT___LSU_io_axi_w_bits_strb 
            = (0xfU & (- (IData)((2U == (IData)(vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_len)))));
        vlSelfRef.core__DOT___LSU_io_axi_w_bits_data 
            = vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_wdata;
    }
    vlSelfRef.core__DOT__readyForProducer_5 = (1U & 
                                               ((~ (IData)(vlSelfRef.core__DOT__validReg_5)) 
                                                | (~ (IData)(vlSelfRef.core__DOT__Lsram__DOT__r_state))));
    vlSelfRef.core__DOT__readyForProducer_7 = (1U & 
                                               ((~ (IData)(vlSelfRef.core__DOT__validReg_7)) 
                                                | (~ (IData)(vlSelfRef.core__DOT__Lsram__DOT__w_state))));
    vlSelfRef.core__DOT__readyForProducer_9 = (1U & 
                                               ((~ (IData)(vlSelfRef.core__DOT__validReg_9)) 
                                                | (~ (IData)(vlSelfRef.core__DOT__Lsram__DOT__w_state))));
    vlSelfRef.io_debugmemdata = ((IData)(vlSelfRef.core__DOT__validReg_6)
                                  ? vlSelfRef.core__DOT__dataReg_6_data
                                  : vlSelfRef.core__DOT__Lsram__DOT__r_bits_reg_data);
    vlSelfRef.core__DOT__LSU__DOT__io_axi_ar_valid_0 
        = ((0U != (IData)(vlSelfRef.core__DOT__LSU__DOT__state)) 
           & (1U == (IData)(vlSelfRef.core__DOT__LSU__DOT__state)));
    vlSelfRef.core__DOT___EXU_io_in_ready = (1U & (
                                                   (~ (IData)(vlSelfRef.core__DOT__validReg_12)) 
                                                   | (0U 
                                                      == (IData)(vlSelfRef.core__DOT__LSU__DOT__state))));
    vlSelfRef.core__DOT___IFU_io_axi_r_valid_T = ((IData)(vlSelfRef.core__DOT__Fsram__DOT__r_valid_reg) 
                                                  | (IData)(vlSelfRef.core__DOT__validReg_1));
    vlSelfRef.core__DOT__LSU__DOT____VdfgRegularize_ha7d0a824_0_3 
        = ((0U == (IData)(vlSelfRef.core__DOT__LSU__DOT__state)) 
           | (1U == (IData)(vlSelfRef.core__DOT__LSU__DOT__state)));
    vlSelfRef.core__DOT____Vcellinp__IFU__io_axi_r_bits_data 
        = ((IData)(vlSelfRef.core__DOT__validReg_1)
            ? vlSelfRef.core__DOT__dataReg_1_data : vlSelfRef.core__DOT__Fsram__DOT__r_bits_reg_data);
    if (vlSelfRef.core__DOT__IFU__DOT__validReg) {
        vlSelfRef.io_debugPC = vlSelfRef.core__DOT__IFU__DOT__dataReg_pc;
        vlSelfRef.io_debugInst = vlSelfRef.core__DOT__IFU__DOT__dataReg_inst;
    } else {
        vlSelfRef.io_debugPC = vlSelfRef.core__DOT__IFU__DOT__pc_in_flight;
        vlSelfRef.io_debugInst = vlSelfRef.core__DOT____Vcellinp__IFU__io_axi_r_bits_data;
    }
    vlSelfRef.core__DOT__producerFire_5 = ((IData)(vlSelfRef.core__DOT__readyForProducer_5) 
                                           & (IData)(vlSelfRef.core__DOT__LSU__DOT__io_axi_ar_valid_0));
    vlSelfRef.core__DOT__Lsram__DOT___read_backend_io_en_T 
        = ((~ (IData)(vlSelfRef.core__DOT__Lsram__DOT__r_state)) 
           & ((IData)(vlSelfRef.core__DOT__LSU__DOT__io_axi_ar_valid_0) 
              | (IData)(vlSelfRef.core__DOT__validReg_5)));
    vlSelfRef.core__DOT___IDU_io_in_ready = (1U & (
                                                   (~ (IData)(vlSelfRef.core__DOT__validReg_11)) 
                                                   | (IData)(vlSelfRef.core__DOT___EXU_io_in_ready)));
    vlSelfRef.core__DOT___LSU_io_axi_r_ready = ((~ (IData)(vlSelfRef.core__DOT__LSU__DOT____VdfgRegularize_ha7d0a824_0_3)) 
                                                & (2U 
                                                   == (IData)(vlSelfRef.core__DOT__LSU__DOT__state)));
    vlSelfRef.core__DOT__LSU__DOT____VdfgRegularize_ha7d0a824_0_4 
        = ((IData)(vlSelfRef.core__DOT__LSU__DOT____VdfgRegularize_ha7d0a824_0_3) 
           | (2U == (IData)(vlSelfRef.core__DOT__LSU__DOT__state)));
    vlSelfRef.core__DOT___IDU_io_out_bits_pc = ((IData)(vlSelfRef.core__DOT__validReg_10)
                                                 ? vlSelfRef.core__DOT__dataReg_10_pc
                                                 : vlSelfRef.io_debugPC);
    if (vlSelfRef.core__DOT__Lsram__DOT___read_backend_io_en_T) {
        Vcore___024root____Vdpiimwrap_core__DOT__Fsram__DOT__read_backend__DOT__mem_read_TOP(
                                                                                ((IData)(vlSelfRef.core__DOT__validReg_5)
                                                                                 ? vlSelfRef.core__DOT__dataReg_5_addr
                                                                                 : vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_addr), vlSelfRef.__Vtask_core__DOT__Lsram__DOT__read_backend__DOT__mem_read__2__r_data);
        vlSelfRef.core__DOT__Lsram__DOT__read_backend__DOT__r_data_comb 
            = vlSelfRef.__Vtask_core__DOT__Lsram__DOT__read_backend__DOT__mem_read__2__r_data;
    } else {
        vlSelfRef.core__DOT__Lsram__DOT__read_backend__DOT__r_data_comb = 0U;
    }
    vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
        = ((IData)(vlSelfRef.core__DOT__validReg_10)
            ? vlSelfRef.core__DOT__dataReg_10_inst : vlSelfRef.io_debugInst);
    vlSelfRef.core__DOT__readyForProducer_10 = (1U 
                                                & ((~ (IData)(vlSelfRef.core__DOT__validReg_10)) 
                                                   | (IData)(vlSelfRef.core__DOT___IDU_io_in_ready)));
    vlSelfRef.core__DOT__Lsram__DOT___GEN = (((~ (IData)(vlSelfRef.core__DOT__validReg_6)) 
                                              | (IData)(vlSelfRef.core__DOT___LSU_io_axi_r_ready)) 
                                             & (IData)(vlSelfRef.core__DOT__Lsram__DOT__r_valid_reg));
    vlSelfRef.core__DOT__LSU__DOT___GEN_3 = ((IData)(vlSelfRef.core__DOT___LSU_io_axi_r_ready) 
                                             & ((IData)(vlSelfRef.core__DOT__Lsram__DOT__r_valid_reg) 
                                                | (IData)(vlSelfRef.core__DOT__validReg_6)));
    vlSelfRef.core__DOT__LSU__DOT__io_axi_w_valid_0 
        = ((~ (IData)(vlSelfRef.core__DOT__LSU__DOT____VdfgRegularize_ha7d0a824_0_4)) 
           & (3U == (IData)(vlSelfRef.core__DOT__LSU__DOT__state)));
    vlSelfRef.core__DOT___LSU_io_axi_b_ready = ((~ 
                                                 ((IData)(vlSelfRef.core__DOT__LSU__DOT____VdfgRegularize_ha7d0a824_0_4) 
                                                  | (3U 
                                                     == (IData)(vlSelfRef.core__DOT__LSU__DOT__state)))) 
                                                & (4U 
                                                   == (IData)(vlSelfRef.core__DOT__LSU__DOT__state)));
    vlSelfRef.core__DOT__IFU__DOT__readyForProducer 
        = (1U & ((~ (IData)(vlSelfRef.core__DOT__IFU__DOT__validReg)) 
                 | (IData)(vlSelfRef.core__DOT__readyForProducer_10)));
    vlSelfRef.core__DOT__producerFire_7 = ((IData)(vlSelfRef.core__DOT__readyForProducer_7) 
                                           & (IData)(vlSelfRef.core__DOT__LSU__DOT__io_axi_w_valid_0));
    vlSelfRef.core__DOT__producerFire_9 = ((IData)(vlSelfRef.core__DOT__readyForProducer_9) 
                                           & (IData)(vlSelfRef.core__DOT__LSU__DOT__io_axi_w_valid_0));
    vlSelfRef.core__DOT__Lsram__DOT___write_backend_io_en_T 
        = ((~ (IData)(vlSelfRef.core__DOT__Lsram__DOT__w_state)) 
           & ((IData)(vlSelfRef.core__DOT__LSU__DOT__io_axi_w_valid_0) 
              | (IData)(vlSelfRef.core__DOT__validReg_7)));
    vlSelfRef.core__DOT__Lsram__DOT___write_backend_io_en_T_1 
        = ((~ (IData)(vlSelfRef.core__DOT__Lsram__DOT__w_state)) 
           & ((IData)(vlSelfRef.core__DOT__LSU__DOT__io_axi_w_valid_0) 
              | (IData)(vlSelfRef.core__DOT__validReg_9)));
    vlSelfRef.core__DOT__readyForProducer_8 = (1U & 
                                               ((~ (IData)(vlSelfRef.core__DOT__validReg_8)) 
                                                | (IData)(vlSelfRef.core__DOT___LSU_io_axi_b_ready)));
    vlSelfRef.core__DOT__LSU__DOT___GEN_6 = ((IData)(vlSelfRef.core__DOT___LSU_io_axi_b_ready) 
                                             & ((IData)(vlSelfRef.core__DOT__Lsram__DOT__b_valid_reg) 
                                                | (IData)(vlSelfRef.core__DOT__validReg_8)));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_42 
        = (IData)((0x40000000U == (0xfe000000U & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_52 
        = ((2U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                  >> 0xcU)) | (1U & (~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                        >> 0xeU))));
    vlSelfRef.core__DOT__RF__DOT__casez_tmp = ((0x80000U 
                                                & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                ? (
                                                   (0x40000U 
                                                    & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                    ? 
                                                   ((0x20000U 
                                                     & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                     ? 
                                                    ((0x10000U 
                                                      & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                      ? 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                       ? vlSelfRef.core__DOT__RF__DOT__rf_31
                                                       : vlSelfRef.core__DOT__RF__DOT__rf_30)
                                                      : 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                       ? vlSelfRef.core__DOT__RF__DOT__rf_29
                                                       : vlSelfRef.core__DOT__RF__DOT__rf_28))
                                                     : 
                                                    ((0x10000U 
                                                      & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                      ? 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                       ? vlSelfRef.core__DOT__RF__DOT__rf_27
                                                       : vlSelfRef.core__DOT__RF__DOT__rf_26)
                                                      : 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                       ? vlSelfRef.core__DOT__RF__DOT__rf_25
                                                       : vlSelfRef.core__DOT__RF__DOT__rf_24)))
                                                    : 
                                                   ((0x20000U 
                                                     & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                     ? 
                                                    ((0x10000U 
                                                      & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                      ? 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                       ? vlSelfRef.core__DOT__RF__DOT__rf_23
                                                       : vlSelfRef.core__DOT__RF__DOT__rf_22)
                                                      : 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                       ? vlSelfRef.core__DOT__RF__DOT__rf_21
                                                       : vlSelfRef.core__DOT__RF__DOT__rf_20))
                                                     : 
                                                    ((0x10000U 
                                                      & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                      ? 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                       ? vlSelfRef.core__DOT__RF__DOT__rf_19
                                                       : vlSelfRef.core__DOT__RF__DOT__rf_18)
                                                      : 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                       ? vlSelfRef.core__DOT__RF__DOT__rf_17
                                                       : vlSelfRef.core__DOT__RF__DOT__rf_16))))
                                                : (
                                                   (0x40000U 
                                                    & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                    ? 
                                                   ((0x20000U 
                                                     & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                     ? 
                                                    ((0x10000U 
                                                      & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                      ? 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                       ? vlSelfRef.core__DOT__RF__DOT__rf_15
                                                       : vlSelfRef.core__DOT__RF__DOT__rf_14)
                                                      : 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                       ? vlSelfRef.core__DOT__RF__DOT__rf_13
                                                       : vlSelfRef.core__DOT__RF__DOT__rf_12))
                                                     : 
                                                    ((0x10000U 
                                                      & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                      ? 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                       ? vlSelfRef.core__DOT__RF__DOT__rf_11
                                                       : vlSelfRef.core__DOT__RF__DOT__rf_10)
                                                      : 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                       ? vlSelfRef.core__DOT__RF__DOT__rf_9
                                                       : vlSelfRef.core__DOT__RF__DOT__rf_8)))
                                                    : 
                                                   ((0x20000U 
                                                     & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                     ? 
                                                    ((0x10000U 
                                                      & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                      ? 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                       ? vlSelfRef.core__DOT__RF__DOT__rf_7
                                                       : vlSelfRef.core__DOT__RF__DOT__rf_6)
                                                      : 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                       ? vlSelfRef.core__DOT__RF__DOT__rf_5
                                                       : vlSelfRef.core__DOT__RF__DOT__rf_4))
                                                     : 
                                                    ((0x10000U 
                                                      & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                      ? 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                       ? vlSelfRef.core__DOT__RF__DOT__rf_3
                                                       : vlSelfRef.core__DOT__RF__DOT__rf_2)
                                                      : 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                       ? vlSelfRef.core__DOT__RF__DOT__rf_1
                                                       : vlSelfRef.core__DOT__RF__DOT__rf_0)))));
    vlSelfRef.core__DOT__RF__DOT__casez_tmp_0 = ((0x1000000U 
                                                  & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                  ? 
                                                 ((0x800000U 
                                                   & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                   ? 
                                                  ((0x400000U 
                                                    & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                    ? 
                                                   ((0x200000U 
                                                     & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                      ? vlSelfRef.core__DOT__RF__DOT__rf_31
                                                      : vlSelfRef.core__DOT__RF__DOT__rf_30)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                      ? vlSelfRef.core__DOT__RF__DOT__rf_29
                                                      : vlSelfRef.core__DOT__RF__DOT__rf_28))
                                                    : 
                                                   ((0x200000U 
                                                     & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                      ? vlSelfRef.core__DOT__RF__DOT__rf_27
                                                      : vlSelfRef.core__DOT__RF__DOT__rf_26)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                      ? vlSelfRef.core__DOT__RF__DOT__rf_25
                                                      : vlSelfRef.core__DOT__RF__DOT__rf_24)))
                                                   : 
                                                  ((0x400000U 
                                                    & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                    ? 
                                                   ((0x200000U 
                                                     & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                      ? vlSelfRef.core__DOT__RF__DOT__rf_23
                                                      : vlSelfRef.core__DOT__RF__DOT__rf_22)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                      ? vlSelfRef.core__DOT__RF__DOT__rf_21
                                                      : vlSelfRef.core__DOT__RF__DOT__rf_20))
                                                    : 
                                                   ((0x200000U 
                                                     & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                      ? vlSelfRef.core__DOT__RF__DOT__rf_19
                                                      : vlSelfRef.core__DOT__RF__DOT__rf_18)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                      ? vlSelfRef.core__DOT__RF__DOT__rf_17
                                                      : vlSelfRef.core__DOT__RF__DOT__rf_16))))
                                                  : 
                                                 ((0x800000U 
                                                   & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                   ? 
                                                  ((0x400000U 
                                                    & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                    ? 
                                                   ((0x200000U 
                                                     & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                      ? vlSelfRef.core__DOT__RF__DOT__rf_15
                                                      : vlSelfRef.core__DOT__RF__DOT__rf_14)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                      ? vlSelfRef.core__DOT__RF__DOT__rf_13
                                                      : vlSelfRef.core__DOT__RF__DOT__rf_12))
                                                    : 
                                                   ((0x200000U 
                                                     & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                      ? vlSelfRef.core__DOT__RF__DOT__rf_11
                                                      : vlSelfRef.core__DOT__RF__DOT__rf_10)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                      ? vlSelfRef.core__DOT__RF__DOT__rf_9
                                                      : vlSelfRef.core__DOT__RF__DOT__rf_8)))
                                                   : 
                                                  ((0x400000U 
                                                    & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                    ? 
                                                   ((0x200000U 
                                                     & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                      ? vlSelfRef.core__DOT__RF__DOT__rf_7
                                                      : vlSelfRef.core__DOT__RF__DOT__rf_6)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                      ? vlSelfRef.core__DOT__RF__DOT__rf_5
                                                      : vlSelfRef.core__DOT__RF__DOT__rf_4))
                                                    : 
                                                   ((0x200000U 
                                                     & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                      ? vlSelfRef.core__DOT__RF__DOT__rf_3
                                                      : vlSelfRef.core__DOT__RF__DOT__rf_2)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                      ? vlSelfRef.core__DOT__RF__DOT__rf_1
                                                      : vlSelfRef.core__DOT__RF__DOT__rf_0)))));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_12 
        = (((((0x1000U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                          << 0xcU)) | (0x800U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                 << 0xaU))) 
             | ((0x400U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                               >> 2U)) << 0xaU)) | 
                (0x200U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                               >> 3U)) << 9U)))) | 
            ((0x100U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                        << 4U)) | ((0x80U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                             << 2U)) 
                                   | (0x40U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                   >> 6U)) 
                                               << 6U))))) 
           | (((0x20U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                             >> 0x1aU)) << 5U)) | (
                                                   (0x10U 
                                                    & ((~ 
                                                        (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                         >> 0x1bU)) 
                                                       << 4U)) 
                                                   | (8U 
                                                      & ((~ 
                                                          (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                           >> 0x1cU)) 
                                                         << 3U)))) 
              | ((4U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                            >> 0x1dU)) << 2U)) | ((2U 
                                                   & ((~ 
                                                       (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                        >> 0x1eU)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (~ 
                                                        (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                         >> 0x1fU)))))));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_6 
        = (((0x20U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                      << 5U)) | ((0x10U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                           << 3U)) 
                                 | (8U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                          << 1U)))) 
           | ((4U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                         >> 3U)) << 2U)) | ((2U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                   >> 3U)) 
                                            | (1U & 
                                               (~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                   >> 6U))))));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_1 
        = ((((0x80U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                       << 7U)) | (0x40U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                           << 5U))) 
            | ((0x20U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                             >> 2U)) << 5U)) | (0x10U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                     >> 3U)) 
                                                   << 4U)))) 
           | (((8U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                          >> 5U)) << 3U)) | (4U & (
                                                   (~ 
                                                    (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                     >> 6U)) 
                                                   << 2U))) 
              | ((2U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                            >> 0xcU)) << 1U)) | (1U 
                                                 & (~ 
                                                    (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                     >> 0xdU))))));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_7 
        = ((((0x40U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                       << 6U)) | (0x20U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                           << 4U))) 
            | ((0x10U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                         << 2U)) | (8U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                              >> 3U)) 
                                          << 3U)))) 
           | ((4U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                     >> 2U)) | ((2U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                           >> 5U)) 
                                       << 1U)) | (1U 
                                                  & (~ 
                                                     (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                      >> 6U))))));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_35 
        = (IData)((0x6000U == (0x6000U & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_38 
        = (IData)((0x4000U == (0x6000U & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_25 
        = ((((0x80U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                       << 7U)) | (0x40U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                           << 5U))) 
            | ((0x20U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                             >> 2U)) << 5U)) | (0x10U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                     >> 3U)) 
                                                   << 4U)))) 
           | (((8U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                      >> 1U)) | (4U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                           >> 5U)) 
                                       << 2U))) | (
                                                   (2U 
                                                    & ((~ 
                                                        (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                         >> 6U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                         >> 0xdU)))));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T 
        = ((((0x80U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                       << 7U)) | (0x40U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                           << 5U))) 
            | ((0x20U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                             >> 2U)) << 5U)) | (0x10U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                     >> 3U)) 
                                                   << 4U)))) 
           | (((8U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                          >> 4U)) << 3U)) | (4U & (
                                                   (~ 
                                                    (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                     >> 5U)) 
                                                   << 2U))) 
              | ((2U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                            >> 6U)) << 1U)) | (1U & 
                                               (~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                   >> 0xdU))))));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_14 
        = ((((0x80U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                       << 7U)) | (0x40U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                           << 5U))) 
            | ((0x20U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                             >> 2U)) << 5U)) | (0x10U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                     >> 3U)) 
                                                   << 4U)))) 
           | (((8U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                          >> 4U)) << 3U)) | (4U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                   >> 3U))) 
              | ((2U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                        >> 5U)) | (1U & (~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                            >> 0xdU))))));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_39 
        = ((((0x100U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                        << 8U)) | ((0x80U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                             << 6U)) 
                                   | (0x40U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                   >> 2U)) 
                                               << 6U)))) 
            | ((0x20U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                             >> 3U)) << 5U)) | (0x10U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                     >> 4U)) 
                                                   << 4U)))) 
           | (((8U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                      >> 2U)) | (4U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                       >> 4U))) | (
                                                   (2U 
                                                    & ((~ 
                                                        (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                         >> 0xcU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                         >> 0xeU)))));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_27 
        = (IData)((0U == (0x6000U & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_38 
        = ((((0x80U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                       << 7U)) | (0x40U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                           << 5U))) 
            | ((0x20U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                             >> 2U)) << 5U)) | (0x10U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                     >> 3U)) 
                                                   << 4U)))) 
           | (((8U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                          >> 4U)) << 3U)) | (4U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                   >> 3U))) 
              | ((2U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                        >> 5U)) | (1U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                         >> 0xeU)))));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_18 
        = ((((0x40U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                       << 6U)) | (0x20U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                           << 4U))) 
            | ((0x10U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                         << 2U)) | (8U & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst))) 
           | ((4U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                         >> 4U)) << 2U)) | ((2U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                   >> 4U)) 
                                            | (1U & 
                                               (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                >> 6U)))));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_50 
        = ((2U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                      >> 0xdU)) << 1U)) | (1U & (~ 
                                                 (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                  >> 0xeU))));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_51 
        = (((0x20U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                          >> 0x19U)) << 5U)) | ((0x10U 
                                                 & ((~ 
                                                     (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                      >> 0x1aU)) 
                                                    << 4U)) 
                                                | (8U 
                                                   & ((~ 
                                                       (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                        >> 0x1bU)) 
                                                      << 3U)))) 
           | ((4U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                         >> 0x1cU)) << 2U)) | ((2U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                     >> 0x1dU)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                      >> 0x1fU))))));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_49 
        = ((4U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                      >> 6U)) << 2U)) | ((2U & ((~ 
                                                 (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                  >> 0xcU)) 
                                                << 1U)) 
                                         | (1U & (~ 
                                                  (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                   >> 0xeU)))));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_32 
        = (IData)((0U == (0xfc000000U & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)));
    vlSelfRef.core__DOT__consumerFire_1 = ((IData)(vlSelfRef.core__DOT__IFU__DOT__readyForProducer) 
                                           & (IData)(vlSelfRef.core__DOT___IFU_io_axi_r_valid_T));
    vlSelfRef.core__DOT__Fsram__DOT___GEN = (((~ (IData)(vlSelfRef.core__DOT__validReg_1)) 
                                              | (IData)(vlSelfRef.core__DOT__IFU__DOT__readyForProducer)) 
                                             & (IData)(vlSelfRef.core__DOT__Fsram__DOT__r_valid_reg));
    vlSelfRef.core__DOT__producerFire_8 = ((IData)(vlSelfRef.core__DOT__readyForProducer_8) 
                                           & (IData)(vlSelfRef.core__DOT__Lsram__DOT__b_valid_reg));
    vlSelfRef.core__DOT__Lsram__DOT___GEN_0 = ((IData)(vlSelfRef.core__DOT__Lsram__DOT__b_valid_reg) 
                                               & (IData)(vlSelfRef.core__DOT__readyForProducer_8));
    vlSelfRef.io_debugin1 = ((0U != (0x1fU & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                              >> 0xfU)))
                              ? (IData)(vlSelfRef.core__DOT__RF__DOT__casez_tmp)
                              : 0U);
    vlSelfRef.io_debugin2 = ((0U != (0x1fU & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                              >> 0x14U)))
                              ? (IData)(vlSelfRef.core__DOT__RF__DOT__casez_tmp_0)
                              : 0U);
    vlSelfRef.core__DOT___IDU_io_out_bits_branch_en 
        = ((0xffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_14)) 
           | (0x1ffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_39)));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_44 
        = ((vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
            >> 0xcU) & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_27));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_9 
        = ((((0x80U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                       << 7U)) | (0x40U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                           << 5U))) 
            | ((0x20U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                             >> 2U)) << 5U)) | (0x10U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                     >> 3U)) 
                                                   << 4U)))) 
           | ((8U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                         >> 4U)) << 3U)) | ((4U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                   >> 3U)) 
                                            | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_50))));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_17 
        = ((((0x200U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                        << 9U)) | ((0x100U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                              << 7U)) 
                                   | (0x80U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                               << 5U)))) 
            | ((0x40U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                             >> 3U)) << 6U)) | (0x20U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                     >> 4U)) 
                                                   << 5U)))) 
           | ((0x10U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                        >> 1U)) | ((8U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                          >> 3U)) | 
                                   ((4U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                               >> 0xcU)) 
                                           << 2U)) 
                                    | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_50)))));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_11 
        = (((((0x8000U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                          << 0xfU)) | (0x4000U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                  << 0xdU))) 
             | ((0x2000U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                >> 2U)) << 0xdU)) | 
                (0x1000U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                >> 3U)) << 0xcU)))) 
            | (((0x800U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                           << 7U)) | (0x400U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                << 5U))) 
               | ((0x200U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                 >> 6U)) << 9U)) | 
                  (0x100U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                 >> 0xcU)) << 8U))))) 
           | ((0x80U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                            >> 0xdU)) << 7U)) | ((0x40U 
                                                  & ((~ 
                                                      (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                       >> 0xeU)) 
                                                     << 6U)) 
                                                 | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_51))));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_40 
        = (((((0x8000U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                          << 0xfU)) | (0x4000U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                  << 0xdU))) 
             | ((0x2000U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                >> 2U)) << 0xdU)) | 
                (0x1000U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                >> 3U)) << 0xcU)))) 
            | (((0x800U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                           << 7U)) | (0x400U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                << 5U))) 
               | ((0x200U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                 >> 6U)) << 9U)) | 
                  (0x100U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                             >> 4U))))) | ((0x80U & 
                                            ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                 >> 0xdU)) 
                                             << 7U)) 
                                           | ((0x40U 
                                               & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                  >> 8U)) 
                                              | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_51))));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_2 
        = ((((0x80U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                       << 7U)) | (0x40U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                           << 5U))) 
            | ((0x20U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                             >> 2U)) << 5U)) | (0x10U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                     >> 3U)) 
                                                   << 4U)))) 
           | ((8U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                         >> 4U)) << 3U)) | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_49)));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_3 
        = ((((0x80U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                       << 7U)) | (0x40U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                           << 5U))) 
            | ((0x20U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                             >> 2U)) << 5U)) | (0x10U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                     >> 3U)) 
                                                   << 4U)))) 
           | ((8U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                         >> 5U)) << 3U)) | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_49)));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_8 
        = ((((0x100U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                        << 8U)) | ((0x80U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                             << 6U)) 
                                   | (0x40U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                   >> 2U)) 
                                               << 6U)))) 
            | ((0x20U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                             >> 3U)) << 5U)) | (0x10U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                     >> 4U)) 
                                                   << 4U)))) 
           | ((8U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                     >> 2U)) | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_49)));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_47 
        = ((vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
            >> 0x19U) & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_32));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_33 
        = ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
               >> 0x19U)) & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_32));
    if (vlSelfRef.core__DOT__validReg_11) {
        vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_pc 
            = vlSelfRef.core__DOT__dataReg_11_pc;
        vlSelfRef.core__DOT___EXU_io_out_bits_rd_addr 
            = (0x1fU & (IData)(vlSelfRef.core__DOT__dataReg_11_rd_addr));
    } else {
        vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_pc 
            = vlSelfRef.core__DOT___IDU_io_out_bits_pc;
        vlSelfRef.core__DOT___EXU_io_out_bits_rd_addr 
            = (0x1fU & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                        >> 7U));
    }
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_40 
        = ((0xffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_38)) 
           | (0xffffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_40)));
    vlSelfRef.core__DOT___IDU_io_out_bits_lsu_en = 
        ((0xffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T)) 
         | ((0xffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_2)) 
            | (IData)(((3U == (0x5fU & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)) 
                       & (3U == (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_50))))));
    vlSelfRef.core__DOT___IDU_io_out_bits_rd_en = (
                                                   (0xffU 
                                                    == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T)) 
                                                   | ((0xffU 
                                                       == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_1)) 
                                                      | ((0xffU 
                                                          == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_3)) 
                                                         | ((IData)(
                                                                    ((0xfU 
                                                                      == 
                                                                      (0x107fU 
                                                                       & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)) 
                                                                     & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_27))) 
                                                            | ((0x3fU 
                                                                == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_6)) 
                                                               | ((0xffffU 
                                                                   == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_11)) 
                                                                  | ((0x1fffU 
                                                                      == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_12)) 
                                                                     | ((0x3ffU 
                                                                         == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_17)) 
                                                                        | ((0x7fU 
                                                                            == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_18)) 
                                                                           | ((0xffU 
                                                                               == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_25)) 
                                                                              | (0xffffU 
                                                                                == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_40))))))))))));
    vlSelfRef.core__DOT___IDU_io_out_bits_mw_en = (
                                                   (0x1ffU 
                                                    == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_8)) 
                                                   | (IData)(
                                                             ((0x23U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)) 
                                                              & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_27))));
    vlSelfRef.core__DOT__IDU__DOT__casez_tmp = (((0x3fU 
                                                  == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_6)) 
                                                 | (0x7fU 
                                                    == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_18)))
                                                 ? 
                                                (((0x1ffU 
                                                   == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_8)) 
                                                  | ((0xffU 
                                                      == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_9)) 
                                                     | (0xffU 
                                                        == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_38))))
                                                  ? 
                                                 ((1U 
                                                   & ((0xffU 
                                                       == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T)) 
                                                      | ((0xffU 
                                                          == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_1)) 
                                                         | ((0xffU 
                                                             == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_3)) 
                                                            | ((0xffU 
                                                                == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_14)) 
                                                               | ((IData)(
                                                                          (0x63U 
                                                                           == 
                                                                           (0x707bU 
                                                                            & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst))) 
                                                                  | ((0x7fU 
                                                                      == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_18)) 
                                                                     | ((0xffU 
                                                                         == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_25)) 
                                                                        | (0xffU 
                                                                           == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_38))))))))))
                                                   ? (QData)((IData)(
                                                                     (0x1fU 
                                                                      & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                                         >> 0x14U))))
                                                   : (QData)((IData)(
                                                                     (0x3fU 
                                                                      & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                                         >> 0x14U)))))
                                                  : 
                                                 ((1U 
                                                   & ((0xffU 
                                                       == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T)) 
                                                      | ((0xffU 
                                                          == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_1)) 
                                                         | ((0xffU 
                                                             == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_3)) 
                                                            | ((0xffU 
                                                                == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_14)) 
                                                               | ((IData)(
                                                                          (0x63U 
                                                                           == 
                                                                           (0x707bU 
                                                                            & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst))) 
                                                                  | ((0x7fU 
                                                                      == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_18)) 
                                                                     | ((0xffU 
                                                                         == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_25)) 
                                                                        | (0xffU 
                                                                           == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_38))))))))))
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                                        >> 0x1fU)))) 
                                                    << 0x14U) 
                                                   | (QData)((IData)(
                                                                     (((0xff000U 
                                                                        & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst) 
                                                                       | (0x800U 
                                                                          & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                                             >> 9U))) 
                                                                      | (0x7feU 
                                                                         & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                                            >> 0x14U))))))
                                                   : 
                                                  (((QData)((IData)(
                                                                    (- (IData)(
                                                                               (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                                                >> 0x1fU))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (0xfffff000U 
                                                                      & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst))))))
                                                 : 
                                                (((0x1ffU 
                                                   == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_8)) 
                                                  | ((0xffU 
                                                      == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_9)) 
                                                     | (0xffU 
                                                        == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_38))))
                                                  ? 
                                                 ((1U 
                                                   & ((0xffU 
                                                       == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T)) 
                                                      | ((0xffU 
                                                          == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_1)) 
                                                         | ((0xffU 
                                                             == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_3)) 
                                                            | ((0xffU 
                                                                == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_14)) 
                                                               | ((IData)(
                                                                          (0x63U 
                                                                           == 
                                                                           (0x707bU 
                                                                            & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst))) 
                                                                  | ((0x7fU 
                                                                      == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_18)) 
                                                                     | ((0xffU 
                                                                         == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_25)) 
                                                                        | (0xffU 
                                                                           == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_38))))))))))
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                                        >> 0x1fU)))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     ((0x800U 
                                                                       & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                                          << 4U)) 
                                                                      | ((0x7e0U 
                                                                          & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                                             >> 0x14U)) 
                                                                         | (0x1eU 
                                                                            & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                                               >> 7U)))))))
                                                   : 
                                                  (((- (QData)((IData)(
                                                                       (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                                        >> 0x1fU)))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     ((0xfe0U 
                                                                       & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                                          >> 0x14U)) 
                                                                      | (0x1fU 
                                                                         & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                                            >> 7U)))))))
                                                  : 
                                                 ((1U 
                                                   & ((0xffU 
                                                       == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T)) 
                                                      | ((0xffU 
                                                          == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_1)) 
                                                         | ((0xffU 
                                                             == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_3)) 
                                                            | ((0xffU 
                                                                == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_14)) 
                                                               | ((IData)(
                                                                          (0x63U 
                                                                           == 
                                                                           (0x707bU 
                                                                            & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst))) 
                                                                  | ((0x7fU 
                                                                      == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_18)) 
                                                                     | ((0xffU 
                                                                         == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_25)) 
                                                                        | (0xffU 
                                                                           == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_38))))))))))
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                                        >> 0x1fU)))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                                      >> 0x14U))))
                                                   : 0ULL)));
    vlSelfRef.core__DOT___IDU_io_out_bits_unsign_en 
        = (1U & (IData)(((3U == (0xfU & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)) 
                         & ((IData)((0x3010U == (0x7070U 
                                                 & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst))) 
                            | ((IData)(((0x3030U == 
                                         (0x7070U & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)) 
                                        & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_32))) 
                               | ((IData)(((0U == (0x70U 
                                                   & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)) 
                                           & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_38))) 
                                  | ((IData)(((0x60U 
                                               == (0x70U 
                                                   & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)) 
                                              & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_35))) 
                                     | (IData)(((0x30U 
                                                 == 
                                                 (0x70U 
                                                  & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)) 
                                                & ((IData)(
                                                           ((0x2000U 
                                                             == 
                                                             (0x6000U 
                                                              & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)) 
                                                            & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_47))) 
                                                   | (IData)(
                                                             ((0x5000U 
                                                               == 
                                                               (0x5000U 
                                                                & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)) 
                                                              & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_47)))))))))))));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_34 
        = ((vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
            >> 0xeU) & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_33));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_36 
        = ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
               >> 0xeU)) & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_33));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_41 
        = ((vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
            >> 0xdU) & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_33));
    vlSelfRef.core__DOT____Vcellinp__LSU__io_in_bits_rd_addr 
        = ((IData)(vlSelfRef.core__DOT__validReg_12)
            ? (IData)(vlSelfRef.core__DOT__dataReg_12_rd_addr)
            : (IData)(vlSelfRef.core__DOT___EXU_io_out_bits_rd_addr));
    if (vlSelfRef.core__DOT__validReg_11) {
        vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_jump_en 
            = vlSelfRef.core__DOT__dataReg_11_jump_en;
        vlSelfRef.core__DOT___EXU_io_out_bits_mem_wdata 
            = vlSelfRef.core__DOT__dataReg_11_rs2_data;
        vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_branch_en 
            = vlSelfRef.core__DOT__dataReg_11_branch_en;
    } else {
        vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_jump_en 
            = (0x7fU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_18));
        vlSelfRef.core__DOT___EXU_io_out_bits_mem_wdata 
            = vlSelfRef.io_debugin2;
        vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_branch_en 
            = vlSelfRef.core__DOT___IDU_io_out_bits_branch_en;
    }
    vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
        = (((IData)(vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_jump_en) 
            | (((IData)(vlSelfRef.core__DOT__validReg_11)
                 ? (IData)(vlSelfRef.core__DOT__dataReg_11_auipc_en)
                 : (0x7fU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_7))) 
               | (IData)(vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_branch_en)))
            ? vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_pc
            : ((IData)(vlSelfRef.core__DOT__validReg_11)
                ? vlSelfRef.core__DOT__dataReg_11_rs1_data
                : vlSelfRef.io_debugin1));
    vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_jalr_en 
        = ((IData)(vlSelfRef.core__DOT__validReg_11)
            ? (IData)(vlSelfRef.core__DOT__dataReg_11_jalr_en)
            : (0x3ffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_17)));
    vlSelfRef.core__DOT__EXU__DOT____VdfgRegularize_h9d365bda_0_1 
        = ((IData)(vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_jalr_en) 
           | (IData)(vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_jump_en));
    vlSelfRef.core__DOT___IDU_io_out_bits_rs2_en = 
        ((0x1ffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_8)) 
         | ((0xffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_9)) 
            | ((0xffffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_11)) 
               | ((0x1fffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_12)) 
                  | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_40)))));
    vlSelfRef.core__DOT___IDU_io_out_bits_mlen = (((IData)(
                                                           ((3U 
                                                             == 
                                                             (0x105fU 
                                                              & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)) 
                                                            & (3U 
                                                               == (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_52)))) 
                                                   << 3U) 
                                                  | ((4U 
                                                      & (((IData)(
                                                                  (0x1003U 
                                                                   == 
                                                                   (0x307fU 
                                                                    & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst))) 
                                                          | ((IData)(
                                                                     ((3U 
                                                                       == 
                                                                       (0x5fU 
                                                                        & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)) 
                                                                      & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_44))) 
                                                             | (IData)(
                                                                       ((3U 
                                                                         == 
                                                                         (0x105fU 
                                                                          & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)) 
                                                                        & (3U 
                                                                           == (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_52)))))) 
                                                         << 2U)) 
                                                     | (3U 
                                                        & (- (IData)((IData)(vlSelfRef.core__DOT___IDU_io_out_bits_lsu_en))))));
    vlSelfRef.core__DOT___EXU_io_out_bits_rd_en = ((IData)(vlSelfRef.core__DOT__validReg_11)
                                                    ? (IData)(vlSelfRef.core__DOT__dataReg_11_rd_en)
                                                    : (IData)(vlSelfRef.core__DOT___IDU_io_out_bits_rd_en));
    vlSelfRef.core__DOT____Vcellinp__LSU__io_in_bits_rd_en 
        = ((IData)(vlSelfRef.core__DOT__validReg_12)
            ? (IData)(vlSelfRef.core__DOT__dataReg_12_rd_en)
            : (IData)(vlSelfRef.core__DOT___EXU_io_out_bits_rd_en));
    vlSelfRef.core__DOT___EXU_io_out_bits_mem_wen = 
        ((IData)(vlSelfRef.core__DOT__validReg_11) ? (IData)(vlSelfRef.core__DOT__dataReg_11_mw_en)
          : (IData)(vlSelfRef.core__DOT___IDU_io_out_bits_mw_en));
    vlSelfRef.core__DOT___IDU_io_out_bits_opcode = 
        (((8U & (((IData)(((0x63U == (0x7fU & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)) 
                           & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_27))) 
                  | ((IData)(((0x1033U == (0x307fU 
                                           & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)) 
                              & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_33))) 
                     | ((IData)((0x4013U == (0x507fU 
                                             & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst))) 
                        | ((IData)(((0x33U == (0x7fU 
                                               & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)) 
                                    & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_34))) 
                           | ((0xffffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_40)) 
                              | (IData)(((0x13U == 
                                          (0x7fU & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)) 
                                         & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_35)))))))) 
                 << 3U)) | (((IData)(((0x1033U == (0x107fU 
                                                   & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)) 
                                      & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_36))) 
                             | ((IData)(((0x13U == 
                                          (0x7fU & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)) 
                                         & (3U == (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_52)))) 
                                | ((IData)(((0x2033U 
                                             == (0x207fU 
                                                 & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)) 
                                            & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_36))) 
                                   | ((IData)(((0x13U 
                                                == 
                                                (0x107fU 
                                                 & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)) 
                                               & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_38))) 
                                      | ((IData)(((0x33U 
                                                   == 
                                                   (0x207fU 
                                                    & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)) 
                                                  & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_34))) 
                                         | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_40)))))) 
                            << 2U)) | ((((0xffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_25)) 
                                         | ((IData)(
                                                    ((0x33U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)) 
                                                     & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_41))) 
                                            | ((0xffU 
                                                == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_38)) 
                                               | ((0xffffU 
                                                   == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_40)) 
                                                  | (IData)(
                                                            ((0x33U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)) 
                                                             & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_42))))))) 
                                        << 1U) | (1U 
                                                  & ((0xffU 
                                                      == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T)) 
                                                     | ((0xffU 
                                                         == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_2)) 
                                                        | ((0xffU 
                                                            == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_3)) 
                                                           | ((0x7fU 
                                                               == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_7)) 
                                                              | ((IData)(
                                                                         ((0x33U 
                                                                           == 
                                                                           (0x7fU 
                                                                            & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)) 
                                                                          & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_36))) 
                                                                 | ((0x3ffU 
                                                                     == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_17)) 
                                                                    | ((0x7fU 
                                                                        == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_18)) 
                                                                       | ((IData)(
                                                                                ((0x23U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)) 
                                                                                & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_44))) 
                                                                          | ((IData)(
                                                                                (0x2013U 
                                                                                == 
                                                                                (0x307fU 
                                                                                & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst))) 
                                                                             | ((IData)(
                                                                                ((0x13U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)) 
                                                                                & (3U 
                                                                                == (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_52)))) 
                                                                                | ((IData)(
                                                                                ((0x33U 
                                                                                == 
                                                                                (0x107fU 
                                                                                & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)) 
                                                                                & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_41))) 
                                                                                | ((0x1ffU 
                                                                                == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_39)) 
                                                                                | (IData)(
                                                                                ((0x5033U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)) 
                                                                                & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_42))))))))))))))))));
    if (vlSelfRef.core__DOT__validReg_11) {
        vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_imm 
            = vlSelfRef.core__DOT__dataReg_11_imm;
        vlSelfRef.core__DOT___EXU_io_out_bits_unsign_en 
            = vlSelfRef.core__DOT__dataReg_11_unsign_en;
        vlSelfRef.core__DOT___EXU_io_out_bits_mem_len 
            = vlSelfRef.core__DOT__dataReg_11_mlen;
        vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_opcode 
            = vlSelfRef.core__DOT__dataReg_11_opcode;
    } else {
        vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_imm 
            = vlSelfRef.core__DOT__IDU__DOT__casez_tmp;
        vlSelfRef.core__DOT___EXU_io_out_bits_unsign_en 
            = vlSelfRef.core__DOT___IDU_io_out_bits_unsign_en;
        vlSelfRef.core__DOT___EXU_io_out_bits_mem_len 
            = vlSelfRef.core__DOT___IDU_io_out_bits_mlen;
        vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_opcode 
            = vlSelfRef.core__DOT___IDU_io_out_bits_opcode;
    }
    vlSelfRef.core__DOT___EXU_io_out_bits_mem_ren = 
        (((IData)(vlSelfRef.core__DOT__validReg_11)
           ? (IData)(vlSelfRef.core__DOT__dataReg_11_lsu_en)
           : (IData)(vlSelfRef.core__DOT___IDU_io_out_bits_lsu_en)) 
         ^ (IData)(vlSelfRef.core__DOT___EXU_io_out_bits_mem_wen));
    vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2 
        = (((IData)(vlSelfRef.core__DOT__validReg_11)
             ? (IData)(vlSelfRef.core__DOT__dataReg_11_rs2_en)
             : (IData)(vlSelfRef.core__DOT___IDU_io_out_bits_rs2_en))
            ? vlSelfRef.core__DOT___EXU_io_out_bits_mem_wdata
            : (IData)(vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_imm));
    vlSelfRef.core__DOT__EXU__DOT___alu_io_out = ((5U 
                                                   == (IData)(vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_opcode))
                                                   ? 
                                                  VL_MODDIV_III(32, vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1, vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2)
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_opcode))
                                                    ? 
                                                   ((IData)(vlSelfRef.core__DOT___EXU_io_out_bits_unsign_en)
                                                     ? 
                                                    VL_DIV_III(32, vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1, vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2)
                                                     : (IData)(
                                                               (0x1ffffffffULL 
                                                                & VL_DIVS_QQQ(33, 
                                                                              (((QData)((IData)(
                                                                                (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                                                >> 0x1fU))) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1))), 
                                                                              (((QData)((IData)(
                                                                                (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2 
                                                                                >> 0x1fU))) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2)))))))
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_opcode))
                                                     ? 
                                                    (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                     * vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2)
                                                     : 
                                                    ((0xfU 
                                                      == (IData)(vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_opcode))
                                                      ? 
                                                     VL_SHIFTRS_III(32,32,5, vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1, 
                                                                    (0x1fU 
                                                                     & vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2))
                                                      : 
                                                     ((0xeU 
                                                       == (IData)(vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_opcode))
                                                       ? 
                                                      (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                       >> 
                                                       (0x1fU 
                                                        & vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2))
                                                       : 
                                                      ((0xdU 
                                                        == (IData)(vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_opcode))
                                                        ? 
                                                       (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                        << 
                                                        (0x1fU 
                                                         & vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2))
                                                        : 
                                                       ((0xcU 
                                                         == (IData)(vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_opcode))
                                                         ? 
                                                        (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                         ^ vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2)
                                                         : 
                                                        ((0xbU 
                                                          == (IData)(vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_opcode))
                                                          ? 
                                                         (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                          | vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2)
                                                          : 
                                                         ((0xaU 
                                                           == (IData)(vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_opcode))
                                                           ? 
                                                          (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                           & vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2)
                                                           : 
                                                          ((9U 
                                                            == (IData)(vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_opcode))
                                                            ? 
                                                           (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                            != vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2)
                                                            : 
                                                           ((8U 
                                                             == (IData)(vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_opcode))
                                                             ? 
                                                            (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                             == vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2)
                                                             : 
                                                            ((6U 
                                                              == (IData)(vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_opcode))
                                                              ? 
                                                             ((IData)(vlSelfRef.core__DOT___EXU_io_out_bits_unsign_en)
                                                               ? 
                                                              (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                               >= vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2)
                                                               : 
                                                              VL_GTES_III(32, vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1, vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2))
                                                              : 
                                                             ((7U 
                                                               == (IData)(vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_opcode))
                                                               ? 
                                                              ((IData)(vlSelfRef.core__DOT___EXU_io_out_bits_unsign_en)
                                                                ? 
                                                               (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                                < vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2)
                                                                : 
                                                               VL_LTS_III(32, vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1, vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2))
                                                               : 
                                                              ((2U 
                                                                == (IData)(vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_opcode))
                                                                ? 
                                                               (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                                - vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2)
                                                                : 
                                                               ((1U 
                                                                 == (IData)(vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_opcode))
                                                                 ? 
                                                                (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                                 + vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2)
                                                                 : 0U)))))))))))))));
    vlSelfRef.io_debugout1 = ((IData)(vlSelfRef.core__DOT__EXU__DOT____VdfgRegularize_h9d365bda_0_1)
                               ? ((IData)(4U) + vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_pc)
                               : vlSelfRef.core__DOT__EXU__DOT___alu_io_out);
    if (vlSelfRef.core__DOT__validReg_12) {
        vlSelfRef.core__DOT____Vcellinp__LSU__io_in_bits_mem_wen 
            = vlSelfRef.core__DOT__dataReg_12_mem_wen;
        vlSelfRef.core__DOT____Vcellinp__LSU__io_in_bits_mem_ren 
            = vlSelfRef.core__DOT__dataReg_12_mem_ren;
        vlSelfRef.core__DOT____Vcellinp__LSU__io_in_bits_rd_data 
            = vlSelfRef.core__DOT__dataReg_12_rd_data;
    } else {
        vlSelfRef.core__DOT____Vcellinp__LSU__io_in_bits_mem_wen 
            = vlSelfRef.core__DOT___EXU_io_out_bits_mem_wen;
        vlSelfRef.core__DOT____Vcellinp__LSU__io_in_bits_mem_ren 
            = vlSelfRef.core__DOT___EXU_io_out_bits_mem_ren;
        vlSelfRef.core__DOT____Vcellinp__LSU__io_in_bits_rd_data 
            = vlSelfRef.io_debugout1;
    }
    vlSelfRef.core__DOT___LSU_io_out_bits_rd_addr = 
        ((0U == (IData)(vlSelfRef.core__DOT__LSU__DOT__state))
          ? (IData)(vlSelfRef.core__DOT____Vcellinp__LSU__io_in_bits_rd_addr)
          : (IData)(vlSelfRef.core__DOT__LSU__DOT__e2l_reg_rd_addr));
    vlSelfRef.core__DOT___WBU_io_out_addr = ((IData)(vlSelfRef.core__DOT__validReg_13)
                                              ? (IData)(vlSelfRef.core__DOT__dataReg_13_rd_addr)
                                              : (IData)(vlSelfRef.core__DOT___LSU_io_out_bits_rd_addr));
    if ((0U == (IData)(vlSelfRef.core__DOT__LSU__DOT__state))) {
        vlSelfRef.core__DOT___LSU_io_out_bits_rd_en 
            = vlSelfRef.core__DOT____Vcellinp__LSU__io_in_bits_rd_en;
        vlSelfRef.core__DOT___LSU_io_out_bits_rd_data 
            = vlSelfRef.core__DOT____Vcellinp__LSU__io_in_bits_rd_data;
    } else {
        vlSelfRef.core__DOT___LSU_io_out_bits_rd_en 
            = vlSelfRef.core__DOT__LSU__DOT__e2l_reg_rd_en;
        vlSelfRef.core__DOT___LSU_io_out_bits_rd_data 
            = ((2U == (IData)(vlSelfRef.core__DOT__LSU__DOT__state))
                ? VL_SHIFTRS_III(32,32,5, ((0xfU == (IData)(vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_len))
                                            ? vlSelfRef.io_debugmemdata
                                            : ((3U 
                                                == (IData)(vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_len))
                                                ? (
                                                   (((IData)(vlSelfRef.core__DOT__LSU__DOT__e2l_reg_unsign_en)
                                                      ? 0U
                                                      : 
                                                     (0xffffU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (vlSelfRef.io_debugmemdata 
                                                                       >> 0xfU)))))) 
                                                    << 0x10U) 
                                                   | (0xffffU 
                                                      & vlSelfRef.io_debugmemdata))
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_len))
                                                    ? 
                                                   ((((IData)(vlSelfRef.core__DOT__LSU__DOT__e2l_reg_unsign_en)
                                                       ? 0U
                                                       : 
                                                      (0xffffffU 
                                                       & (- (IData)(
                                                                    (1U 
                                                                     & (vlSelfRef.io_debugmemdata 
                                                                        >> 7U)))))) 
                                                     << 8U) 
                                                    | (0xffU 
                                                       & vlSelfRef.io_debugmemdata))
                                                    : 0U))), 
                                 (0x18U & (vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_addr 
                                           << 3U)))
                : vlSelfRef.core__DOT__LSU__DOT__e2l_reg_rd_data);
    }
    vlSelfRef.core__DOT____Vcellinp__WBU__io_in_bits_rd_data 
        = ((IData)(vlSelfRef.core__DOT__validReg_13)
            ? vlSelfRef.core__DOT__dataReg_13_rd_data
            : vlSelfRef.core__DOT___LSU_io_out_bits_rd_data);
    vlSelfRef.core__DOT___EXU_io_pcCtrl_pcSel = (((IData)(vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_branch_en) 
                                                  & (0U 
                                                     != vlSelfRef.core__DOT__EXU__DOT___alu_io_out)) 
                                                 | (IData)(vlSelfRef.core__DOT__EXU__DOT____VdfgRegularize_h9d365bda_0_1));
    vlSelfRef.core__DOT___IFU_io_axi_ar_valid = (1U 
                                                 & ((~ (IData)(vlSelfRef.core__DOT___EXU_io_pcCtrl_pcSel)) 
                                                    & (~ (IData)(vlSelfRef.core__DOT__IFU__DOT__ar_request_in_flight))));
    vlSelfRef.core__DOT__IFU__DOT__axi_r_decoupled_valid 
        = ((~ (IData)(vlSelfRef.core__DOT___EXU_io_pcCtrl_pcSel)) 
           & (IData)(vlSelfRef.core__DOT___IFU_io_axi_r_valid_T));
    vlSelfRef.core__DOT__producerFire = (((~ (IData)(vlSelfRef.core__DOT__validReg)) 
                                          | (~ (IData)(vlSelfRef.core__DOT__Fsram__DOT__r_state))) 
                                         & (IData)(vlSelfRef.core__DOT___IFU_io_axi_ar_valid));
    vlSelfRef.core__DOT__Fsram__DOT___read_backend_io_en_T 
        = ((~ (IData)(vlSelfRef.core__DOT__Fsram__DOT__r_state)) 
           & ((IData)(vlSelfRef.core__DOT___IFU_io_axi_ar_valid) 
              | (IData)(vlSelfRef.core__DOT__validReg)));
    vlSelfRef.core__DOT__IFU__DOT__producerFire = ((IData)(vlSelfRef.core__DOT__IFU__DOT__readyForProducer) 
                                                   & (IData)(vlSelfRef.core__DOT__IFU__DOT__axi_r_decoupled_valid));
    vlSelfRef.core__DOT___IFU_io_out_valid = ((IData)(vlSelfRef.core__DOT__IFU__DOT__axi_r_decoupled_valid) 
                                              | (IData)(vlSelfRef.core__DOT__IFU__DOT__validReg));
    vlSelfRef.core__DOT__IFU__DOT___GEN = ((~ (IData)(vlSelfRef.core__DOT__IFU__DOT__ar_request_in_flight)) 
                                           & (IData)(vlSelfRef.core__DOT__producerFire));
    if (vlSelfRef.core__DOT__Fsram__DOT___read_backend_io_en_T) {
        Vcore___024root____Vdpiimwrap_core__DOT__Fsram__DOT__read_backend__DOT__mem_read_TOP(
                                                                                ((IData)(vlSelfRef.core__DOT__validReg)
                                                                                 ? vlSelfRef.core__DOT__dataReg_addr
                                                                                 : vlSelfRef.core__DOT__IFU__DOT__pc), vlSelfRef.__Vtask_core__DOT__Fsram__DOT__read_backend__DOT__mem_read__0__r_data);
        vlSelfRef.core__DOT__Fsram__DOT__read_backend__DOT__r_data_comb 
            = vlSelfRef.__Vtask_core__DOT__Fsram__DOT__read_backend__DOT__mem_read__0__r_data;
    } else {
        vlSelfRef.core__DOT__Fsram__DOT__read_backend__DOT__r_data_comb = 0U;
    }
    vlSelfRef.core__DOT__IFU__DOT__consumerFire = ((IData)(vlSelfRef.core__DOT__readyForProducer_10) 
                                                   & (IData)(vlSelfRef.core__DOT___IFU_io_out_valid));
    vlSelfRef.core__DOT___IDU_io_out_valid = ((IData)(vlSelfRef.core__DOT___IFU_io_out_valid) 
                                              | (IData)(vlSelfRef.core__DOT__validReg_10));
    vlSelfRef.core__DOT__producerFire_11 = ((IData)(vlSelfRef.core__DOT___IDU_io_in_ready) 
                                            & (IData)(vlSelfRef.core__DOT___IDU_io_out_valid));
    vlSelfRef.core__DOT___EXU_io_out_valid = ((IData)(vlSelfRef.core__DOT___IDU_io_out_valid) 
                                              | (IData)(vlSelfRef.core__DOT__validReg_11));
    vlSelfRef.core__DOT__producerFire_12 = ((IData)(vlSelfRef.core__DOT___EXU_io_in_ready) 
                                            & (IData)(vlSelfRef.core__DOT___EXU_io_out_valid));
    vlSelfRef.core__DOT___LSU_io_in_valid_T = ((IData)(vlSelfRef.core__DOT___EXU_io_out_valid) 
                                               | (IData)(vlSelfRef.core__DOT__validReg_12));
    vlSelfRef.core__DOT__LSU__DOT___GEN_7 = ((0U == (IData)(vlSelfRef.core__DOT__LSU__DOT__state)) 
                                             & (IData)(vlSelfRef.core__DOT___LSU_io_in_valid_T));
    vlSelfRef.core__DOT__LSU__DOT__is_passthrough = 
        ((~ ((IData)(vlSelfRef.core__DOT____Vcellinp__LSU__io_in_bits_mem_ren) 
             | (IData)(vlSelfRef.core__DOT____Vcellinp__LSU__io_in_bits_mem_wen))) 
         & (IData)(vlSelfRef.core__DOT___LSU_io_in_valid_T));
    vlSelfRef.core__DOT___LSU_io_out_valid = ((0U == (IData)(vlSelfRef.core__DOT__LSU__DOT__state))
                                               ? ((IData)(vlSelfRef.core__DOT__LSU__DOT__is_passthrough) 
                                                  & (IData)(vlSelfRef.core__DOT___LSU_io_in_valid_T))
                                               : ((1U 
                                                   != (IData)(vlSelfRef.core__DOT__LSU__DOT__state)) 
                                                  & ((2U 
                                                      == (IData)(vlSelfRef.core__DOT__LSU__DOT__state))
                                                      ? (IData)(vlSelfRef.core__DOT__LSU__DOT___GEN_3)
                                                      : 
                                                     ((3U 
                                                       != (IData)(vlSelfRef.core__DOT__LSU__DOT__state)) 
                                                      & ((4U 
                                                          == (IData)(vlSelfRef.core__DOT__LSU__DOT__state)) 
                                                         & (IData)(vlSelfRef.core__DOT__LSU__DOT___GEN_6))))));
    vlSelfRef.core__DOT___WBU_io_out_en = ((IData)(vlSelfRef.core__DOT___LSU_io_out_valid) 
                                           | (IData)(vlSelfRef.core__DOT__validReg_13));
    vlSelfRef.core__DOT__RF__DOT___GEN = ((IData)(vlSelfRef.core__DOT___WBU_io_out_en) 
                                          & (0U != (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)));
    vlSelfRef.io_inst_done = (((IData)(vlSelfRef.core__DOT__validReg_13)
                                ? (IData)(vlSelfRef.core__DOT__dataReg_13_rd_en)
                                : (IData)(vlSelfRef.core__DOT___LSU_io_out_bits_rd_en)) 
                              & (IData)(vlSelfRef.core__DOT___WBU_io_out_en));
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
    vlSelf->io_debugin1 = VL_RAND_RESET_I(32);
    vlSelf->io_debugin2 = VL_RAND_RESET_I(32);
    vlSelf->io_debugout1 = VL_RAND_RESET_I(32);
    vlSelf->io_debugmemaddr = VL_RAND_RESET_I(32);
    vlSelf->io_debugmemdata = VL_RAND_RESET_I(32);
    vlSelf->io_inst_done = VL_RAND_RESET_I(1);
    vlSelf->core__DOT___WBU_io_out_addr = VL_RAND_RESET_I(5);
    vlSelf->core__DOT___WBU_io_out_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT___LSU_io_out_valid = VL_RAND_RESET_I(1);
    vlSelf->core__DOT___LSU_io_out_bits_rd_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT___LSU_io_out_bits_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->core__DOT___LSU_io_out_bits_rd_data = VL_RAND_RESET_I(32);
    vlSelf->core__DOT___LSU_io_axi_r_ready = VL_RAND_RESET_I(1);
    vlSelf->core__DOT___LSU_io_axi_w_bits_data = VL_RAND_RESET_I(32);
    vlSelf->core__DOT___LSU_io_axi_w_bits_strb = VL_RAND_RESET_I(4);
    vlSelf->core__DOT___LSU_io_axi_b_ready = VL_RAND_RESET_I(1);
    vlSelf->core__DOT___EXU_io_out_valid = VL_RAND_RESET_I(1);
    vlSelf->core__DOT___EXU_io_out_bits_rd_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT___EXU_io_out_bits_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->core__DOT___EXU_io_out_bits_mem_wen = VL_RAND_RESET_I(1);
    vlSelf->core__DOT___EXU_io_out_bits_mem_ren = VL_RAND_RESET_I(1);
    vlSelf->core__DOT___EXU_io_out_bits_mem_wdata = VL_RAND_RESET_I(32);
    vlSelf->core__DOT___EXU_io_out_bits_mem_len = VL_RAND_RESET_I(4);
    vlSelf->core__DOT___EXU_io_out_bits_unsign_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT___EXU_io_pcCtrl_pcSel = VL_RAND_RESET_I(1);
    vlSelf->core__DOT___EXU_io_in_ready = VL_RAND_RESET_I(1);
    vlSelf->core__DOT___IDU_io_in_ready = VL_RAND_RESET_I(1);
    vlSelf->core__DOT___IDU_io_out_valid = VL_RAND_RESET_I(1);
    vlSelf->core__DOT___IDU_io_out_bits_rd_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT___IDU_io_out_bits_opcode = VL_RAND_RESET_I(5);
    vlSelf->core__DOT___IDU_io_out_bits_pc = VL_RAND_RESET_I(32);
    vlSelf->core__DOT___IDU_io_out_bits_rs2_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT___IDU_io_out_bits_unsign_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT___IDU_io_out_bits_lsu_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT___IDU_io_out_bits_mw_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT___IDU_io_out_bits_mlen = VL_RAND_RESET_I(4);
    vlSelf->core__DOT___IDU_io_out_bits_branch_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT___IFU_io_out_valid = VL_RAND_RESET_I(1);
    vlSelf->core__DOT___IFU_io_axi_ar_valid = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__validReg = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__dataReg_addr = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__producerFire = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__validReg_1 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__dataReg_1_resp = VL_RAND_RESET_I(2);
    vlSelf->core__DOT__dataReg_1_data = VL_RAND_RESET_I(32);
    vlSelf->core__DOT___IFU_io_axi_r_valid_T = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__validReg_5 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__dataReg_5_addr = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__readyForProducer_5 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__producerFire_5 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__validReg_6 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__dataReg_6_resp = VL_RAND_RESET_I(2);
    vlSelf->core__DOT__dataReg_6_data = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__validReg_7 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__dataReg_7_addr = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__readyForProducer_7 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__producerFire_7 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__validReg_8 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__readyForProducer_8 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__producerFire_8 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__validReg_9 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__dataReg_9_data = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__dataReg_9_strb = VL_RAND_RESET_I(4);
    vlSelf->core__DOT__readyForProducer_9 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__producerFire_9 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__validReg_10 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__dataReg_10_inst = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__dataReg_10_pc = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__readyForProducer_10 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__validReg_11 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__dataReg_11_rs1_data = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__dataReg_11_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__dataReg_11_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->core__DOT__dataReg_11_rd_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__dataReg_11_opcode = VL_RAND_RESET_I(5);
    vlSelf->core__DOT__dataReg_11_imm = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__dataReg_11_pc = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__dataReg_11_rs2_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__dataReg_11_unsign_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__dataReg_11_csr_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__dataReg_11_lsu_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__dataReg_11_mw_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__dataReg_11_mlen = VL_RAND_RESET_I(4);
    vlSelf->core__DOT__dataReg_11_branch_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__dataReg_11_jump_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__dataReg_11_jalr_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__dataReg_11_auipc_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__producerFire_11 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__validReg_12 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__dataReg_12_rd_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__dataReg_12_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->core__DOT__dataReg_12_rd_data = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__dataReg_12_mem_wen = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__dataReg_12_mem_ren = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__dataReg_12_mem_addr = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__dataReg_12_mem_wdata = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__dataReg_12_mem_len = VL_RAND_RESET_I(4);
    vlSelf->core__DOT__dataReg_12_unsign_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT___LSU_io_in_valid_T = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__producerFire_12 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__validReg_13 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__dataReg_13_rd_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__dataReg_13_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->core__DOT__dataReg_13_rd_data = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__consumerFire_1 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT____Vcellinp__IFU__io_axi_r_bits_data = VL_RAND_RESET_I(32);
    vlSelf->core__DOT____Vcellinp__IDU__io_in_bits_inst = VL_RAND_RESET_I(32);
    vlSelf->core__DOT____Vcellinp__EXU__io_in_bits_jalr_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT____Vcellinp__EXU__io_in_bits_jump_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT____Vcellinp__EXU__io_in_bits_branch_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT____Vcellinp__EXU__io_in_bits_pc = VL_RAND_RESET_I(32);
    vlSelf->core__DOT____Vcellinp__EXU__io_in_bits_imm = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT____Vcellinp__EXU__io_in_bits_opcode = VL_RAND_RESET_I(5);
    vlSelf->core__DOT____Vcellinp__LSU__io_in_bits_mem_ren = VL_RAND_RESET_I(1);
    vlSelf->core__DOT____Vcellinp__LSU__io_in_bits_mem_wen = VL_RAND_RESET_I(1);
    vlSelf->core__DOT____Vcellinp__LSU__io_in_bits_rd_data = VL_RAND_RESET_I(32);
    vlSelf->core__DOT____Vcellinp__LSU__io_in_bits_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->core__DOT____Vcellinp__LSU__io_in_bits_rd_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT____Vcellinp__WBU__io_in_bits_rd_data = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__Fsram__DOT__r_state = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__Fsram__DOT___write_backend_done = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__Fsram__DOT___read_backend_done = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__Fsram__DOT___read_backend_io_en_T = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__Fsram__DOT__write_backend_io_en_REG = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__Fsram__DOT__r_valid_reg = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__Fsram__DOT__r_bits_reg_resp = VL_RAND_RESET_I(2);
    vlSelf->core__DOT__Fsram__DOT__r_bits_reg_data = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__Fsram__DOT__w_state = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__Fsram__DOT__write_backend_io_aw_addr_REG = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__Fsram__DOT__write_backend_io_w_data_REG = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__Fsram__DOT__write_backend_io_w_strb_REG = VL_RAND_RESET_I(4);
    vlSelf->core__DOT__Fsram__DOT__b_valid_reg = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__Fsram__DOT__b_bits_reg_resp = VL_RAND_RESET_I(2);
    vlSelf->core__DOT__Fsram__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__Fsram__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__Fsram__DOT__read_backend__DOT__r_data_reg = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__Fsram__DOT__read_backend__DOT__r_data_comb = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__Fsram__DOT__read_backend__DOT__delay = VL_RAND_RESET_I(3);
    vlSelf->core__DOT__Lsram__DOT__r_state = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__Lsram__DOT___write_backend_done = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__Lsram__DOT___read_backend_done = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__Lsram__DOT___read_backend_io_en_T = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__Lsram__DOT__write_backend_io_en_REG = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__Lsram__DOT__r_valid_reg = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__Lsram__DOT__r_bits_reg_resp = VL_RAND_RESET_I(2);
    vlSelf->core__DOT__Lsram__DOT__r_bits_reg_data = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__Lsram__DOT__w_state = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__Lsram__DOT__write_backend_io_aw_addr_REG = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__Lsram__DOT__write_backend_io_w_data_REG = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__Lsram__DOT__write_backend_io_w_strb_REG = VL_RAND_RESET_I(4);
    vlSelf->core__DOT__Lsram__DOT__b_valid_reg = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__Lsram__DOT__b_bits_reg_resp = VL_RAND_RESET_I(2);
    vlSelf->core__DOT__Lsram__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__Lsram__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__Lsram__DOT___write_backend_io_en_T = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__Lsram__DOT___write_backend_io_en_T_1 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__Lsram__DOT__read_backend__DOT__r_data_reg = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__Lsram__DOT__read_backend__DOT__r_data_comb = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__Lsram__DOT__read_backend__DOT__delay = VL_RAND_RESET_I(3);
    vlSelf->core__DOT__IFU__DOT__axi_r_decoupled_valid = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IFU__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__IFU__DOT__pc_in_flight = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__IFU__DOT__ar_request_in_flight = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IFU__DOT__validReg = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IFU__DOT__dataReg_inst = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__IFU__DOT__dataReg_pc = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__IFU__DOT__readyForProducer = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IFU__DOT__consumerFire = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IFU__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IFU__DOT__producerFire = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T = VL_RAND_RESET_I(8);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_1 = VL_RAND_RESET_I(8);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_2 = VL_RAND_RESET_I(8);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_3 = VL_RAND_RESET_I(8);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_6 = VL_RAND_RESET_I(6);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_7 = VL_RAND_RESET_I(7);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_8 = VL_RAND_RESET_I(9);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_9 = VL_RAND_RESET_I(8);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_11 = VL_RAND_RESET_I(16);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_12 = VL_RAND_RESET_I(13);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_14 = VL_RAND_RESET_I(8);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_17 = VL_RAND_RESET_I(10);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_18 = VL_RAND_RESET_I(7);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_25 = VL_RAND_RESET_I(8);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_38 = VL_RAND_RESET_I(8);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_39 = VL_RAND_RESET_I(9);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_40 = VL_RAND_RESET_I(16);
    vlSelf->core__DOT__IDU__DOT__casez_tmp = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_27 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_32 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_33 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_34 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_35 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_36 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_38 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_40 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_41 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_42 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_44 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_47 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_49 = VL_RAND_RESET_I(3);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_50 = VL_RAND_RESET_I(2);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_51 = VL_RAND_RESET_I(6);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_52 = VL_RAND_RESET_I(2);
    vlSelf->core__DOT__EXU__DOT___alu_io_out = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__EXU__DOT____Vcellinp__alu__io_in2 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__EXU__DOT____Vcellinp__alu__io_in1 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__EXU__DOT____VdfgRegularize_h9d365bda_0_1 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__RF__DOT__rf_0 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_1 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_2 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_3 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_4 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_5 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_6 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_7 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_8 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_9 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_10 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_11 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_12 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_13 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_14 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_15 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_16 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_17 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_18 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_19 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_20 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_21 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_22 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_23 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_24 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_25 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_26 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_27 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_28 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_29 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_30 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_31 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__casez_tmp = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__casez_tmp_0 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__LSU__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->core__DOT__LSU__DOT__e2l_reg_rd_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__LSU__DOT__e2l_reg_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->core__DOT__LSU__DOT__e2l_reg_rd_data = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__LSU__DOT__e2l_reg_mem_addr = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__LSU__DOT__e2l_reg_mem_wdata = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__LSU__DOT__e2l_reg_mem_len = VL_RAND_RESET_I(4);
    vlSelf->core__DOT__LSU__DOT__e2l_reg_unsign_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__LSU__DOT__is_passthrough = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__LSU__DOT__io_in_ready_0 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__LSU__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__LSU__DOT__io_axi_ar_valid_0 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__LSU__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__LSU__DOT___GEN_3 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__LSU__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__LSU__DOT__io_axi_w_valid_0 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__LSU__DOT___GEN_5 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__LSU__DOT___GEN_6 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__LSU__DOT___GEN_7 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__LSU__DOT____VdfgRegularize_ha7d0a824_0_3 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__LSU__DOT____VdfgRegularize_ha7d0a824_0_4 = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_core__DOT__Fsram__DOT__read_backend__DOT__mem_read__0__r_data = 0;
    vlSelf->__Vtask_core__DOT__Lsram__DOT__read_backend__DOT__mem_read__2__r_data = 0;
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
