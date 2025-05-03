// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcore__Syms.h"


void Vcore___024root__trace_chg_0_sub_0(Vcore___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcore___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_chg_0\n"); );
    // Init
    Vcore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcore___024root*>(voidSelf);
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcore___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vcore___024root__trace_chg_0_sub_0(Vcore___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_chg_0_sub_0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,((IData)(vlSelfRef.core__DOT__decode__DOT__casez_tmp)),32);
        bufp->chgBit(oldp+1,(vlSelfRef.core__DOT___decode_io_rs1_en));
        bufp->chgIData(oldp+2,(vlSelfRef.core__DOT____Vcellinp__control__io_rf_data),32);
        bufp->chgBit(oldp+3,(vlSelfRef.core__DOT___executer_io_branchCond));
        bufp->chgCData(oldp+4,(vlSelfRef.core__DOT___decode_io_rs1_addr),5);
        bufp->chgCData(oldp+5,(vlSelfRef.core__DOT___decode_io_rs2_addr),5);
        bufp->chgBit(oldp+6,(((0xffU == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_16)) 
                              | ((0xffU == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_18)) 
                                 | ((0x7fffU == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_19)) 
                                    | ((0x1fffU == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_20)) 
                                       | ((0x7fffU 
                                           == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_21)) 
                                          | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                              & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                 & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                    & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_58)))) 
                                             | ((0xffU 
                                                 == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_48)) 
                                                | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_53))))))))));
        bufp->chgCData(oldp+7,(vlSelfRef.core__DOT___decode_io_rd_addr),5);
        bufp->chgBit(oldp+8,(((0x7fU == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T)) 
                              | ((0xffU == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_1)) 
                                 | ((0xffU == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_4)) 
                                    | ((0x3ffU == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_9)) 
                                       | ((0x1ffU == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_12)) 
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
                                                                     | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_54)))))))))))))))));
        bufp->chgCData(oldp+9,(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2),8);
        bufp->chgQData(oldp+10,(vlSelfRef.core__DOT__decode__DOT__casez_tmp),64);
        bufp->chgBit(oldp+12,(((0xffU == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_24)) 
                               | ((0x1ffU == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_25)) 
                                  | ((0x7fU == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_27)) 
                                     | (0xffU == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_48)))))));
        bufp->chgIData(oldp+13,(vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs),30);
        bufp->chgIData(oldp+14,(vlSelfRef.core__DOT____Vcellinp__executer__io_in1),32);
        bufp->chgIData(oldp+15,(vlSelfRef.core__DOT____Vcellinp__executer__io_in2),32);
        bufp->chgIData(oldp+16,(vlSelfRef.core__DOT___executer_io_out),32);
        bufp->chgBit(oldp+17,(((~ (IData)(vlSelfRef.core__DOT__executer__DOT___GEN_28)) 
                               & ((0x14U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                  | ((IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_14) 
                                     | ((0x17U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                        | ((0x18U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                           | (IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_11))))))));
        bufp->chgQData(oldp+18,(((IData)(vlSelfRef.core__DOT__executer__DOT___GEN_28)
                                  ? 0ULL : ((0x14U 
                                             == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                             ? (QData)((IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_1))
                                             : ((0x15U 
                                                 == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                 ? (QData)((IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_1))
                                                 : 
                                                ((0x16U 
                                                  == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                  ? (QData)((IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_1))
                                                  : 
                                                 ((0x17U 
                                                   == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                   ? (QData)((IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_1))
                                                   : 
                                                  ((0x18U 
                                                    == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                    ? (QData)((IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_1))
                                                    : 
                                                   ((0x19U 
                                                     == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                     ? (QData)((IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_1))
                                                     : 
                                                    ((0x1aU 
                                                      == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                      ? (QData)((IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_1))
                                                      : 
                                                     ((0x1bU 
                                                       == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                       ? (QData)((IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_1))
                                                       : 0ULL)))))))))),64);
        bufp->chgQData(oldp+20,(vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__mem_rdata_64),64);
        bufp->chgQData(oldp+22,((((IData)(vlSelfRef.core__DOT__executer__DOT___GEN_28) 
                                  | ((0x14U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                     | ((IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_14) 
                                        | ((0x17U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                           | (0x18U 
                                              == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))))))
                                  ? 0ULL : ((0x19U 
                                             == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                             ? (QData)((IData)(
                                                               (0xffU 
                                                                & vlSelfRef.core__DOT____Vcellinp__executer__io_in2)))
                                             : ((0x1aU 
                                                 == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & vlSelfRef.core__DOT____Vcellinp__executer__io_in2)))
                                                 : 
                                                ((0x1bU 
                                                  == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                  ? (QData)((IData)(vlSelfRef.core__DOT____Vcellinp__executer__io_in2))
                                                  : 0ULL))))),64);
        bufp->chgQData(oldp+24,((((IData)(vlSelfRef.core__DOT__executer__DOT___GEN_28) 
                                  | ((0x14U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                     | ((IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_14) 
                                        | ((0x17U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                           | (0x18U 
                                              == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))))))
                                  ? 0ULL : ((0x19U 
                                             == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                             ? 0xffULL
                                             : ((0x1aU 
                                                 == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                 ? 0xffffULL
                                                 : 
                                                ((0x1bU 
                                                  == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                  ? 0xffffffffULL
                                                  : 0ULL))))),64);
        bufp->chgBit(oldp+26,(((~ ((IData)(vlSelfRef.core__DOT__executer__DOT___GEN_28) 
                                   | ((0x14U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                      | ((IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_14) 
                                         | ((0x17U 
                                             == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                            | (0x18U 
                                               == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))))))) 
                               & (IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_11))));
        bufp->chgQData(oldp+27,((QData)((IData)(vlSelfRef.core__DOT__instfetch__DOT__pc))),64);
        bufp->chgQData(oldp+29,((QData)((IData)(vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__mem_rdata))),64);
        bufp->chgBit(oldp+31,(vlSelfRef.core__DOT__instfetch__DOT__pc_en));
        bufp->chgIData(oldp+32,(vlSelfRef.core__DOT__instfetch__DOT__pc),32);
        bufp->chgIData(oldp+33,(vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__mem_rdata),32);
        bufp->chgIData(oldp+34,((vlSelfRef.core__DOT__instfetch__DOT__pc 
                                 - (IData)(0x80000000U))),32);
        bufp->chgIData(oldp+35,(vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__addr_offset_dmem),32);
        bufp->chgIData(oldp+36,(vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__lower_data),32);
        bufp->chgIData(oldp+37,(vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__upper_data),32);
        bufp->chgQData(oldp+38,((QData)((IData)(vlSelfRef.core__DOT____Vcellinp__control__io_rf_data))),64);
        bufp->chgQData(oldp+40,((QData)((IData)(((0U 
                                                  != (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                  ? vlSelfRef.core__DOT__rf__DOT__casez_tmp_0
                                                  : 0U)))),64);
        bufp->chgQData(oldp+42,((QData)((IData)(vlSelfRef.core__DOT___executer_io_out))),64);
        bufp->chgIData(oldp+44,(vlSelfRef.core__DOT__rf__DOT__rf_0),32);
        bufp->chgIData(oldp+45,(vlSelfRef.core__DOT__rf__DOT__rf_1),32);
        bufp->chgIData(oldp+46,(vlSelfRef.core__DOT__rf__DOT__rf_2),32);
        bufp->chgIData(oldp+47,(vlSelfRef.core__DOT__rf__DOT__rf_3),32);
        bufp->chgIData(oldp+48,(vlSelfRef.core__DOT__rf__DOT__rf_4),32);
        bufp->chgIData(oldp+49,(vlSelfRef.core__DOT__rf__DOT__rf_5),32);
        bufp->chgIData(oldp+50,(vlSelfRef.core__DOT__rf__DOT__rf_6),32);
        bufp->chgIData(oldp+51,(vlSelfRef.core__DOT__rf__DOT__rf_7),32);
        bufp->chgIData(oldp+52,(vlSelfRef.core__DOT__rf__DOT__rf_8),32);
        bufp->chgIData(oldp+53,(vlSelfRef.core__DOT__rf__DOT__rf_9),32);
        bufp->chgIData(oldp+54,(vlSelfRef.core__DOT__rf__DOT__rf_10),32);
        bufp->chgIData(oldp+55,(vlSelfRef.core__DOT__rf__DOT__rf_11),32);
        bufp->chgIData(oldp+56,(vlSelfRef.core__DOT__rf__DOT__rf_12),32);
        bufp->chgIData(oldp+57,(vlSelfRef.core__DOT__rf__DOT__rf_13),32);
        bufp->chgIData(oldp+58,(vlSelfRef.core__DOT__rf__DOT__rf_14),32);
        bufp->chgIData(oldp+59,(vlSelfRef.core__DOT__rf__DOT__rf_15),32);
        bufp->chgIData(oldp+60,(vlSelfRef.core__DOT__rf__DOT__rf_16),32);
        bufp->chgIData(oldp+61,(vlSelfRef.core__DOT__rf__DOT__rf_17),32);
        bufp->chgIData(oldp+62,(vlSelfRef.core__DOT__rf__DOT__rf_18),32);
        bufp->chgIData(oldp+63,(vlSelfRef.core__DOT__rf__DOT__rf_19),32);
        bufp->chgIData(oldp+64,(vlSelfRef.core__DOT__rf__DOT__rf_20),32);
        bufp->chgIData(oldp+65,(vlSelfRef.core__DOT__rf__DOT__rf_21),32);
        bufp->chgIData(oldp+66,(vlSelfRef.core__DOT__rf__DOT__rf_22),32);
        bufp->chgIData(oldp+67,(vlSelfRef.core__DOT__rf__DOT__rf_23),32);
        bufp->chgIData(oldp+68,(vlSelfRef.core__DOT__rf__DOT__rf_24),32);
        bufp->chgIData(oldp+69,(vlSelfRef.core__DOT__rf__DOT__rf_25),32);
        bufp->chgIData(oldp+70,(vlSelfRef.core__DOT__rf__DOT__rf_26),32);
        bufp->chgIData(oldp+71,(vlSelfRef.core__DOT__rf__DOT__rf_27),32);
        bufp->chgIData(oldp+72,(vlSelfRef.core__DOT__rf__DOT__rf_28),32);
        bufp->chgIData(oldp+73,(vlSelfRef.core__DOT__rf__DOT__rf_29),32);
        bufp->chgIData(oldp+74,(vlSelfRef.core__DOT__rf__DOT__rf_30),32);
        bufp->chgIData(oldp+75,(vlSelfRef.core__DOT__rf__DOT__rf_31),32);
        bufp->chgIData(oldp+76,(vlSelfRef.core__DOT__rf__DOT__casez_tmp),32);
        bufp->chgIData(oldp+77,(vlSelfRef.core__DOT__rf__DOT__casez_tmp_0),32);
    }
    bufp->chgBit(oldp+78,(vlSelfRef.clock));
    bufp->chgBit(oldp+79,(vlSelfRef.reset));
    bufp->chgIData(oldp+80,(vlSelfRef.io_debugPC),32);
    bufp->chgIData(oldp+81,(vlSelfRef.io_debugInst),32);
    bufp->chgIData(oldp+82,(vlSelfRef.io_debugDNPC),32);
}

void Vcore___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_cleanup\n"); );
    // Init
    Vcore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcore___024root*>(voidSelf);
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
