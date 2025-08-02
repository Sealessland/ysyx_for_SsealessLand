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
        bufp->chgBit(oldp+1,((0U == (IData)(vlSelfRef.core__DOT__LSU__DOT__state))));
        bufp->chgBit(oldp+2,(vlSelfRef.core__DOT__IFU__DOT__inst_buf_valid));
        bufp->chgCData(oldp+3,(vlSelfRef.core__DOT___EXU_io_out_bits_rd_addr),5);
        bufp->chgBit(oldp+4,(vlSelfRef.core__DOT___EXU_io_out_bits_mem_wen));
        bufp->chgBit(oldp+5,(vlSelfRef.core__DOT___EXU_io_out_bits_mem_ren));
        bufp->chgIData(oldp+6,(vlSelfRef.core__DOT__EXU__DOT___alu_io_out),32);
        bufp->chgCData(oldp+7,(((0xcU & ((- (IData)(
                                                    (0x1ffU 
                                                     == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_35)))) 
                                         << 2U)) | 
                                ((2U & (((IData)((0x1003U 
                                                  == 
                                                  (0x307fU 
                                                   & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst))) 
                                         | ((IData)(
                                                    ((3U 
                                                      == 
                                                      (0x5fU 
                                                       & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                                     & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_61))) 
                                            | (0x1ffU 
                                               == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_35)))) 
                                        << 1U)) | (IData)(vlSelfRef.core__DOT___IDU_io_out_bits_lsu_en)))),4);
        bufp->chgBit(oldp+8,(vlSelfRef.core__DOT___EXU_io_out_bits_unsign_en));
        bufp->chgBit(oldp+9,(vlSelfRef.core__DOT___EXU_io_pcCtrl_pcSel));
        bufp->chgIData(oldp+10,(((1U & ((0x7fU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_24)) 
                                        | ((~ (IData)(
                                                      (0x3ffU 
                                                       == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_23)))) 
                                           | (IData)(vlSelfRef.core__DOT___IDU_io_out_bits_branch_en))))
                                  ? (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_pc 
                                     + (IData)(vlSelfRef.core__DOT__IDU__DOT__casez_tmp))
                                  : vlSelfRef.core__DOT__EXU__DOT___alu_io_out)),32);
        bufp->chgCData(oldp+11,((0x1fU & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                          >> 7U))),5);
        bufp->chgBit(oldp+12,(((0x7fU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T)) 
                               | ((0xffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_1)) 
                                  | ((0xffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_3)) 
                                     | ((0x3ffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_7)) 
                                        | ((0x1ffU 
                                            == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_8)) 
                                           | ((0x3fU 
                                               == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_9)) 
                                              | ((0x7fffU 
                                                  == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_15)) 
                                                 | ((0x1fffU 
                                                     == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_16)) 
                                                    | ((0x7fffU 
                                                        == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_17)) 
                                                       | ((0x3ffU 
                                                           == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_23)) 
                                                          | ((0x7fU 
                                                              == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_24)) 
                                                             | ((0x3fffU 
                                                                 == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_27)) 
                                                                | ((0x7fffU 
                                                                    == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_30)) 
                                                                   | ((0xffU 
                                                                       == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_36)) 
                                                                      | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_45)))))))))))))))));
        bufp->chgCData(oldp+13,(vlSelfRef.__VdfgRegularize_hd87f99a1_1_3),5);
        bufp->chgQData(oldp+14,(vlSelfRef.core__DOT__IDU__DOT__casez_tmp),64);
        bufp->chgIData(oldp+16,(vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_pc),32);
        bufp->chgBit(oldp+17,((0U != (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_orMatrixOutputs_T_16))));
        bufp->chgBit(oldp+18,(vlSelfRef.core__DOT___IDU_io_out_bits_lsu_en));
        bufp->chgBit(oldp+19,(vlSelfRef.core__DOT___IDU_io_out_bits_branch_en));
        bufp->chgBit(oldp+20,((0x7fU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_24))));
        bufp->chgBit(oldp+21,((0x3ffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_23))));
        bufp->chgBit(oldp+22,((IData)((0x17U == (0x7fU 
                                                 & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)))));
        bufp->chgIData(oldp+23,(vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1),32);
        bufp->chgIData(oldp+24,(vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2),32);
        bufp->chgQData(oldp+25,((0x7fffffffffffffffULL 
                                 & ((QData)((IData)(vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1)) 
                                    << (0x1fU & vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2)))),63);
        bufp->chgBit(oldp+27,((1U & (~ (IData)(vlSelfRef.core__DOT__Fsram__DOT__r_state)))));
        bufp->chgBit(oldp+28,(vlSelfRef.core__DOT__IFU__DOT__io_axi_ar_valid_0));
        bufp->chgIData(oldp+29,(vlSelfRef.core__DOT__IFU__DOT__pc),32);
        bufp->chgBit(oldp+30,(((~ (IData)(vlSelfRef.core__DOT__IFU__DOT___GEN_2)) 
                               & (2U == (IData)(vlSelfRef.core__DOT__IFU__DOT__state)))));
        bufp->chgBit(oldp+31,(vlSelfRef.core__DOT__Fsram__DOT__r_valid_reg));
        bufp->chgIData(oldp+32,(vlSelfRef.core__DOT__Fsram__DOT__r_bits_reg_data),32);
        bufp->chgBit(oldp+33,((1U & (~ (IData)(vlSelfRef.core__DOT__Fsram__DOT__w_state)))));
        bufp->chgBit(oldp+34,(vlSelfRef.core__DOT__Fsram__DOT__b_valid_reg));
        bufp->chgBit(oldp+35,(vlSelfRef.core__DOT__Fsram__DOT__r_state));
        bufp->chgBit(oldp+36,(vlSelfRef.core__DOT__Fsram__DOT__write_backend_io_en_REG));
        bufp->chgBit(oldp+37,(vlSelfRef.core__DOT__Fsram__DOT__w_state));
        bufp->chgIData(oldp+38,(vlSelfRef.core__DOT__Fsram__DOT__write_backend_io_aw_addr_REG),32);
        bufp->chgIData(oldp+39,(vlSelfRef.core__DOT__Fsram__DOT__write_backend_io_w_data_REG),32);
        bufp->chgCData(oldp+40,(vlSelfRef.core__DOT__Fsram__DOT__write_backend_io_w_strb_REG),4);
        bufp->chgBit(oldp+41,(vlSelfRef.core__DOT__Fsram__DOT___read_backend_io_en_T));
        bufp->chgIData(oldp+42,(vlSelfRef.core__DOT__Fsram__DOT__read_backend__DOT__r_data_reg),32);
        bufp->chgBit(oldp+43,(vlSelfRef.core__DOT__Fsram__DOT___read_backend_done));
        bufp->chgIData(oldp+44,(vlSelfRef.core__DOT__Fsram__DOT__read_backend__DOT__r_data_comb),32);
        bufp->chgBit(oldp+45,(vlSelfRef.core__DOT__Fsram__DOT___write_backend_done));
        bufp->chgIData(oldp+46,(vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst),32);
        bufp->chgCData(oldp+47,(vlSelfRef.core__DOT___IDU_io_d2r_rs1_addr),5);
        bufp->chgCData(oldp+48,(vlSelfRef.core__DOT___IDU_io_d2r_rs2_addr),5);
        bufp->chgBit(oldp+49,(vlSelfRef.core__DOT___IDU_io_ebreakhandler));
        bufp->chgIData(oldp+50,((0x3fffffffU & (~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                   >> 2U)))),30);
        bufp->chgCData(oldp+51,(vlSelfRef.core__DOT__IFU__DOT__state),2);
        bufp->chgBit(oldp+52,(vlSelfRef.core__DOT___WBU_io_out_en));
        bufp->chgCData(oldp+53,(vlSelfRef.core__DOT___WBU_io_out_addr),5);
        bufp->chgIData(oldp+54,(vlSelfRef.core__DOT___WBU_io_out_data),32);
        bufp->chgBit(oldp+55,(vlSelfRef.core__DOT__LSU__DOT__is_passthrough));
        bufp->chgBit(oldp+56,((1U & (~ (IData)(vlSelfRef.core__DOT__Lsram__DOT__r_state)))));
        bufp->chgBit(oldp+57,(vlSelfRef.core__DOT__LSU__DOT__io_axi_ar_valid_0));
        bufp->chgIData(oldp+58,(vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_addr),32);
        bufp->chgBit(oldp+59,(((~ (IData)(vlSelfRef.core__DOT__LSU__DOT____VdfgRegularize_ha7d0a824_0_0)) 
                               & (2U == (IData)(vlSelfRef.core__DOT__LSU__DOT__state)))));
        bufp->chgBit(oldp+60,(vlSelfRef.core__DOT__Lsram__DOT__r_valid_reg));
        bufp->chgIData(oldp+61,(vlSelfRef.core__DOT__Lsram__DOT__r_bits_reg_data),32);
        bufp->chgBit(oldp+62,((1U & (~ (IData)(vlSelfRef.core__DOT__Lsram__DOT__w_state)))));
        bufp->chgBit(oldp+63,(vlSelfRef.core__DOT__LSU__DOT__io_axi_w_valid_0));
        bufp->chgCData(oldp+64,(((1U == (IData)(vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_len))
                                  ? 1U : ((3U == (IData)(vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_len))
                                           ? 2U : ((IData)(
                                                           (0xfU 
                                                            == (IData)(vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_len))) 
                                                   << 2U)))),4);
        bufp->chgBit(oldp+65,(vlSelfRef.core__DOT___LSU_io_axi_b_ready));
        bufp->chgBit(oldp+66,(vlSelfRef.core__DOT__Lsram__DOT__b_valid_reg));
        bufp->chgCData(oldp+67,(vlSelfRef.core__DOT__LSU__DOT__state),3);
        bufp->chgCData(oldp+68,(vlSelfRef.core__DOT__LSU__DOT__e2l_reg_rd_addr),5);
        bufp->chgIData(oldp+69,(vlSelfRef.core__DOT__LSU__DOT__e2l_reg_rd_data),32);
        bufp->chgIData(oldp+70,(vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_wdata),32);
        bufp->chgCData(oldp+71,(vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_len),4);
        bufp->chgBit(oldp+72,(vlSelfRef.core__DOT__LSU__DOT__e2l_reg_unsign_en));
        bufp->chgBit(oldp+73,(vlSelfRef.core__DOT__Lsram__DOT__r_state));
        bufp->chgBit(oldp+74,(vlSelfRef.core__DOT__Lsram__DOT__write_backend_io_en_REG));
        bufp->chgBit(oldp+75,(vlSelfRef.core__DOT__Lsram__DOT__w_state));
        bufp->chgIData(oldp+76,(vlSelfRef.core__DOT__Lsram__DOT__write_backend_io_aw_addr_REG),32);
        bufp->chgIData(oldp+77,(vlSelfRef.core__DOT__Lsram__DOT__write_backend_io_w_data_REG),32);
        bufp->chgCData(oldp+78,(vlSelfRef.core__DOT__Lsram__DOT__write_backend_io_w_strb_REG),4);
        bufp->chgBit(oldp+79,(vlSelfRef.core__DOT__Lsram__DOT___read_backend_io_en_T));
        bufp->chgIData(oldp+80,(vlSelfRef.core__DOT__Lsram__DOT__read_backend__DOT__r_data_reg),32);
        bufp->chgBit(oldp+81,(vlSelfRef.core__DOT__Lsram__DOT___read_backend_done));
        bufp->chgIData(oldp+82,(vlSelfRef.core__DOT__Lsram__DOT__read_backend__DOT__r_data_comb),32);
        bufp->chgBit(oldp+83,(vlSelfRef.core__DOT__Lsram__DOT___write_backend_done));
        bufp->chgBit(oldp+84,(vlSelfRef.core__DOT__WBU__DOT__io_w2f_inst_done_REG));
        bufp->chgIData(oldp+85,(vlSelfRef.core__DOT__rf__DOT__rf_0),32);
        bufp->chgIData(oldp+86,(vlSelfRef.core__DOT__rf__DOT__rf_1),32);
        bufp->chgIData(oldp+87,(vlSelfRef.core__DOT__rf__DOT__rf_2),32);
        bufp->chgIData(oldp+88,(vlSelfRef.core__DOT__rf__DOT__rf_3),32);
        bufp->chgIData(oldp+89,(vlSelfRef.core__DOT__rf__DOT__rf_4),32);
        bufp->chgIData(oldp+90,(vlSelfRef.core__DOT__rf__DOT__rf_5),32);
        bufp->chgIData(oldp+91,(vlSelfRef.core__DOT__rf__DOT__rf_6),32);
        bufp->chgIData(oldp+92,(vlSelfRef.core__DOT__rf__DOT__rf_7),32);
        bufp->chgIData(oldp+93,(vlSelfRef.core__DOT__rf__DOT__rf_8),32);
        bufp->chgIData(oldp+94,(vlSelfRef.core__DOT__rf__DOT__rf_9),32);
        bufp->chgIData(oldp+95,(vlSelfRef.core__DOT__rf__DOT__rf_10),32);
        bufp->chgIData(oldp+96,(vlSelfRef.core__DOT__rf__DOT__rf_11),32);
        bufp->chgIData(oldp+97,(vlSelfRef.core__DOT__rf__DOT__rf_12),32);
        bufp->chgIData(oldp+98,(vlSelfRef.core__DOT__rf__DOT__rf_13),32);
        bufp->chgIData(oldp+99,(vlSelfRef.core__DOT__rf__DOT__rf_14),32);
        bufp->chgIData(oldp+100,(vlSelfRef.core__DOT__rf__DOT__rf_15),32);
        bufp->chgIData(oldp+101,(vlSelfRef.core__DOT__rf__DOT__rf_16),32);
        bufp->chgIData(oldp+102,(vlSelfRef.core__DOT__rf__DOT__rf_17),32);
        bufp->chgIData(oldp+103,(vlSelfRef.core__DOT__rf__DOT__rf_18),32);
        bufp->chgIData(oldp+104,(vlSelfRef.core__DOT__rf__DOT__rf_19),32);
        bufp->chgIData(oldp+105,(vlSelfRef.core__DOT__rf__DOT__rf_20),32);
        bufp->chgIData(oldp+106,(vlSelfRef.core__DOT__rf__DOT__rf_21),32);
        bufp->chgIData(oldp+107,(vlSelfRef.core__DOT__rf__DOT__rf_22),32);
        bufp->chgIData(oldp+108,(vlSelfRef.core__DOT__rf__DOT__rf_23),32);
        bufp->chgIData(oldp+109,(vlSelfRef.core__DOT__rf__DOT__rf_24),32);
        bufp->chgIData(oldp+110,(vlSelfRef.core__DOT__rf__DOT__rf_25),32);
        bufp->chgIData(oldp+111,(vlSelfRef.core__DOT__rf__DOT__rf_26),32);
        bufp->chgIData(oldp+112,(vlSelfRef.core__DOT__rf__DOT__rf_27),32);
        bufp->chgIData(oldp+113,(vlSelfRef.core__DOT__rf__DOT__rf_28),32);
        bufp->chgIData(oldp+114,(vlSelfRef.core__DOT__rf__DOT__rf_29),32);
        bufp->chgIData(oldp+115,(vlSelfRef.core__DOT__rf__DOT__rf_30),32);
        bufp->chgIData(oldp+116,(vlSelfRef.core__DOT__rf__DOT__rf_31),32);
        bufp->chgIData(oldp+117,(vlSelfRef.core__DOT__rf__DOT__casez_tmp),32);
        bufp->chgIData(oldp+118,(vlSelfRef.core__DOT__rf__DOT__casez_tmp_0),32);
    }
    bufp->chgBit(oldp+119,(vlSelfRef.clock));
    bufp->chgBit(oldp+120,(vlSelfRef.reset));
    bufp->chgIData(oldp+121,(vlSelfRef.io_debugPC),32);
    bufp->chgIData(oldp+122,(vlSelfRef.io_debugInst),32);
    bufp->chgIData(oldp+123,(vlSelfRef.io_debugin1),32);
    bufp->chgIData(oldp+124,(vlSelfRef.io_debugin2),32);
    bufp->chgIData(oldp+125,(vlSelfRef.io_debugout1),32);
    bufp->chgIData(oldp+126,(vlSelfRef.io_debugmemaddr),32);
    bufp->chgIData(oldp+127,(vlSelfRef.io_debugmemdata),32);
    bufp->chgIData(oldp+128,(vlSelfRef.io_debugwaddr),32);
    bufp->chgIData(oldp+129,(vlSelfRef.io_debugwdata),32);
    bufp->chgBit(oldp+130,(vlSelfRef.io_inst_done));
    bufp->chgBit(oldp+131,(vlSelfRef.io_ls_done));
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
