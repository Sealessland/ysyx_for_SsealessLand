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
        bufp->chgBit(oldp+0,(vlSelfRef.core__DOT__LS_reg));
        bufp->chgBit(oldp+1,((IData)(((0x100000U == 
                                       (0x780000U & 
                                        vlSelfRef.core__DOT__queue_1__DOT__ram[4U])) 
                                      & (1U != (0xfU 
                                                & (vlSelfRef.core__DOT__queue_1__DOT__ram[4U] 
                                                   >> 0x13U)))))));
        bufp->chgSData(oldp+2,(vlSelfRef.core__DOT___exu_io_csr_w_addr),12);
        bufp->chgIData(oldp+3,(vlSelfRef.core__DOT___exu_io_csr_w_data),32);
        bufp->chgIData(oldp+4,(vlSelfRef.core__DOT___csr_io_r_data),32);
        bufp->chgIData(oldp+5,(((IData)(vlSelfRef.core__DOT__exu__DOT___GEN_2)
                                 ? 0U : 0x341U)),32);
        bufp->chgBit(oldp+6,(vlSelfRef.core__DOT___exu_io_csr_w_en));
        bufp->chgIData(oldp+7,(((8U & vlSelfRef.core__DOT__queue_1__DOT__ram[1U])
                                 ? ((vlSelfRef.core__DOT__queue_1__DOT__ram[4U] 
                                     << 0xdU) | (vlSelfRef.core__DOT__queue_1__DOT__ram[3U] 
                                                 >> 0x13U))
                                 : 0U)),32);
        bufp->chgIData(oldp+8,(vlSelfRef.core__DOT__csr__DOT__mstatus),32);
        bufp->chgIData(oldp+9,(vlSelfRef.core__DOT__csr__DOT__mtvec),32);
        bufp->chgIData(oldp+10,(vlSelfRef.core__DOT__csr__DOT__mepc),32);
        bufp->chgIData(oldp+11,(vlSelfRef.core__DOT__csr__DOT__mcause),32);
        bufp->chgIData(oldp+12,(vlSelfRef.core__DOT__csr__DOT__mip),32);
        bufp->chgIData(oldp+13,(vlSelfRef.core__DOT__csr__DOT__mie),32);
        bufp->chgBit(oldp+14,((1U & (~ (IData)(vlSelfRef.core__DOT__queue_2__DOT__full)))));
        bufp->chgBit(oldp+15,(vlSelfRef.core__DOT__queue_1__DOT__full));
        bufp->chgIData(oldp+16,(vlSelfRef.core__DOT__queue_1__DOT__ram[0U]),32);
        bufp->chgCData(oldp+17,((7U & vlSelfRef.core__DOT__queue_1__DOT__ram[1U])),3);
        bufp->chgBit(oldp+18,((1U & (vlSelfRef.core__DOT__queue_1__DOT__ram[1U] 
                                     >> 3U))));
        bufp->chgCData(oldp+19,((0xfU & (vlSelfRef.core__DOT__queue_1__DOT__ram[1U] 
                                         >> 4U))),4);
        bufp->chgCData(oldp+20,((0x1fU & (vlSelfRef.core__DOT__queue_1__DOT__ram[1U] 
                                          >> 8U))),5);
        bufp->chgIData(oldp+21,(((vlSelfRef.core__DOT__queue_1__DOT__ram[2U] 
                                  << 0x13U) | (vlSelfRef.core__DOT__queue_1__DOT__ram[1U] 
                                               >> 0xdU))),32);
        bufp->chgIData(oldp+22,(((vlSelfRef.core__DOT__queue_1__DOT__ram[3U] 
                                  << 0x13U) | (vlSelfRef.core__DOT__queue_1__DOT__ram[2U] 
                                               >> 0xdU))),32);
        bufp->chgBit(oldp+23,((1U & (vlSelfRef.core__DOT__queue_1__DOT__ram[3U] 
                                     >> 0xdU))));
        bufp->chgCData(oldp+24,((0x1fU & (vlSelfRef.core__DOT__queue_1__DOT__ram[3U] 
                                          >> 0xeU))),5);
        bufp->chgIData(oldp+25,(((vlSelfRef.core__DOT__queue_1__DOT__ram[4U] 
                                  << 0xdU) | (vlSelfRef.core__DOT__queue_1__DOT__ram[3U] 
                                              >> 0x13U))),32);
        bufp->chgCData(oldp+26,((0xfU & (vlSelfRef.core__DOT__queue_1__DOT__ram[4U] 
                                         >> 0x13U))),4);
        bufp->chgBit(oldp+27,((1U & (vlSelfRef.core__DOT__queue_1__DOT__ram[4U] 
                                     >> 0x17U))));
        bufp->chgBit(oldp+28,((1U & (vlSelfRef.core__DOT__queue_1__DOT__ram[4U] 
                                     >> 0x18U))));
        bufp->chgSData(oldp+29,((0xfffU & ((vlSelfRef.core__DOT__queue_1__DOT__ram[5U] 
                                            << 7U) 
                                           | (vlSelfRef.core__DOT__queue_1__DOT__ram[4U] 
                                              >> 0x19U)))),12);
        bufp->chgCData(oldp+30,((7U & (vlSelfRef.core__DOT__queue_1__DOT__ram[5U] 
                                       >> 5U))),3);
        bufp->chgBit(oldp+31,((1U & (vlSelfRef.core__DOT__queue_1__DOT__ram[5U] 
                                     >> 8U))));
        bufp->chgCData(oldp+32,((3U & (vlSelfRef.core__DOT__queue_1__DOT__ram[5U] 
                                       >> 9U))),2);
        bufp->chgBit(oldp+33,((1U & (vlSelfRef.core__DOT__queue_1__DOT__ram[5U] 
                                     >> 0xbU))));
        bufp->chgBit(oldp+34,(vlSelfRef.core__DOT___exu_io_pcCtrl_pc_en));
        bufp->chgIData(oldp+35,(((IData)(vlSelfRef.core__DOT__exu__DOT___GEN_2)
                                  ? ((0x800000U & vlSelfRef.core__DOT__queue_1__DOT__ram[4U])
                                      ? vlSelfRef.core__DOT__exu__DOT__alu__DOT__casez_tmp
                                      : ((IData)(vlSelfRef.core__DOT__exu__DOT___GEN)
                                          ? (vlSelfRef.core__DOT__queue_1__DOT__ram[0U] 
                                             + ((vlSelfRef.core__DOT__queue_1__DOT__ram[4U] 
                                                 << 0xdU) 
                                                | (vlSelfRef.core__DOT__queue_1__DOT__ram[3U] 
                                                   >> 0x13U)))
                                          : 0U)) : vlSelfRef.core__DOT___csr_io_r_data)),32);
        bufp->chgBit(oldp+36,((1U & ((vlSelfRef.core__DOT__queue_1__DOT__ram[4U] 
                                      >> 0x18U) | (
                                                   vlSelfRef.core__DOT__queue_1__DOT__ram[3U] 
                                                   >> 0xdU)))));
        bufp->chgCData(oldp+37,(((0x1000000U & vlSelfRef.core__DOT__queue_1__DOT__ram[4U])
                                  ? 0U : (0x1fU & (
                                                   vlSelfRef.core__DOT__queue_1__DOT__ram[3U] 
                                                   >> 0xeU)))),5);
        bufp->chgIData(oldp+38,(((0x800000U & vlSelfRef.core__DOT__queue_1__DOT__ram[4U])
                                  ? ((IData)(4U) + 
                                     ((vlSelfRef.core__DOT__queue_1__DOT__ram[4U] 
                                       << 0xdU) | (
                                                   vlSelfRef.core__DOT__queue_1__DOT__ram[3U] 
                                                   >> 0x13U)))
                                  : vlSelfRef.core__DOT__exu__DOT__alu__DOT__casez_tmp)),32);
        bufp->chgIData(oldp+39,(vlSelfRef.core__DOT__exu__DOT__alu__DOT__casez_tmp),32);
        bufp->chgIData(oldp+40,(vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in1),32);
        bufp->chgIData(oldp+41,(vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in2),32);
        bufp->chgQData(oldp+42,((0x7fffffffffffffffULL 
                                 & ((QData)((IData)(vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in1)) 
                                    << (0x1fU & vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in2)))),63);
        bufp->chgCData(oldp+44,(((8U & vlSelfRef.core__DOT__queue_1__DOT__ram[1U])
                                  ? (0xfU & (vlSelfRef.core__DOT__queue_1__DOT__ram[1U] 
                                             >> 4U))
                                  : 0U)),4);
        bufp->chgIData(oldp+45,(((8U & vlSelfRef.core__DOT__queue_1__DOT__ram[1U])
                                  ? ((vlSelfRef.core__DOT__queue_1__DOT__ram[2U] 
                                      << 0x13U) | (
                                                   vlSelfRef.core__DOT__queue_1__DOT__ram[1U] 
                                                   >> 0xdU))
                                  : 0U)),32);
        bufp->chgIData(oldp+46,(((8U & vlSelfRef.core__DOT__queue_1__DOT__ram[1U])
                                  ? vlSelfRef.core__DOT__queue_1__DOT__ram[0U]
                                  : 0U)),32);
        bufp->chgIData(oldp+47,(vlSelfRef.core__DOT__exu__DOT____Vcellinp__csrUnit__io_csr_old_value),32);
        bufp->chgIData(oldp+48,(((1U == (IData)(vlSelfRef.core__DOT__exu__DOT__csrUnit__DOT____VdfgRegularize_hc5739c28_0_0))
                                  ? vlSelfRef.core__DOT__exu__DOT__csrUnit__DOT__write_source
                                  : ((2U == (IData)(vlSelfRef.core__DOT__exu__DOT__csrUnit__DOT____VdfgRegularize_hc5739c28_0_0))
                                      ? (vlSelfRef.core__DOT__exu__DOT____Vcellinp__csrUnit__io_csr_old_value 
                                         | vlSelfRef.core__DOT__exu__DOT__csrUnit__DOT__write_source)
                                      : ((3U == (IData)(vlSelfRef.core__DOT__exu__DOT__csrUnit__DOT____VdfgRegularize_hc5739c28_0_0))
                                          ? ((~ vlSelfRef.core__DOT__exu__DOT__csrUnit__DOT__write_source) 
                                             & vlSelfRef.core__DOT__exu__DOT____Vcellinp__csrUnit__io_csr_old_value)
                                          : ((0U == (IData)(vlSelfRef.core__DOT__exu__DOT__csrUnit__DOT____VdfgRegularize_hc5739c28_0_0))
                                              ? vlSelfRef.core__DOT__exu__DOT____Vcellinp__csrUnit__io_csr_old_value
                                              : 0U))))),32);
        bufp->chgBit(oldp+49,(((~ (((2U == (IData)(vlSelfRef.core__DOT__exu__DOT__csrUnit__DOT____VdfgRegularize_hc5739c28_0_0)) 
                                    | (3U == (IData)(vlSelfRef.core__DOT__exu__DOT__csrUnit__DOT____VdfgRegularize_hc5739c28_0_0))) 
                                   & (0U == vlSelfRef.core__DOT__exu__DOT__csrUnit__DOT__write_source))) 
                               & ((vlSelfRef.core__DOT__queue_1__DOT__ram[1U] 
                                   >> 3U) & (0U != 
                                             (7U & 
                                              (vlSelfRef.core__DOT__queue_1__DOT__ram[1U] 
                                               >> 4U)))))));
        bufp->chgIData(oldp+50,(vlSelfRef.core__DOT__exu__DOT__csrUnit__DOT__write_source),32);
        bufp->chgBit(oldp+51,((1U == (0xfU & (vlSelfRef.core__DOT__queue_1__DOT__ram[4U] 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+52,((1U & (~ (IData)(vlSelfRef.core__DOT__queue_1__DOT__full)))));
        bufp->chgBit(oldp+53,(vlSelfRef.core__DOT__queue__DOT__full));
        bufp->chgIData(oldp+54,(vlSelfRef.core__DOT___idu_io_out_bits_imm),32);
        bufp->chgCData(oldp+55,(vlSelfRef.core__DOT___idu_io_out_bits_alusel),3);
        bufp->chgBit(oldp+56,((0xffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_39))));
        bufp->chgCData(oldp+57,((((IData)((0U != (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_orMatrixOutputs_T_36))) 
                                  << 3U) | (((IData)(
                                                     (0xffU 
                                                      == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_47))) 
                                             << 1U) 
                                            | (0xffU 
                                               == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_39))))),4);
        bufp->chgCData(oldp+58,(vlSelfRef.core__DOT___idu_io_out_bits_opcode),5);
        bufp->chgIData(oldp+59,(((0U != (0x1fU & (IData)(
                                                         (vlSelfRef.core__DOT__queue__DOT__ram 
                                                          >> 0xfU))))
                                  ? vlSelfRef.core__DOT__rf__DOT__casez_tmp
                                  : 0U)),32);
        bufp->chgIData(oldp+60,(((0U != (0x1fU & (IData)(
                                                         (vlSelfRef.core__DOT__queue__DOT__ram 
                                                          >> 0x14U))))
                                  ? vlSelfRef.core__DOT__rf__DOT__casez_tmp_0
                                  : 0U)),32);
        bufp->chgBit(oldp+61,(vlSelfRef.core__DOT___idu_io_out_bits_rd_en));
        bufp->chgCData(oldp+62,((0x1fU & (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                                  >> 7U)))),5);
        bufp->chgIData(oldp+63,((IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                         >> 0x20U))),32);
        bufp->chgCData(oldp+64,(vlSelfRef.core__DOT___idu_io_out_bits_system),4);
        bufp->chgBit(oldp+65,(((0x3ffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_25)) 
                               | (0x7fU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_26)))));
        bufp->chgBit(oldp+66,(((0xffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_22)) 
                               | (0xffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_58)))));
        bufp->chgSData(oldp+67,((0xfffU & (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                                   >> 0x14U)))),12);
        bufp->chgCData(oldp+68,((((IData)(((3ULL == 
                                            (0x1fULL 
                                             & vlSelfRef.core__DOT__queue__DOT__ram)) 
                                           & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_79))) 
                                  << 1U) | (1U & (IData)(
                                                         ((3ULL 
                                                           == 
                                                           (0x1fULL 
                                                            & vlSelfRef.core__DOT__queue__DOT__ram)) 
                                                          & ((IData)(
                                                                     (0x1000ULL 
                                                                      == 
                                                                      (0x3060ULL 
                                                                       & vlSelfRef.core__DOT__queue__DOT__ram))) 
                                                             | ((~ (IData)(
                                                                           (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                            >> 6U))) 
                                                                & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_90)))))))),3);
        bufp->chgBit(oldp+69,(((0xffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_1)) 
                               | ((0xffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_4)) 
                                  | (IData)(((3ULL 
                                              == (0x1fULL 
                                                  & vlSelfRef.core__DOT__queue__DOT__ram)) 
                                             & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_94)))))));
        bufp->chgCData(oldp+70,((((IData)(((0x23ULL 
                                            == (0x3fULL 
                                                & vlSelfRef.core__DOT__queue__DOT__ram)) 
                                           & ((IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_87) 
                                              | (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_94)))) 
                                  << 1U) | ((0xffU 
                                             == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_1)) 
                                            | (IData)(
                                                      ((3ULL 
                                                        == 
                                                        (0x1fULL 
                                                         & vlSelfRef.core__DOT__queue__DOT__ram)) 
                                                       & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_88)))))),2);
        bufp->chgBit(oldp+71,((IData)(((3ULL == (0x7fULL 
                                                 & vlSelfRef.core__DOT__queue__DOT__ram)) 
                                       & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_80)))));
        bufp->chgIData(oldp+72,((IData)(vlSelfRef.core__DOT__queue__DOT__ram)),32);
        bufp->chgCData(oldp+73,((0x1fU & (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                                  >> 0xfU)))),5);
        bufp->chgCData(oldp+74,((0x1fU & (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                                  >> 0x14U)))),5);
        bufp->chgIData(oldp+75,((0x3fffffffU & (~ (IData)(
                                                          (vlSelfRef.core__DOT__queue__DOT__ram 
                                                           >> 2U))))),30);
        bufp->chgBit(oldp+76,((1U & (~ (IData)(vlSelfRef.core__DOT__if_sram__DOT__r_state)))));
        bufp->chgBit(oldp+77,((1U & ((~ (IData)(vlSelfRef.core__DOT__ifu__DOT__pc_en_posedge)) 
                                     & ((~ (IData)(vlSelfRef.core__DOT__ifu__DOT__state)) 
                                        & (~ (IData)(vlSelfRef.core__DOT__queue__DOT__full)))))));
        bufp->chgIData(oldp+78,(vlSelfRef.core__DOT__ifu__DOT__pc),32);
        bufp->chgBit(oldp+79,(((~ (IData)(vlSelfRef.core__DOT__queue__DOT__full)) 
                               & (IData)(vlSelfRef.core__DOT__ifu__DOT____VdfgRegularize_h572ee481_0_1))));
        bufp->chgBit(oldp+80,(vlSelfRef.core__DOT__if_sram__DOT__r_valid_reg));
        bufp->chgIData(oldp+81,(vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data),32);
        bufp->chgBit(oldp+82,((1U & (~ (IData)(vlSelfRef.core__DOT__if_sram__DOT__w_state)))));
        bufp->chgBit(oldp+83,(vlSelfRef.core__DOT__if_sram__DOT__b_valid_reg));
        bufp->chgBit(oldp+84,(vlSelfRef.core__DOT__if_sram__DOT__r_state));
        bufp->chgBit(oldp+85,(vlSelfRef.core__DOT__if_sram__DOT__write_backend_io_en_REG));
        bufp->chgBit(oldp+86,(vlSelfRef.core__DOT__if_sram__DOT__w_state));
        bufp->chgIData(oldp+87,(vlSelfRef.core__DOT__if_sram__DOT__write_backend_io_aw_addr_REG),32);
        bufp->chgIData(oldp+88,(vlSelfRef.core__DOT__if_sram__DOT__write_backend_io_w_data_REG),32);
        bufp->chgCData(oldp+89,(vlSelfRef.core__DOT__if_sram__DOT__write_backend_io_w_strb_REG),4);
        bufp->chgBit(oldp+90,(vlSelfRef.core__DOT__ifu__DOT___GEN_1));
        bufp->chgIData(oldp+91,(vlSelfRef.core__DOT__if_sram__DOT__read_backend__DOT__r_data_reg),32);
        bufp->chgBit(oldp+92,(vlSelfRef.core__DOT__if_sram__DOT___read_backend_done));
        bufp->chgIData(oldp+93,(vlSelfRef.core__DOT__if_sram__DOT__read_backend__DOT__r_data_comb),32);
        bufp->chgBit(oldp+94,(vlSelfRef.core__DOT__if_sram__DOT___write_backend_done));
        bufp->chgBit(oldp+95,((1U & (~ (IData)(vlSelfRef.core__DOT__queue__DOT__full)))));
        bufp->chgBit(oldp+96,(((IData)(vlSelfRef.core__DOT__ifu__DOT____VdfgRegularize_h572ee481_0_1) 
                               & (IData)(vlSelfRef.core__DOT__if_sram__DOT__r_valid_reg))));
        bufp->chgBit(oldp+97,(vlSelfRef.core__DOT__ifu__DOT__state));
        bufp->chgIData(oldp+98,(vlSelfRef.core__DOT__ifu__DOT__pc_reg),32);
        bufp->chgBit(oldp+99,(vlSelfRef.core__DOT__ifu__DOT__pc_en_delay));
        bufp->chgBit(oldp+100,(vlSelfRef.core__DOT__ifu__DOT__pc_en_posedge));
        bufp->chgBit(oldp+101,((1U & (~ (IData)(vlSelfRef.core__DOT__ls_sram__DOT__r_state)))));
        bufp->chgBit(oldp+102,(vlSelfRef.core__DOT__lsu__DOT__io_axi_ar_valid_0));
        bufp->chgIData(oldp+103,((((1U != (IData)(vlSelfRef.core__DOT__lsu__DOT__state)) 
                                   | (0U == (IData)(vlSelfRef.core__DOT__lsu__DOT__state)))
                                   ? 0U : vlSelfRef.core__DOT__lsu__DOT__e2l_reg_maddr)),32);
        bufp->chgBit(oldp+104,(((~ (IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_15)) 
                                & (2U == (IData)(vlSelfRef.core__DOT__lsu__DOT__state)))));
        bufp->chgBit(oldp+105,(vlSelfRef.core__DOT__ls_sram__DOT__r_valid_reg));
        bufp->chgIData(oldp+106,(vlSelfRef.core__DOT__ls_sram__DOT__r_bits_reg_data),32);
        bufp->chgBit(oldp+107,((1U & (~ (IData)(vlSelfRef.core__DOT__ls_sram__DOT__w_state)))));
        bufp->chgBit(oldp+108,(vlSelfRef.core__DOT__lsu__DOT__io_axi_w_valid_0));
        bufp->chgIData(oldp+109,(((IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_11)
                                   ? 0U : vlSelfRef.core__DOT__lsu__DOT__e2l_reg_maddr)),32);
        bufp->chgIData(oldp+110,(((IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_11)
                                   ? 0U : ((0U == (IData)(vlSelfRef.core__DOT__lsu__DOT__e2l_reg_mlen))
                                            ? ((0xffU 
                                                & vlSelfRef.core__DOT__lsu__DOT__e2l_reg_wdata) 
                                               << (0x18U 
                                                   & (vlSelfRef.core__DOT__lsu__DOT__e2l_reg_maddr 
                                                      << 3U)))
                                            : ((1U 
                                                == (IData)(vlSelfRef.core__DOT__lsu__DOT__e2l_reg_mlen))
                                                ? (
                                                   (2U 
                                                    & vlSelfRef.core__DOT__lsu__DOT__e2l_reg_maddr)
                                                    ? 
                                                   VL_SHIFTL_III(32,32,32, vlSelfRef.core__DOT__lsu__DOT__e2l_reg_wdata, 0x10U)
                                                    : 
                                                   (0xffffU 
                                                    & vlSelfRef.core__DOT__lsu__DOT__e2l_reg_wdata))
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelfRef.core__DOT__lsu__DOT__e2l_reg_mlen))
                                                    ? vlSelfRef.core__DOT__lsu__DOT__e2l_reg_wdata
                                                    : 0U))))),32);
        bufp->chgCData(oldp+111,(((IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_11)
                                   ? 0U : (0xfU & (
                                                   (0U 
                                                    == (IData)(vlSelfRef.core__DOT__lsu__DOT__e2l_reg_mlen))
                                                    ? 
                                                   ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & vlSelfRef.core__DOT__lsu__DOT__e2l_reg_maddr))
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.core__DOT__lsu__DOT__e2l_reg_mlen))
                                                     ? 
                                                    ((2U 
                                                      & vlSelfRef.core__DOT__lsu__DOT__e2l_reg_maddr)
                                                      ? 0xcU
                                                      : 3U)
                                                     : 
                                                    (- (IData)(
                                                               (2U 
                                                                == (IData)(vlSelfRef.core__DOT__lsu__DOT__e2l_reg_mlen))))))))),4);
        bufp->chgBit(oldp+112,(vlSelfRef.core__DOT___lsu_io_axi_b_ready));
        bufp->chgBit(oldp+113,(vlSelfRef.core__DOT__ls_sram__DOT__b_valid_reg));
        bufp->chgBit(oldp+114,(vlSelfRef.core__DOT__ls_sram__DOT__r_state));
        bufp->chgBit(oldp+115,(vlSelfRef.core__DOT__ls_sram__DOT__write_backend_io_en_REG));
        bufp->chgBit(oldp+116,(vlSelfRef.core__DOT__ls_sram__DOT__w_state));
        bufp->chgIData(oldp+117,(vlSelfRef.core__DOT__ls_sram__DOT__write_backend_io_aw_addr_REG),32);
        bufp->chgIData(oldp+118,(vlSelfRef.core__DOT__ls_sram__DOT__write_backend_io_w_data_REG),32);
        bufp->chgCData(oldp+119,(vlSelfRef.core__DOT__ls_sram__DOT__write_backend_io_w_strb_REG),4);
        bufp->chgBit(oldp+120,(vlSelfRef.core__DOT__ls_sram__DOT___read_backend_io_en_T));
        bufp->chgIData(oldp+121,(vlSelfRef.core__DOT__ls_sram__DOT__read_backend__DOT__r_data_reg),32);
        bufp->chgBit(oldp+122,(vlSelfRef.core__DOT__ls_sram__DOT___read_backend_done));
        bufp->chgIData(oldp+123,(vlSelfRef.core__DOT__ls_sram__DOT__read_backend__DOT__r_data_comb),32);
        bufp->chgBit(oldp+124,(vlSelfRef.core__DOT__ls_sram__DOT___write_backend_done));
        bufp->chgBit(oldp+125,(vlSelfRef.core__DOT___lsu_io_in_ready));
        bufp->chgBit(oldp+126,(vlSelfRef.core__DOT__queue_2__DOT__full));
        bufp->chgBit(oldp+127,((1U & vlSelfRef.core__DOT__queue_2__DOT__ram[0U])));
        bufp->chgCData(oldp+128,((0x1fU & (vlSelfRef.core__DOT__queue_2__DOT__ram[0U] 
                                           >> 1U))),5);
        bufp->chgIData(oldp+129,(((vlSelfRef.core__DOT__queue_2__DOT__ram[1U] 
                                   << 0x1aU) | (vlSelfRef.core__DOT__queue_2__DOT__ram[0U] 
                                                >> 6U))),32);
        bufp->chgBit(oldp+130,((1U & (vlSelfRef.core__DOT__queue_2__DOT__ram[1U] 
                                      >> 6U))));
        bufp->chgCData(oldp+131,((3U & (vlSelfRef.core__DOT__queue_2__DOT__ram[1U] 
                                        >> 7U))),2);
        bufp->chgCData(oldp+132,((7U & (vlSelfRef.core__DOT__queue_2__DOT__ram[1U] 
                                        >> 9U))),3);
        bufp->chgBit(oldp+133,((1U & (vlSelfRef.core__DOT__queue_2__DOT__ram[1U] 
                                      >> 0xcU))));
        bufp->chgIData(oldp+134,(((vlSelfRef.core__DOT__queue_2__DOT__ram[2U] 
                                   << 0x13U) | (vlSelfRef.core__DOT__queue_2__DOT__ram[1U] 
                                                >> 0xdU))),32);
        bufp->chgIData(oldp+135,(((vlSelfRef.core__DOT__queue_2__DOT__ram[3U] 
                                   << 0x13U) | (vlSelfRef.core__DOT__queue_2__DOT__ram[2U] 
                                                >> 0xdU))),32);
        bufp->chgBit(oldp+136,((1U & (~ (IData)(vlSelfRef.core__DOT__queue_3__DOT__full)))));
        bufp->chgBit(oldp+137,(((IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_15)
                                 ? (IData)(vlSelfRef.core__DOT__lsu__DOT___GEN)
                                 : ((2U == (IData)(vlSelfRef.core__DOT__lsu__DOT__state))
                                     ? ((IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_6) 
                                        | (IData)(vlSelfRef.core__DOT__lsu__DOT___GEN))
                                     : (((3U != (IData)(vlSelfRef.core__DOT__lsu__DOT__state)) 
                                         & (IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_14)) 
                                        | (IData)(vlSelfRef.core__DOT__lsu__DOT___GEN))))));
        bufp->chgBit(oldp+138,(((IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_15)
                                 ? (IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_0)
                                 : ((2U == (IData)(vlSelfRef.core__DOT__lsu__DOT__state))
                                     ? ((IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_6)
                                         ? (IData)(vlSelfRef.core__DOT__lsu__DOT__e2l_reg_rd_en)
                                         : (IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_0))
                                     : ((IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_16)
                                         ? (IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_0)
                                         : (IData)(vlSelfRef.core__DOT__lsu__DOT__e2l_reg_rd_en))))));
        bufp->chgCData(oldp+139,(((IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_15)
                                   ? (IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_1)
                                   : ((2U == (IData)(vlSelfRef.core__DOT__lsu__DOT__state))
                                       ? ((IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_6)
                                           ? (IData)(vlSelfRef.core__DOT__lsu__DOT__e2l_reg_rd_addr)
                                           : (IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_1))
                                       : ((IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_16)
                                           ? (IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_1)
                                           : (IData)(vlSelfRef.core__DOT__lsu__DOT__e2l_reg_rd_addr))))),5);
        bufp->chgIData(oldp+140,(((IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_15)
                                   ? vlSelfRef.core__DOT__lsu__DOT___GEN_2
                                   : ((2U == (IData)(vlSelfRef.core__DOT__lsu__DOT__state))
                                       ? ((IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_6)
                                           ? ((0U == (IData)(vlSelfRef.core__DOT__lsu__DOT__e2l_reg_mlen))
                                               ? ((
                                                   (- (IData)(
                                                              (1U 
                                                               & (~ 
                                                                  (vlSelfRef.core__DOT__queue_2__DOT__ram[1U] 
                                                                   >> 0xcU))))) 
                                                   << 8U) 
                                                  | (0xffU 
                                                     & (vlSelfRef.core__DOT__ls_sram__DOT__r_bits_reg_data 
                                                        >> 
                                                        (0x18U 
                                                         & (vlSelfRef.core__DOT__lsu__DOT__e2l_reg_maddr 
                                                            << 3U)))))
                                               : ((1U 
                                                   == (IData)(vlSelfRef.core__DOT__lsu__DOT__e2l_reg_mlen))
                                                   ? 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (~ 
                                                                   (vlSelfRef.core__DOT__queue_2__DOT__ram[1U] 
                                                                    >> 0xcU))))) 
                                                    << 0x10U) 
                                                   | (0xffffU 
                                                      & ((2U 
                                                          & vlSelfRef.core__DOT__lsu__DOT__e2l_reg_maddr)
                                                          ? 
                                                         (vlSelfRef.core__DOT__ls_sram__DOT__r_bits_reg_data 
                                                          >> 0x10U)
                                                          : vlSelfRef.core__DOT__ls_sram__DOT__r_bits_reg_data)))
                                                   : vlSelfRef.core__DOT__ls_sram__DOT__r_bits_reg_data))
                                           : vlSelfRef.core__DOT__lsu__DOT___GEN_2)
                                       : ((IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_16)
                                           ? vlSelfRef.core__DOT__lsu__DOT___GEN_2
                                           : vlSelfRef.core__DOT__lsu__DOT__e2l_reg_rd_data)))),32);
        bufp->chgBit(oldp+141,(vlSelfRef.core__DOT__lsu__DOT__isPassthrough));
        bufp->chgCData(oldp+142,(vlSelfRef.core__DOT__lsu__DOT__state),3);
        bufp->chgBit(oldp+143,(vlSelfRef.core__DOT__lsu__DOT__e2l_reg_rd_en));
        bufp->chgCData(oldp+144,(vlSelfRef.core__DOT__lsu__DOT__e2l_reg_rd_addr),5);
        bufp->chgIData(oldp+145,(vlSelfRef.core__DOT__lsu__DOT__e2l_reg_rd_data),32);
        bufp->chgCData(oldp+146,(vlSelfRef.core__DOT__lsu__DOT__e2l_reg_mlen),3);
        bufp->chgIData(oldp+147,(vlSelfRef.core__DOT__lsu__DOT__e2l_reg_wdata),32);
        bufp->chgIData(oldp+148,(vlSelfRef.core__DOT__lsu__DOT__e2l_reg_maddr),32);
        bufp->chgQData(oldp+149,(vlSelfRef.core__DOT__queue__DOT__ram),64);
        bufp->chgBit(oldp+151,(vlSelfRef.core__DOT__queue__DOT__do_enq));
        bufp->chgWData(oldp+152,(vlSelfRef.core__DOT__queue_1__DOT__ram),172);
        bufp->chgBit(oldp+158,(vlSelfRef.core__DOT__queue_1__DOT__do_enq));
        bufp->chgWData(oldp+159,(vlSelfRef.core__DOT__queue_2__DOT__ram),109);
        bufp->chgBit(oldp+163,(vlSelfRef.core__DOT__queue_2__DOT__do_enq));
        bufp->chgBit(oldp+164,(vlSelfRef.core__DOT__queue_3__DOT__full));
        bufp->chgBit(oldp+165,((1U & (IData)(vlSelfRef.core__DOT__queue_3__DOT__ram))));
        bufp->chgCData(oldp+166,((0x1fU & (IData)((vlSelfRef.core__DOT__queue_3__DOT__ram 
                                                   >> 1U)))),5);
        bufp->chgIData(oldp+167,((IData)((vlSelfRef.core__DOT__queue_3__DOT__ram 
                                          >> 6U))),32);
        bufp->chgBit(oldp+168,((1U & (IData)((vlSelfRef.core__DOT__queue_3__DOT__ram 
                                              >> 0x26U)))));
        bufp->chgQData(oldp+169,(vlSelfRef.core__DOT__queue_3__DOT__ram),39);
        bufp->chgBit(oldp+171,(vlSelfRef.core__DOT__queue_3__DOT__do_enq));
        bufp->chgIData(oldp+172,(vlSelfRef.core__DOT__rf__DOT__rf_0),32);
        bufp->chgIData(oldp+173,(vlSelfRef.core__DOT__rf__DOT__rf_1),32);
        bufp->chgIData(oldp+174,(vlSelfRef.core__DOT__rf__DOT__rf_2),32);
        bufp->chgIData(oldp+175,(vlSelfRef.core__DOT__rf__DOT__rf_3),32);
        bufp->chgIData(oldp+176,(vlSelfRef.core__DOT__rf__DOT__rf_4),32);
        bufp->chgIData(oldp+177,(vlSelfRef.core__DOT__rf__DOT__rf_5),32);
        bufp->chgIData(oldp+178,(vlSelfRef.core__DOT__rf__DOT__rf_6),32);
        bufp->chgIData(oldp+179,(vlSelfRef.core__DOT__rf__DOT__rf_7),32);
        bufp->chgIData(oldp+180,(vlSelfRef.core__DOT__rf__DOT__rf_8),32);
        bufp->chgIData(oldp+181,(vlSelfRef.core__DOT__rf__DOT__rf_9),32);
        bufp->chgIData(oldp+182,(vlSelfRef.core__DOT__rf__DOT__rf_10),32);
        bufp->chgIData(oldp+183,(vlSelfRef.core__DOT__rf__DOT__rf_11),32);
        bufp->chgIData(oldp+184,(vlSelfRef.core__DOT__rf__DOT__rf_12),32);
        bufp->chgIData(oldp+185,(vlSelfRef.core__DOT__rf__DOT__rf_13),32);
        bufp->chgIData(oldp+186,(vlSelfRef.core__DOT__rf__DOT__rf_14),32);
        bufp->chgIData(oldp+187,(vlSelfRef.core__DOT__rf__DOT__rf_15),32);
        bufp->chgIData(oldp+188,(vlSelfRef.core__DOT__rf__DOT__rf_16),32);
        bufp->chgIData(oldp+189,(vlSelfRef.core__DOT__rf__DOT__rf_17),32);
        bufp->chgIData(oldp+190,(vlSelfRef.core__DOT__rf__DOT__rf_18),32);
        bufp->chgIData(oldp+191,(vlSelfRef.core__DOT__rf__DOT__rf_19),32);
        bufp->chgIData(oldp+192,(vlSelfRef.core__DOT__rf__DOT__rf_20),32);
        bufp->chgIData(oldp+193,(vlSelfRef.core__DOT__rf__DOT__rf_21),32);
        bufp->chgIData(oldp+194,(vlSelfRef.core__DOT__rf__DOT__rf_22),32);
        bufp->chgIData(oldp+195,(vlSelfRef.core__DOT__rf__DOT__rf_23),32);
        bufp->chgIData(oldp+196,(vlSelfRef.core__DOT__rf__DOT__rf_24),32);
        bufp->chgIData(oldp+197,(vlSelfRef.core__DOT__rf__DOT__rf_25),32);
        bufp->chgIData(oldp+198,(vlSelfRef.core__DOT__rf__DOT__rf_26),32);
        bufp->chgIData(oldp+199,(vlSelfRef.core__DOT__rf__DOT__rf_27),32);
        bufp->chgIData(oldp+200,(vlSelfRef.core__DOT__rf__DOT__rf_28),32);
        bufp->chgIData(oldp+201,(vlSelfRef.core__DOT__rf__DOT__rf_29),32);
        bufp->chgIData(oldp+202,(vlSelfRef.core__DOT__rf__DOT__rf_30),32);
        bufp->chgIData(oldp+203,(vlSelfRef.core__DOT__rf__DOT__rf_31),32);
        bufp->chgIData(oldp+204,(vlSelfRef.core__DOT__rf__DOT__casez_tmp),32);
        bufp->chgIData(oldp+205,(vlSelfRef.core__DOT__rf__DOT__casez_tmp_0),32);
        bufp->chgBit(oldp+206,(vlSelfRef.core__DOT__wbu__DOT__io_w2f_inst_done_REG));
    }
    bufp->chgBit(oldp+207,(vlSelfRef.clock));
    bufp->chgBit(oldp+208,(vlSelfRef.reset));
    bufp->chgIData(oldp+209,(vlSelfRef.io_debugPC),32);
    bufp->chgIData(oldp+210,(vlSelfRef.io_debugInst),32);
    bufp->chgBit(oldp+211,(vlSelfRef.io_inst_done));
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
