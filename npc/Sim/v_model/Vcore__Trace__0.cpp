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
        bufp->chgIData(oldp+5,(((IData)(vlSelfRef.core__DOT__exu__DOT___GEN_3)
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
        bufp->chgBit(oldp+11,((1U & (~ (IData)(vlSelfRef.core__DOT__queue_2__DOT__full)))));
        bufp->chgBit(oldp+12,(vlSelfRef.core__DOT__queue_1__DOT__full));
        bufp->chgIData(oldp+13,(vlSelfRef.core__DOT__queue_1__DOT__ram[0U]),32);
        bufp->chgCData(oldp+14,((7U & vlSelfRef.core__DOT__queue_1__DOT__ram[1U])),3);
        bufp->chgBit(oldp+15,((1U & (vlSelfRef.core__DOT__queue_1__DOT__ram[1U] 
                                     >> 3U))));
        bufp->chgCData(oldp+16,((0xfU & (vlSelfRef.core__DOT__queue_1__DOT__ram[1U] 
                                         >> 4U))),4);
        bufp->chgCData(oldp+17,((0x1fU & (vlSelfRef.core__DOT__queue_1__DOT__ram[1U] 
                                          >> 8U))),5);
        bufp->chgIData(oldp+18,(((vlSelfRef.core__DOT__queue_1__DOT__ram[2U] 
                                  << 0x13U) | (vlSelfRef.core__DOT__queue_1__DOT__ram[1U] 
                                               >> 0xdU))),32);
        bufp->chgIData(oldp+19,(((vlSelfRef.core__DOT__queue_1__DOT__ram[3U] 
                                  << 0x13U) | (vlSelfRef.core__DOT__queue_1__DOT__ram[2U] 
                                               >> 0xdU))),32);
        bufp->chgBit(oldp+20,((1U & (vlSelfRef.core__DOT__queue_1__DOT__ram[3U] 
                                     >> 0xdU))));
        bufp->chgCData(oldp+21,((0x1fU & (vlSelfRef.core__DOT__queue_1__DOT__ram[3U] 
                                          >> 0xeU))),5);
        bufp->chgIData(oldp+22,(((vlSelfRef.core__DOT__queue_1__DOT__ram[4U] 
                                  << 0xdU) | (vlSelfRef.core__DOT__queue_1__DOT__ram[3U] 
                                              >> 0x13U))),32);
        bufp->chgCData(oldp+23,((0xfU & (vlSelfRef.core__DOT__queue_1__DOT__ram[4U] 
                                         >> 0x13U))),4);
        bufp->chgBit(oldp+24,((1U & (vlSelfRef.core__DOT__queue_1__DOT__ram[4U] 
                                     >> 0x17U))));
        bufp->chgBit(oldp+25,((1U & (vlSelfRef.core__DOT__queue_1__DOT__ram[4U] 
                                     >> 0x18U))));
        bufp->chgSData(oldp+26,((0xfffU & ((vlSelfRef.core__DOT__queue_1__DOT__ram[5U] 
                                            << 7U) 
                                           | (vlSelfRef.core__DOT__queue_1__DOT__ram[4U] 
                                              >> 0x19U)))),12);
        bufp->chgCData(oldp+27,((7U & (vlSelfRef.core__DOT__queue_1__DOT__ram[5U] 
                                       >> 5U))),3);
        bufp->chgBit(oldp+28,((1U & (vlSelfRef.core__DOT__queue_1__DOT__ram[5U] 
                                     >> 8U))));
        bufp->chgCData(oldp+29,((3U & (vlSelfRef.core__DOT__queue_1__DOT__ram[5U] 
                                       >> 9U))),2);
        bufp->chgBit(oldp+30,((1U & (vlSelfRef.core__DOT__queue_1__DOT__ram[5U] 
                                     >> 0xbU))));
        bufp->chgBit(oldp+31,(vlSelfRef.core__DOT___exu_io_pcCtrl_pc_en));
        bufp->chgIData(oldp+32,(((IData)(vlSelfRef.core__DOT__exu__DOT___GEN_3)
                                  ? ((0x800000U & vlSelfRef.core__DOT__queue_1__DOT__ram[4U])
                                      ? vlSelfRef.core__DOT__exu__DOT__alu__DOT__casez_tmp
                                      : ((IData)(vlSelfRef.core__DOT__exu__DOT___GEN_0)
                                          ? (vlSelfRef.core__DOT__queue_1__DOT__ram[0U] 
                                             + ((vlSelfRef.core__DOT__queue_1__DOT__ram[4U] 
                                                 << 0xdU) 
                                                | (vlSelfRef.core__DOT__queue_1__DOT__ram[3U] 
                                                   >> 0x13U)))
                                          : 0U)) : vlSelfRef.core__DOT___csr_io_r_data)),32);
        bufp->chgIData(oldp+33,(((0x800000U & vlSelfRef.core__DOT__queue_1__DOT__ram[4U])
                                  ? ((IData)(4U) + 
                                     ((vlSelfRef.core__DOT__queue_1__DOT__ram[4U] 
                                       << 0xdU) | (
                                                   vlSelfRef.core__DOT__queue_1__DOT__ram[3U] 
                                                   >> 0x13U)))
                                  : vlSelfRef.core__DOT__exu__DOT__alu__DOT__casez_tmp)),32);
        bufp->chgIData(oldp+34,(vlSelfRef.core__DOT__exu__DOT__alu__DOT__casez_tmp),32);
        bufp->chgIData(oldp+35,(vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in1),32);
        bufp->chgIData(oldp+36,(vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in2),32);
        bufp->chgQData(oldp+37,((0x7fffffffffffffffULL 
                                 & ((QData)((IData)(vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in1)) 
                                    << (0x1fU & vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in2)))),63);
        bufp->chgCData(oldp+39,(((8U & vlSelfRef.core__DOT__queue_1__DOT__ram[1U])
                                  ? (0xfU & (vlSelfRef.core__DOT__queue_1__DOT__ram[1U] 
                                             >> 4U))
                                  : 0U)),4);
        bufp->chgIData(oldp+40,(((8U & vlSelfRef.core__DOT__queue_1__DOT__ram[1U])
                                  ? ((vlSelfRef.core__DOT__queue_1__DOT__ram[2U] 
                                      << 0x13U) | (
                                                   vlSelfRef.core__DOT__queue_1__DOT__ram[1U] 
                                                   >> 0xdU))
                                  : 0U)),32);
        bufp->chgIData(oldp+41,(((8U & vlSelfRef.core__DOT__queue_1__DOT__ram[1U])
                                  ? vlSelfRef.core__DOT__queue_1__DOT__ram[0U]
                                  : 0U)),32);
        bufp->chgIData(oldp+42,(vlSelfRef.core__DOT__exu__DOT____Vcellinp__csrUnit__io_csr_old_value),32);
        bufp->chgIData(oldp+43,(((1U == (IData)(vlSelfRef.core__DOT__exu__DOT__csrUnit__DOT____VdfgRegularize_hc5739c28_0_0))
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
        bufp->chgBit(oldp+44,(((~ (((2U == (IData)(vlSelfRef.core__DOT__exu__DOT__csrUnit__DOT____VdfgRegularize_hc5739c28_0_0)) 
                                    | (3U == (IData)(vlSelfRef.core__DOT__exu__DOT__csrUnit__DOT____VdfgRegularize_hc5739c28_0_0))) 
                                   & (0U == vlSelfRef.core__DOT__exu__DOT__csrUnit__DOT__write_source))) 
                               & ((vlSelfRef.core__DOT__queue_1__DOT__ram[1U] 
                                   >> 3U) & (0U != 
                                             (7U & 
                                              (vlSelfRef.core__DOT__queue_1__DOT__ram[1U] 
                                               >> 4U)))))));
        bufp->chgIData(oldp+45,(vlSelfRef.core__DOT__exu__DOT__csrUnit__DOT__write_source),32);
        bufp->chgBit(oldp+46,((1U & (~ (IData)(vlSelfRef.core__DOT__queue_1__DOT__full)))));
        bufp->chgBit(oldp+47,(vlSelfRef.core__DOT__queue__DOT__full));
        bufp->chgIData(oldp+48,(vlSelfRef.core__DOT___idu_io_out_bits_imm),32);
        bufp->chgCData(oldp+49,(vlSelfRef.core__DOT___idu_io_out_bits_alusel),3);
        bufp->chgBit(oldp+50,((0xffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_39))));
        bufp->chgCData(oldp+51,((((IData)((0U != (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_orMatrixOutputs_T_36))) 
                                  << 3U) | (((IData)(
                                                     (0xffU 
                                                      == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_47))) 
                                             << 1U) 
                                            | (0xffU 
                                               == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_39))))),4);
        bufp->chgCData(oldp+52,(vlSelfRef.core__DOT___idu_io_out_bits_opcode),5);
        bufp->chgIData(oldp+53,(((0U != (0x1fU & (IData)(
                                                         (vlSelfRef.core__DOT__queue__DOT__ram 
                                                          >> 0xfU))))
                                  ? vlSelfRef.core__DOT__rf__DOT__casez_tmp
                                  : 0U)),32);
        bufp->chgIData(oldp+54,(((0U != (0x1fU & (IData)(
                                                         (vlSelfRef.core__DOT__queue__DOT__ram 
                                                          >> 0x14U))))
                                  ? vlSelfRef.core__DOT__rf__DOT__casez_tmp_0
                                  : 0U)),32);
        bufp->chgBit(oldp+55,(vlSelfRef.core__DOT___idu_io_out_bits_rd_en));
        bufp->chgCData(oldp+56,((0x1fU & (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                                  >> 7U)))),5);
        bufp->chgIData(oldp+57,((IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                         >> 0x20U))),32);
        bufp->chgCData(oldp+58,(vlSelfRef.core__DOT___idu_io_out_bits_system),4);
        bufp->chgBit(oldp+59,(((0x3ffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_25)) 
                               | (0x7fU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_26)))));
        bufp->chgBit(oldp+60,(((0xffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_22)) 
                               | (0xffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_58)))));
        bufp->chgSData(oldp+61,((0xfffU & (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                                   >> 0x14U)))),12);
        bufp->chgCData(oldp+62,((((IData)(((3ULL == 
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
        bufp->chgBit(oldp+63,(((0xffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_1)) 
                               | ((0xffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_4)) 
                                  | (IData)(((3ULL 
                                              == (0x1fULL 
                                                  & vlSelfRef.core__DOT__queue__DOT__ram)) 
                                             & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_94)))))));
        bufp->chgCData(oldp+64,((((IData)(((0x23ULL 
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
        bufp->chgBit(oldp+65,((IData)(((3ULL == (0x7fULL 
                                                 & vlSelfRef.core__DOT__queue__DOT__ram)) 
                                       & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_80)))));
        bufp->chgIData(oldp+66,((IData)(vlSelfRef.core__DOT__queue__DOT__ram)),32);
        bufp->chgCData(oldp+67,((0x1fU & (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                                  >> 0xfU)))),5);
        bufp->chgCData(oldp+68,((0x1fU & (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                                  >> 0x14U)))),5);
        bufp->chgIData(oldp+69,((0x3fffffffU & (~ (IData)(
                                                          (vlSelfRef.core__DOT__queue__DOT__ram 
                                                           >> 2U))))),30);
        bufp->chgBit(oldp+70,((1U & (~ (IData)(vlSelfRef.core__DOT__if_sram__DOT__r_state)))));
        bufp->chgBit(oldp+71,(vlSelfRef.core__DOT__ifu__DOT__io_axi_ar_valid_0));
        bufp->chgIData(oldp+72,(vlSelfRef.core__DOT__ifu__DOT__pc),32);
        bufp->chgBit(oldp+73,(((~ (IData)(vlSelfRef.core__DOT__ifu__DOT___GEN_2)) 
                               & (2U == (IData)(vlSelfRef.core__DOT__ifu__DOT__state)))));
        bufp->chgBit(oldp+74,(vlSelfRef.core__DOT__if_sram__DOT__r_valid_reg));
        bufp->chgIData(oldp+75,(vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data),32);
        bufp->chgBit(oldp+76,((1U & (~ (IData)(vlSelfRef.core__DOT__if_sram__DOT__w_state)))));
        bufp->chgBit(oldp+77,(vlSelfRef.core__DOT__if_sram__DOT__b_valid_reg));
        bufp->chgBit(oldp+78,(vlSelfRef.core__DOT__if_sram__DOT__r_state));
        bufp->chgBit(oldp+79,(vlSelfRef.core__DOT__if_sram__DOT__write_backend_io_en_REG));
        bufp->chgBit(oldp+80,(vlSelfRef.core__DOT__if_sram__DOT__w_state));
        bufp->chgIData(oldp+81,(vlSelfRef.core__DOT__if_sram__DOT__write_backend_io_aw_addr_REG),32);
        bufp->chgIData(oldp+82,(vlSelfRef.core__DOT__if_sram__DOT__write_backend_io_w_data_REG),32);
        bufp->chgCData(oldp+83,(vlSelfRef.core__DOT__if_sram__DOT__write_backend_io_w_strb_REG),4);
        bufp->chgBit(oldp+84,(vlSelfRef.core__DOT__if_sram__DOT___read_backend_io_en_T));
        bufp->chgIData(oldp+85,(vlSelfRef.core__DOT__if_sram__DOT__read_backend__DOT__r_data_reg),32);
        bufp->chgBit(oldp+86,(vlSelfRef.core__DOT__if_sram__DOT___read_backend_done));
        bufp->chgIData(oldp+87,(vlSelfRef.core__DOT__if_sram__DOT__read_backend__DOT__r_data_comb),32);
        bufp->chgBit(oldp+88,(vlSelfRef.core__DOT__if_sram__DOT___write_backend_done));
        bufp->chgBit(oldp+89,((1U & (~ (IData)(vlSelfRef.core__DOT__queue__DOT__full)))));
        bufp->chgBit(oldp+90,(vlSelfRef.core__DOT__ifu__DOT__inst_buf_valid));
        bufp->chgIData(oldp+91,(vlSelfRef.core__DOT__ifu__DOT__inst_buf_bits_inst),32);
        bufp->chgIData(oldp+92,(vlSelfRef.core__DOT__ifu__DOT__inst_buf_bits_pc),32);
        bufp->chgCData(oldp+93,(vlSelfRef.core__DOT__ifu__DOT__state),2);
        bufp->chgBit(oldp+94,((1U & (~ (IData)(vlSelfRef.core__DOT__ls_sram__DOT__r_state)))));
        bufp->chgBit(oldp+95,(vlSelfRef.core__DOT__lsu__DOT__io_axi_ar_valid_0));
        bufp->chgIData(oldp+96,((((1U != (IData)(vlSelfRef.core__DOT__lsu__DOT__state)) 
                                  | (0U == (IData)(vlSelfRef.core__DOT__lsu__DOT__state)))
                                  ? 0U : vlSelfRef.core__DOT__lsu__DOT__e2l_reg_maddr)),32);
        bufp->chgBit(oldp+97,(((~ (IData)(vlSelfRef.core__DOT__lsu__DOT____VdfgRegularize_hbcd0008a_0_0)) 
                               & (2U == (IData)(vlSelfRef.core__DOT__lsu__DOT__state)))));
        bufp->chgBit(oldp+98,(vlSelfRef.core__DOT__ls_sram__DOT__r_valid_reg));
        bufp->chgIData(oldp+99,(vlSelfRef.core__DOT__ls_sram__DOT__r_bits_reg_data),32);
        bufp->chgBit(oldp+100,((1U & (~ (IData)(vlSelfRef.core__DOT__ls_sram__DOT__w_state)))));
        bufp->chgBit(oldp+101,(vlSelfRef.core__DOT__lsu__DOT__io_axi_w_valid_0));
        bufp->chgIData(oldp+102,(((IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_7)
                                   ? 0U : vlSelfRef.core__DOT__lsu__DOT__e2l_reg_maddr)),32);
        bufp->chgIData(oldp+103,(((IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_7)
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
        bufp->chgCData(oldp+104,(((IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_7)
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
        bufp->chgBit(oldp+105,(vlSelfRef.core__DOT___lsu_io_axi_b_ready));
        bufp->chgBit(oldp+106,(vlSelfRef.core__DOT__ls_sram__DOT__b_valid_reg));
        bufp->chgBit(oldp+107,(vlSelfRef.core__DOT__ls_sram__DOT__r_state));
        bufp->chgBit(oldp+108,(vlSelfRef.core__DOT__ls_sram__DOT__write_backend_io_en_REG));
        bufp->chgBit(oldp+109,(vlSelfRef.core__DOT__ls_sram__DOT__w_state));
        bufp->chgIData(oldp+110,(vlSelfRef.core__DOT__ls_sram__DOT__write_backend_io_aw_addr_REG),32);
        bufp->chgIData(oldp+111,(vlSelfRef.core__DOT__ls_sram__DOT__write_backend_io_w_data_REG),32);
        bufp->chgCData(oldp+112,(vlSelfRef.core__DOT__ls_sram__DOT__write_backend_io_w_strb_REG),4);
        bufp->chgBit(oldp+113,(vlSelfRef.core__DOT__ls_sram__DOT___read_backend_io_en_T));
        bufp->chgIData(oldp+114,(vlSelfRef.core__DOT__ls_sram__DOT__read_backend__DOT__r_data_reg),32);
        bufp->chgBit(oldp+115,(vlSelfRef.core__DOT__ls_sram__DOT___read_backend_done));
        bufp->chgIData(oldp+116,(vlSelfRef.core__DOT__ls_sram__DOT__read_backend__DOT__r_data_comb),32);
        bufp->chgBit(oldp+117,(vlSelfRef.core__DOT__ls_sram__DOT___write_backend_done));
        bufp->chgBit(oldp+118,(vlSelfRef.core__DOT___lsu_io_in_ready));
        bufp->chgBit(oldp+119,(vlSelfRef.core__DOT__queue_2__DOT__full));
        bufp->chgBit(oldp+120,((1U & vlSelfRef.core__DOT__queue_2__DOT__ram[0U])));
        bufp->chgCData(oldp+121,((0x1fU & (vlSelfRef.core__DOT__queue_2__DOT__ram[0U] 
                                           >> 1U))),5);
        bufp->chgIData(oldp+122,(((vlSelfRef.core__DOT__queue_2__DOT__ram[1U] 
                                   << 0x1aU) | (vlSelfRef.core__DOT__queue_2__DOT__ram[0U] 
                                                >> 6U))),32);
        bufp->chgBit(oldp+123,((1U & (vlSelfRef.core__DOT__queue_2__DOT__ram[1U] 
                                      >> 6U))));
        bufp->chgCData(oldp+124,((3U & (vlSelfRef.core__DOT__queue_2__DOT__ram[1U] 
                                        >> 7U))),2);
        bufp->chgCData(oldp+125,((7U & (vlSelfRef.core__DOT__queue_2__DOT__ram[1U] 
                                        >> 9U))),3);
        bufp->chgBit(oldp+126,((1U & (vlSelfRef.core__DOT__queue_2__DOT__ram[1U] 
                                      >> 0xcU))));
        bufp->chgIData(oldp+127,(((vlSelfRef.core__DOT__queue_2__DOT__ram[2U] 
                                   << 0x13U) | (vlSelfRef.core__DOT__queue_2__DOT__ram[1U] 
                                                >> 0xdU))),32);
        bufp->chgIData(oldp+128,(((vlSelfRef.core__DOT__queue_2__DOT__ram[3U] 
                                   << 0x13U) | (vlSelfRef.core__DOT__queue_2__DOT__ram[2U] 
                                                >> 0xdU))),32);
        bufp->chgBit(oldp+129,((1U & (~ (IData)(vlSelfRef.core__DOT__queue_3__DOT__full)))));
        bufp->chgBit(oldp+130,(((0U == (IData)(vlSelfRef.core__DOT__lsu__DOT__state))
                                 ? ((IData)(vlSelfRef.core__DOT__lsu__DOT__isPassthrough) 
                                    & (IData)(vlSelfRef.core__DOT__queue_2__DOT__full))
                                 : ((1U != (IData)(vlSelfRef.core__DOT__lsu__DOT__state)) 
                                    & ((2U == (IData)(vlSelfRef.core__DOT__lsu__DOT__state))
                                        ? (IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_2)
                                        : ((3U != (IData)(vlSelfRef.core__DOT__lsu__DOT__state)) 
                                           & (IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_11)))))));
        bufp->chgBit(oldp+131,(((0U == (IData)(vlSelfRef.core__DOT__lsu__DOT__state))
                                 ? ((IData)(vlSelfRef.core__DOT__lsu__DOT__isPassthrough) 
                                    & vlSelfRef.core__DOT__queue_2__DOT__ram[0U])
                                 : ((1U != (IData)(vlSelfRef.core__DOT__lsu__DOT__state)) 
                                    & ((2U == (IData)(vlSelfRef.core__DOT__lsu__DOT__state))
                                        ? ((IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_2) 
                                           & (IData)(vlSelfRef.core__DOT__lsu__DOT__e2l_reg_rd_en))
                                        : ((3U != (IData)(vlSelfRef.core__DOT__lsu__DOT__state)) 
                                           & ((IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_11) 
                                              & (IData)(vlSelfRef.core__DOT__lsu__DOT__e2l_reg_rd_en))))))));
        bufp->chgCData(oldp+132,((0x1fU & ((0U == (IData)(vlSelfRef.core__DOT__lsu__DOT__state))
                                            ? ((IData)(vlSelfRef.core__DOT__lsu__DOT__isPassthrough)
                                                ? (
                                                   (vlSelfRef.core__DOT__queue_2__DOT__ram[0U] 
                                                    << 0x1fU) 
                                                   | (vlSelfRef.core__DOT__queue_2__DOT__ram[0U] 
                                                      >> 1U))
                                                : 0U)
                                            : ((1U 
                                                == (IData)(vlSelfRef.core__DOT__lsu__DOT__state))
                                                ? 0U
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelfRef.core__DOT__lsu__DOT__state))
                                                    ? 
                                                   ((IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_2)
                                                     ? (IData)(vlSelfRef.core__DOT__lsu__DOT__e2l_reg_rd_addr)
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_12)
                                                     ? 0U
                                                     : (IData)(vlSelfRef.core__DOT__lsu__DOT__e2l_reg_rd_addr))))))),5);
        bufp->chgIData(oldp+133,(((0U == (IData)(vlSelfRef.core__DOT__lsu__DOT__state))
                                   ? ((IData)(vlSelfRef.core__DOT__lsu__DOT__isPassthrough)
                                       ? ((vlSelfRef.core__DOT__queue_2__DOT__ram[1U] 
                                           << 0x1aU) 
                                          | (vlSelfRef.core__DOT__queue_2__DOT__ram[0U] 
                                             >> 6U))
                                       : 0U) : ((1U 
                                                 == (IData)(vlSelfRef.core__DOT__lsu__DOT__state))
                                                 ? 0U
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.core__DOT__lsu__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_2)
                                                   ? 
                                                  ((0U 
                                                    == (IData)(vlSelfRef.core__DOT__lsu__DOT__e2l_reg_mlen))
                                                    ? 
                                                   (((- (IData)(
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
                                                    : 
                                                   ((1U 
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
                                                   : 0U)
                                                  : 
                                                 ((IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_12)
                                                   ? 0U
                                                   : vlSelfRef.core__DOT__lsu__DOT__e2l_reg_rd_data))))),32);
        bufp->chgBit(oldp+134,(vlSelfRef.core__DOT__lsu__DOT__isPassthrough));
        bufp->chgCData(oldp+135,(vlSelfRef.core__DOT__lsu__DOT__state),3);
        bufp->chgBit(oldp+136,(vlSelfRef.core__DOT__lsu__DOT__e2l_reg_rd_en));
        bufp->chgCData(oldp+137,(vlSelfRef.core__DOT__lsu__DOT__e2l_reg_rd_addr),5);
        bufp->chgIData(oldp+138,(vlSelfRef.core__DOT__lsu__DOT__e2l_reg_rd_data),32);
        bufp->chgCData(oldp+139,(vlSelfRef.core__DOT__lsu__DOT__e2l_reg_mlen),3);
        bufp->chgIData(oldp+140,(vlSelfRef.core__DOT__lsu__DOT__e2l_reg_wdata),32);
        bufp->chgIData(oldp+141,(vlSelfRef.core__DOT__lsu__DOT__e2l_reg_maddr),32);
        bufp->chgQData(oldp+142,(vlSelfRef.core__DOT__queue__DOT__ram),64);
        bufp->chgBit(oldp+144,(vlSelfRef.core__DOT__queue__DOT__do_enq));
        bufp->chgWData(oldp+145,(vlSelfRef.core__DOT__queue_1__DOT__ram),172);
        bufp->chgBit(oldp+151,(vlSelfRef.core__DOT__queue_1__DOT__do_enq));
        bufp->chgWData(oldp+152,(vlSelfRef.core__DOT__queue_2__DOT__ram),109);
        bufp->chgBit(oldp+156,(vlSelfRef.core__DOT__queue_2__DOT__do_enq));
        bufp->chgBit(oldp+157,(vlSelfRef.core__DOT__queue_3__DOT__full));
        bufp->chgCData(oldp+158,((0x1fU & (IData)((vlSelfRef.core__DOT__queue_3__DOT__ram 
                                                   >> 1U)))),5);
        bufp->chgIData(oldp+159,((IData)((vlSelfRef.core__DOT__queue_3__DOT__ram 
                                          >> 6U))),32);
        bufp->chgBit(oldp+160,((1U & (IData)((vlSelfRef.core__DOT__queue_3__DOT__ram 
                                              >> 0x26U)))));
        bufp->chgQData(oldp+161,(vlSelfRef.core__DOT__queue_3__DOT__ram),39);
        bufp->chgBit(oldp+163,(vlSelfRef.core__DOT__queue_3__DOT__do_enq));
        bufp->chgIData(oldp+164,(vlSelfRef.core__DOT__rf__DOT__rf_0),32);
        bufp->chgIData(oldp+165,(vlSelfRef.core__DOT__rf__DOT__rf_1),32);
        bufp->chgIData(oldp+166,(vlSelfRef.core__DOT__rf__DOT__rf_2),32);
        bufp->chgIData(oldp+167,(vlSelfRef.core__DOT__rf__DOT__rf_3),32);
        bufp->chgIData(oldp+168,(vlSelfRef.core__DOT__rf__DOT__rf_4),32);
        bufp->chgIData(oldp+169,(vlSelfRef.core__DOT__rf__DOT__rf_5),32);
        bufp->chgIData(oldp+170,(vlSelfRef.core__DOT__rf__DOT__rf_6),32);
        bufp->chgIData(oldp+171,(vlSelfRef.core__DOT__rf__DOT__rf_7),32);
        bufp->chgIData(oldp+172,(vlSelfRef.core__DOT__rf__DOT__rf_8),32);
        bufp->chgIData(oldp+173,(vlSelfRef.core__DOT__rf__DOT__rf_9),32);
        bufp->chgIData(oldp+174,(vlSelfRef.core__DOT__rf__DOT__rf_10),32);
        bufp->chgIData(oldp+175,(vlSelfRef.core__DOT__rf__DOT__rf_11),32);
        bufp->chgIData(oldp+176,(vlSelfRef.core__DOT__rf__DOT__rf_12),32);
        bufp->chgIData(oldp+177,(vlSelfRef.core__DOT__rf__DOT__rf_13),32);
        bufp->chgIData(oldp+178,(vlSelfRef.core__DOT__rf__DOT__rf_14),32);
        bufp->chgIData(oldp+179,(vlSelfRef.core__DOT__rf__DOT__rf_15),32);
        bufp->chgIData(oldp+180,(vlSelfRef.core__DOT__rf__DOT__rf_16),32);
        bufp->chgIData(oldp+181,(vlSelfRef.core__DOT__rf__DOT__rf_17),32);
        bufp->chgIData(oldp+182,(vlSelfRef.core__DOT__rf__DOT__rf_18),32);
        bufp->chgIData(oldp+183,(vlSelfRef.core__DOT__rf__DOT__rf_19),32);
        bufp->chgIData(oldp+184,(vlSelfRef.core__DOT__rf__DOT__rf_20),32);
        bufp->chgIData(oldp+185,(vlSelfRef.core__DOT__rf__DOT__rf_21),32);
        bufp->chgIData(oldp+186,(vlSelfRef.core__DOT__rf__DOT__rf_22),32);
        bufp->chgIData(oldp+187,(vlSelfRef.core__DOT__rf__DOT__rf_23),32);
        bufp->chgIData(oldp+188,(vlSelfRef.core__DOT__rf__DOT__rf_24),32);
        bufp->chgIData(oldp+189,(vlSelfRef.core__DOT__rf__DOT__rf_25),32);
        bufp->chgIData(oldp+190,(vlSelfRef.core__DOT__rf__DOT__rf_26),32);
        bufp->chgIData(oldp+191,(vlSelfRef.core__DOT__rf__DOT__rf_27),32);
        bufp->chgIData(oldp+192,(vlSelfRef.core__DOT__rf__DOT__rf_28),32);
        bufp->chgIData(oldp+193,(vlSelfRef.core__DOT__rf__DOT__rf_29),32);
        bufp->chgIData(oldp+194,(vlSelfRef.core__DOT__rf__DOT__rf_30),32);
        bufp->chgIData(oldp+195,(vlSelfRef.core__DOT__rf__DOT__rf_31),32);
        bufp->chgIData(oldp+196,(vlSelfRef.core__DOT__rf__DOT__casez_tmp),32);
        bufp->chgIData(oldp+197,(vlSelfRef.core__DOT__rf__DOT__casez_tmp_0),32);
        bufp->chgBit(oldp+198,(vlSelfRef.core__DOT__wbu__DOT__io_w2f_inst_done_REG));
    }
    bufp->chgBit(oldp+199,(vlSelfRef.clock));
    bufp->chgBit(oldp+200,(vlSelfRef.reset));
    bufp->chgIData(oldp+201,(vlSelfRef.io_debugPC),32);
    bufp->chgIData(oldp+202,(vlSelfRef.io_debugInst),32);
    bufp->chgBit(oldp+203,(vlSelfRef.io_inst_done));
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
