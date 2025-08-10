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
        bufp->chgBit(oldp+1,(((1U != (IData)(vlSelfRef.core__DOT___idu_io_out_bits_system)) 
                              & (2U == (IData)(vlSelfRef.core__DOT___idu_io_out_bits_system)))));
        bufp->chgSData(oldp+2,(vlSelfRef.core__DOT___exu_io_csr_w_addr),12);
        bufp->chgIData(oldp+3,(vlSelfRef.core__DOT___exu_io_csr_w_data),32);
        bufp->chgIData(oldp+4,(vlSelfRef.core__DOT___csr_io_r_data),32);
        bufp->chgIData(oldp+5,(((IData)(vlSelfRef.core__DOT__exu__DOT___GEN_1)
                                 ? 0U : 0x341U)),32);
        bufp->chgBit(oldp+6,(vlSelfRef.core__DOT___exu_io_csr_w_en));
        bufp->chgIData(oldp+7,(((0xffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_39))
                                 ? vlSelfRef.core__DOT__ifu__DOT__pc_reg
                                 : 0U)),32);
        bufp->chgIData(oldp+8,(vlSelfRef.core__DOT__csr__DOT__mstatus),32);
        bufp->chgIData(oldp+9,(vlSelfRef.core__DOT__csr__DOT__mtvec),32);
        bufp->chgIData(oldp+10,(vlSelfRef.core__DOT__csr__DOT__mepc),32);
        bufp->chgIData(oldp+11,(vlSelfRef.core__DOT__csr__DOT__mcause),32);
        bufp->chgIData(oldp+12,(vlSelfRef.core__DOT__csr__DOT__mip),32);
        bufp->chgIData(oldp+13,(vlSelfRef.core__DOT__csr__DOT__mie),32);
        bufp->chgBit(oldp+14,((0U == (IData)(vlSelfRef.core__DOT__lsu__DOT__state))));
        bufp->chgBit(oldp+15,(vlSelfRef.core__DOT___exu_io_out_valid));
        bufp->chgIData(oldp+16,(vlSelfRef.core__DOT___idu_io_out_bits_imm),32);
        bufp->chgCData(oldp+17,(vlSelfRef.core__DOT___idu_io_out_bits_alusel),3);
        bufp->chgBit(oldp+18,((0xffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_39))));
        bufp->chgCData(oldp+19,((((IData)((0U != (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_orMatrixOutputs_T_36))) 
                                  << 3U) | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_1))),4);
        bufp->chgCData(oldp+20,(vlSelfRef.core__DOT___idu_io_out_bits_opcode),5);
        bufp->chgIData(oldp+21,(vlSelfRef.core__DOT___rf_io_r2e_rs1_data),32);
        bufp->chgIData(oldp+22,(vlSelfRef.core__DOT___rf_io_r2e_rs2_data),32);
        bufp->chgBit(oldp+23,(vlSelfRef.core__DOT___idu_io_out_bits_rd_en));
        bufp->chgCData(oldp+24,((0x1fU & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                          >> 7U))),5);
        bufp->chgIData(oldp+25,(vlSelfRef.core__DOT__ifu__DOT__pc_reg),32);
        bufp->chgCData(oldp+26,(vlSelfRef.core__DOT___idu_io_out_bits_system),4);
        bufp->chgBit(oldp+27,(vlSelfRef.core__DOT___idu_io_out_bits_jump_en));
        bufp->chgBit(oldp+28,(vlSelfRef.core__DOT___idu_io_out_bits_branch_en));
        bufp->chgSData(oldp+29,((vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                 >> 0x14U)),12);
        bufp->chgCData(oldp+30,((((IData)(((3U == (0x1fU 
                                                   & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)) 
                                           & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_79))) 
                                  << 1U) | (1U & (IData)(
                                                         ((3U 
                                                           == 
                                                           (0x1fU 
                                                            & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)) 
                                                          & ((IData)(
                                                                     (0x1000U 
                                                                      == 
                                                                      (0x3060U 
                                                                       & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data))) 
                                                             | ((~ 
                                                                 (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                                  >> 6U)) 
                                                                & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_90)))))))),3);
        bufp->chgBit(oldp+31,(vlSelfRef.core__DOT___exu_io_out_bits_mem_en));
        bufp->chgCData(oldp+32,(vlSelfRef.core__DOT___exu_io_out_bits_mem_wr),2);
        bufp->chgBit(oldp+33,((IData)(((3U == (0x7fU 
                                               & vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data)) 
                                       & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_80)))));
        bufp->chgIData(oldp+34,(vlSelfRef.core__DOT___exu_io_pcCtrl_dnpc),32);
        bufp->chgBit(oldp+35,(vlSelfRef.core__DOT___exu_io_out_bits_rd_en));
        bufp->chgCData(oldp+36,(vlSelfRef.core__DOT___exu_io_out_bits_rd_addr),5);
        bufp->chgIData(oldp+37,(vlSelfRef.core__DOT___exu_io_out_bits_rd_data),32);
        bufp->chgIData(oldp+38,(vlSelfRef.core__DOT__exu__DOT__alu__DOT__casez_tmp),32);
        bufp->chgIData(oldp+39,(vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in1),32);
        bufp->chgIData(oldp+40,(vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in2),32);
        bufp->chgQData(oldp+41,((0x7fffffffffffffffULL 
                                 & ((QData)((IData)(vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in1)) 
                                    << (0x1fU & vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in2)))),63);
        bufp->chgCData(oldp+43,(((0xffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_39))
                                  ? (((IData)((0U != (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_orMatrixOutputs_T_36))) 
                                      << 3U) | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_1))
                                  : 0U)),4);
        bufp->chgIData(oldp+44,(((0xffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_39))
                                  ? vlSelfRef.core__DOT___rf_io_r2e_rs1_data
                                  : 0U)),32);
        bufp->chgIData(oldp+45,(((0xffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_39))
                                  ? vlSelfRef.core__DOT___idu_io_out_bits_imm
                                  : 0U)),32);
        bufp->chgIData(oldp+46,(vlSelfRef.core__DOT__exu__DOT____Vcellinp__csrUnit__io_csr_old_value),32);
        bufp->chgIData(oldp+47,(((1U == (IData)(vlSelfRef.core__DOT__exu__DOT__csrUnit__DOT____VdfgRegularize_hc5739c28_0_0))
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
        bufp->chgBit(oldp+48,(((~ (((2U == (IData)(vlSelfRef.core__DOT__exu__DOT__csrUnit__DOT____VdfgRegularize_hc5739c28_0_0)) 
                                    | (3U == (IData)(vlSelfRef.core__DOT__exu__DOT__csrUnit__DOT____VdfgRegularize_hc5739c28_0_0))) 
                                   & (0U == vlSelfRef.core__DOT__exu__DOT__csrUnit__DOT__write_source))) 
                               & ((0xffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_39)) 
                                  & (0U != (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_1))))));
        bufp->chgIData(oldp+49,(vlSelfRef.core__DOT__exu__DOT__csrUnit__DOT__write_source),32);
        bufp->chgBit(oldp+50,((1U == (IData)(vlSelfRef.core__DOT___idu_io_out_bits_system))));
        bufp->chgIData(oldp+51,(vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data),32);
        bufp->chgCData(oldp+52,((0x1fU & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+53,((0x1fU & (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                          >> 0x14U))),5);
        bufp->chgIData(oldp+54,((0x3fffffffU & (~ (vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
                                                   >> 2U)))),30);
        bufp->chgBit(oldp+55,((1U & (~ (IData)(vlSelfRef.core__DOT__if_sram__DOT__r_state)))));
        bufp->chgBit(oldp+56,(((~ (IData)(vlSelfRef.core__DOT__ifu__DOT__state)) 
                               & (0U == (IData)(vlSelfRef.core__DOT__lsu__DOT__state)))));
        bufp->chgIData(oldp+57,(vlSelfRef.core__DOT__ifu__DOT__pc),32);
        bufp->chgBit(oldp+58,(vlSelfRef.core__DOT___ifu_io_axi_r_ready));
        bufp->chgBit(oldp+59,(vlSelfRef.core__DOT__if_sram__DOT__r_valid_reg));
        bufp->chgBit(oldp+60,((1U & (~ (IData)(vlSelfRef.core__DOT__if_sram__DOT__w_state)))));
        bufp->chgBit(oldp+61,(vlSelfRef.core__DOT__if_sram__DOT__b_valid_reg));
        bufp->chgBit(oldp+62,(vlSelfRef.core__DOT__if_sram__DOT__r_state));
        bufp->chgBit(oldp+63,(vlSelfRef.core__DOT__if_sram__DOT__write_backend_io_en_REG));
        bufp->chgBit(oldp+64,(vlSelfRef.core__DOT__if_sram__DOT__w_state));
        bufp->chgIData(oldp+65,(vlSelfRef.core__DOT__if_sram__DOT__write_backend_io_aw_addr_REG),32);
        bufp->chgIData(oldp+66,(vlSelfRef.core__DOT__if_sram__DOT__write_backend_io_w_data_REG),32);
        bufp->chgCData(oldp+67,(vlSelfRef.core__DOT__if_sram__DOT__write_backend_io_w_strb_REG),4);
        bufp->chgBit(oldp+68,(vlSelfRef.core__DOT__ifu__DOT___GEN_1));
        bufp->chgIData(oldp+69,(vlSelfRef.core__DOT__if_sram__DOT__read_backend__DOT__r_data_reg),32);
        bufp->chgBit(oldp+70,(vlSelfRef.core__DOT__if_sram__DOT___read_backend_done));
        bufp->chgIData(oldp+71,(vlSelfRef.core__DOT__if_sram__DOT__read_backend__DOT__r_data_comb),32);
        bufp->chgBit(oldp+72,(vlSelfRef.core__DOT__if_sram__DOT___write_backend_done));
        bufp->chgBit(oldp+73,(vlSelfRef.core__DOT__ifu__DOT__state));
        bufp->chgIData(oldp+74,(vlSelfRef.core__DOT__ifu__DOT__dnpc_delay),32);
        bufp->chgBit(oldp+75,((1U & (~ (IData)(vlSelfRef.core__DOT__ls_sram__DOT__r_state)))));
        bufp->chgBit(oldp+76,(vlSelfRef.core__DOT__lsu__DOT__io_axi_ar_valid_0));
        bufp->chgIData(oldp+77,((((1U != (IData)(vlSelfRef.core__DOT__lsu__DOT__state)) 
                                  | (0U == (IData)(vlSelfRef.core__DOT__lsu__DOT__state)))
                                  ? 0U : vlSelfRef.core__DOT__lsu__DOT__e2l_reg_maddr)),32);
        bufp->chgBit(oldp+78,(((~ (IData)(vlSelfRef.core__DOT__lsu__DOT____VdfgRegularize_hbcd0008a_0_0)) 
                               & (2U == (IData)(vlSelfRef.core__DOT__lsu__DOT__state)))));
        bufp->chgBit(oldp+79,(vlSelfRef.core__DOT__ls_sram__DOT__r_valid_reg));
        bufp->chgIData(oldp+80,(vlSelfRef.core__DOT__ls_sram__DOT__r_bits_reg_data),32);
        bufp->chgBit(oldp+81,((1U & (~ (IData)(vlSelfRef.core__DOT__ls_sram__DOT__w_state)))));
        bufp->chgBit(oldp+82,(vlSelfRef.core__DOT__lsu__DOT__io_axi_w_valid_0));
        bufp->chgIData(oldp+83,(((IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_6)
                                  ? 0U : vlSelfRef.core__DOT__lsu__DOT__e2l_reg_maddr)),32);
        bufp->chgIData(oldp+84,(((IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_6)
                                  ? 0U : ((0U == (IData)(vlSelfRef.core__DOT__lsu__DOT__e2l_reg_mlen))
                                           ? ((0xffU 
                                               & vlSelfRef.core__DOT__lsu__DOT__e2l_reg_wdata) 
                                              << (0x18U 
                                                  & (vlSelfRef.core__DOT__lsu__DOT__e2l_reg_maddr 
                                                     << 3U)))
                                           : ((1U == (IData)(vlSelfRef.core__DOT__lsu__DOT__e2l_reg_mlen))
                                               ? ((2U 
                                                   & vlSelfRef.core__DOT__lsu__DOT__e2l_reg_maddr)
                                                   ? 
                                                  VL_SHIFTL_III(32,32,32, vlSelfRef.core__DOT__lsu__DOT__e2l_reg_wdata, 0x10U)
                                                   : 
                                                  (0xffffU 
                                                   & vlSelfRef.core__DOT__lsu__DOT__e2l_reg_wdata))
                                               : ((2U 
                                                   == (IData)(vlSelfRef.core__DOT__lsu__DOT__e2l_reg_mlen))
                                                   ? vlSelfRef.core__DOT__lsu__DOT__e2l_reg_wdata
                                                   : 0U))))),32);
        bufp->chgCData(oldp+85,(((IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_6)
                                  ? 0U : (0xfU & ((0U 
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
        bufp->chgBit(oldp+86,(vlSelfRef.core__DOT___lsu_io_axi_b_ready));
        bufp->chgBit(oldp+87,(vlSelfRef.core__DOT__ls_sram__DOT__b_valid_reg));
        bufp->chgBit(oldp+88,(vlSelfRef.core__DOT__ls_sram__DOT__r_state));
        bufp->chgBit(oldp+89,(vlSelfRef.core__DOT__ls_sram__DOT__write_backend_io_en_REG));
        bufp->chgBit(oldp+90,(vlSelfRef.core__DOT__ls_sram__DOT__w_state));
        bufp->chgIData(oldp+91,(vlSelfRef.core__DOT__ls_sram__DOT__write_backend_io_aw_addr_REG),32);
        bufp->chgIData(oldp+92,(vlSelfRef.core__DOT__ls_sram__DOT__write_backend_io_w_data_REG),32);
        bufp->chgCData(oldp+93,(vlSelfRef.core__DOT__ls_sram__DOT__write_backend_io_w_strb_REG),4);
        bufp->chgBit(oldp+94,(vlSelfRef.core__DOT__ls_sram__DOT___read_backend_io_en_T));
        bufp->chgIData(oldp+95,(vlSelfRef.core__DOT__ls_sram__DOT__read_backend__DOT__r_data_reg),32);
        bufp->chgBit(oldp+96,(vlSelfRef.core__DOT__ls_sram__DOT___read_backend_done));
        bufp->chgIData(oldp+97,(vlSelfRef.core__DOT__ls_sram__DOT__read_backend__DOT__r_data_comb),32);
        bufp->chgBit(oldp+98,(vlSelfRef.core__DOT__ls_sram__DOT___write_backend_done));
        bufp->chgBit(oldp+99,(((0U == (IData)(vlSelfRef.core__DOT__lsu__DOT__state))
                                ? ((IData)(vlSelfRef.core__DOT__lsu__DOT__isPassthrough) 
                                   & (IData)(vlSelfRef.core__DOT___exu_io_out_valid))
                                : ((1U != (IData)(vlSelfRef.core__DOT__lsu__DOT__state)) 
                                   & ((2U == (IData)(vlSelfRef.core__DOT__lsu__DOT__state))
                                       ? (IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_1)
                                       : ((3U != (IData)(vlSelfRef.core__DOT__lsu__DOT__state)) 
                                          & (IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_10)))))));
        bufp->chgBit(oldp+100,(vlSelfRef.core__DOT___wbu_io_out_en));
        bufp->chgCData(oldp+101,(vlSelfRef.core__DOT___wbu_io_out_addr),5);
        bufp->chgIData(oldp+102,(vlSelfRef.core__DOT___wbu_io_out_data),32);
        bufp->chgBit(oldp+103,(vlSelfRef.core__DOT__lsu__DOT__isPassthrough));
        bufp->chgCData(oldp+104,(vlSelfRef.core__DOT__lsu__DOT__state),3);
        bufp->chgBit(oldp+105,(vlSelfRef.core__DOT__lsu__DOT__e2l_reg_rd_en));
        bufp->chgCData(oldp+106,(vlSelfRef.core__DOT__lsu__DOT__e2l_reg_rd_addr),5);
        bufp->chgIData(oldp+107,(vlSelfRef.core__DOT__lsu__DOT__e2l_reg_rd_data),32);
        bufp->chgCData(oldp+108,(vlSelfRef.core__DOT__lsu__DOT__e2l_reg_mlen),3);
        bufp->chgIData(oldp+109,(vlSelfRef.core__DOT__lsu__DOT__e2l_reg_wdata),32);
        bufp->chgIData(oldp+110,(vlSelfRef.core__DOT__lsu__DOT__e2l_reg_maddr),32);
        bufp->chgIData(oldp+111,(vlSelfRef.core__DOT__rf__DOT__rf_0),32);
        bufp->chgIData(oldp+112,(vlSelfRef.core__DOT__rf__DOT__rf_1),32);
        bufp->chgIData(oldp+113,(vlSelfRef.core__DOT__rf__DOT__rf_2),32);
        bufp->chgIData(oldp+114,(vlSelfRef.core__DOT__rf__DOT__rf_3),32);
        bufp->chgIData(oldp+115,(vlSelfRef.core__DOT__rf__DOT__rf_4),32);
        bufp->chgIData(oldp+116,(vlSelfRef.core__DOT__rf__DOT__rf_5),32);
        bufp->chgIData(oldp+117,(vlSelfRef.core__DOT__rf__DOT__rf_6),32);
        bufp->chgIData(oldp+118,(vlSelfRef.core__DOT__rf__DOT__rf_7),32);
        bufp->chgIData(oldp+119,(vlSelfRef.core__DOT__rf__DOT__rf_8),32);
        bufp->chgIData(oldp+120,(vlSelfRef.core__DOT__rf__DOT__rf_9),32);
        bufp->chgIData(oldp+121,(vlSelfRef.core__DOT__rf__DOT__rf_10),32);
        bufp->chgIData(oldp+122,(vlSelfRef.core__DOT__rf__DOT__rf_11),32);
        bufp->chgIData(oldp+123,(vlSelfRef.core__DOT__rf__DOT__rf_12),32);
        bufp->chgIData(oldp+124,(vlSelfRef.core__DOT__rf__DOT__rf_13),32);
        bufp->chgIData(oldp+125,(vlSelfRef.core__DOT__rf__DOT__rf_14),32);
        bufp->chgIData(oldp+126,(vlSelfRef.core__DOT__rf__DOT__rf_15),32);
        bufp->chgIData(oldp+127,(vlSelfRef.core__DOT__rf__DOT__rf_16),32);
        bufp->chgIData(oldp+128,(vlSelfRef.core__DOT__rf__DOT__rf_17),32);
        bufp->chgIData(oldp+129,(vlSelfRef.core__DOT__rf__DOT__rf_18),32);
        bufp->chgIData(oldp+130,(vlSelfRef.core__DOT__rf__DOT__rf_19),32);
        bufp->chgIData(oldp+131,(vlSelfRef.core__DOT__rf__DOT__rf_20),32);
        bufp->chgIData(oldp+132,(vlSelfRef.core__DOT__rf__DOT__rf_21),32);
        bufp->chgIData(oldp+133,(vlSelfRef.core__DOT__rf__DOT__rf_22),32);
        bufp->chgIData(oldp+134,(vlSelfRef.core__DOT__rf__DOT__rf_23),32);
        bufp->chgIData(oldp+135,(vlSelfRef.core__DOT__rf__DOT__rf_24),32);
        bufp->chgIData(oldp+136,(vlSelfRef.core__DOT__rf__DOT__rf_25),32);
        bufp->chgIData(oldp+137,(vlSelfRef.core__DOT__rf__DOT__rf_26),32);
        bufp->chgIData(oldp+138,(vlSelfRef.core__DOT__rf__DOT__rf_27),32);
        bufp->chgIData(oldp+139,(vlSelfRef.core__DOT__rf__DOT__rf_28),32);
        bufp->chgIData(oldp+140,(vlSelfRef.core__DOT__rf__DOT__rf_29),32);
        bufp->chgIData(oldp+141,(vlSelfRef.core__DOT__rf__DOT__rf_30),32);
        bufp->chgIData(oldp+142,(vlSelfRef.core__DOT__rf__DOT__rf_31),32);
        bufp->chgIData(oldp+143,(vlSelfRef.core__DOT__rf__DOT__casez_tmp),32);
        bufp->chgIData(oldp+144,(vlSelfRef.core__DOT__rf__DOT__casez_tmp_0),32);
        bufp->chgBit(oldp+145,(vlSelfRef.core__DOT__wbu__DOT__io_w2f_inst_done_REG));
    }
    bufp->chgBit(oldp+146,(vlSelfRef.clock));
    bufp->chgBit(oldp+147,(vlSelfRef.reset));
    bufp->chgIData(oldp+148,(vlSelfRef.io_debugPC),32);
    bufp->chgIData(oldp+149,(vlSelfRef.io_debugInst),32);
    bufp->chgBit(oldp+150,(vlSelfRef.io_inst_done));
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
