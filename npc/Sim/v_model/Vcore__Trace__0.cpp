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
        bufp->chgBit(oldp+0,(vlSelfRef.core__DOT__validReg_8));
        bufp->chgBit(oldp+1,(vlSelfRef.core__DOT__validReg_7));
        bufp->chgBit(oldp+2,(vlSelfRef.core__DOT__validReg_6));
        bufp->chgBit(oldp+3,(vlSelfRef.core__DOT__validReg_4));
        bufp->chgBit(oldp+4,(vlSelfRef.core__DOT__validReg_3));
        bufp->chgBit(oldp+5,(vlSelfRef.core__DOT__validReg_2));
        bufp->chgBit(oldp+6,(vlSelfRef.core__DOT__validReg_1));
        bufp->chgBit(oldp+7,(vlSelfRef.core__DOT__validReg));
        bufp->chgIData(oldp+8,(vlSelfRef.core__DOT__dataReg_inst),32);
        bufp->chgIData(oldp+9,(vlSelfRef.core__DOT__dataReg_pc),32);
        bufp->chgBit(oldp+10,(vlSelfRef.core__DOT__IFU__DOT___GEN_5));
        bufp->chgIData(oldp+11,(vlSelfRef.core__DOT__dataReg_1_addr),32);
        bufp->chgBit(oldp+12,(vlSelfRef.core__DOT__IFU__DOT___GEN_1));
        bufp->chgIData(oldp+13,(vlSelfRef.core__DOT__dataReg_2_rdata),32);
        bufp->chgBit(oldp+14,(vlSelfRef.core__DOT__producerFire_2));
        bufp->chgIData(oldp+15,(vlSelfRef.core__DOT__dataReg_3_rs1_data),32);
        bufp->chgIData(oldp+16,(vlSelfRef.core__DOT__dataReg_3_rs2_data),32);
        bufp->chgCData(oldp+17,(vlSelfRef.core__DOT__dataReg_3_rd_addr),5);
        bufp->chgBit(oldp+18,(vlSelfRef.core__DOT__dataReg_3_rd_en));
        bufp->chgCData(oldp+19,(vlSelfRef.core__DOT__dataReg_3_opcode),5);
        bufp->chgQData(oldp+20,(vlSelfRef.core__DOT__dataReg_3_imm),64);
        bufp->chgIData(oldp+22,(vlSelfRef.core__DOT__dataReg_3_pc),32);
        bufp->chgBit(oldp+23,(vlSelfRef.core__DOT__dataReg_3_rs2_en));
        bufp->chgBit(oldp+24,(vlSelfRef.core__DOT__dataReg_3_unsign_en));
        bufp->chgBit(oldp+25,(vlSelfRef.core__DOT__dataReg_3_csr_en));
        bufp->chgBit(oldp+26,(vlSelfRef.core__DOT__dataReg_3_lsu_en));
        bufp->chgBit(oldp+27,(vlSelfRef.core__DOT__dataReg_3_mw_en));
        bufp->chgCData(oldp+28,(vlSelfRef.core__DOT__dataReg_3_mlen),3);
        bufp->chgBit(oldp+29,(vlSelfRef.core__DOT__dataReg_3_branch_en));
        bufp->chgBit(oldp+30,(vlSelfRef.core__DOT__dataReg_3_jump_en));
        bufp->chgBit(oldp+31,(vlSelfRef.core__DOT__dataReg_3_jalr_en));
        bufp->chgBit(oldp+32,(vlSelfRef.core__DOT__producerFire_3));
        bufp->chgBit(oldp+33,(vlSelfRef.core__DOT__dataReg_4_rd_en));
        bufp->chgCData(oldp+34,(vlSelfRef.core__DOT__dataReg_4_rd_addr),5);
        bufp->chgIData(oldp+35,(vlSelfRef.core__DOT__dataReg_4_rd_data),32);
        bufp->chgBit(oldp+36,(vlSelfRef.core__DOT__dataReg_4_mem_wen));
        bufp->chgIData(oldp+37,(vlSelfRef.core__DOT__dataReg_4_mem_addr),32);
        bufp->chgIData(oldp+38,(vlSelfRef.core__DOT__dataReg_4_mem_wdata),32);
        bufp->chgCData(oldp+39,(vlSelfRef.core__DOT__dataReg_4_mem_len),3);
        bufp->chgBit(oldp+40,(vlSelfRef.core__DOT__producerFire_4));
        bufp->chgBit(oldp+41,(vlSelfRef.core__DOT__validReg_5));
        bufp->chgBit(oldp+42,(vlSelfRef.core__DOT__dataReg_5_rd_en));
        bufp->chgCData(oldp+43,(vlSelfRef.core__DOT__dataReg_5_rd_addr),5);
        bufp->chgIData(oldp+44,(vlSelfRef.core__DOT__dataReg_5_rd_data),32);
        bufp->chgBit(oldp+45,(vlSelfRef.core__DOT__producerFire_5));
        bufp->chgIData(oldp+46,(vlSelfRef.core__DOT__dataReg_6_addr),32);
        bufp->chgIData(oldp+47,(vlSelfRef.core__DOT__dataReg_6_wdata),32);
        bufp->chgBit(oldp+48,(vlSelfRef.core__DOT__dataReg_6_wen));
        bufp->chgCData(oldp+49,(vlSelfRef.core__DOT__dataReg_6_len),3);
        bufp->chgBit(oldp+50,(vlSelfRef.core__DOT__producerFire_6));
        bufp->chgIData(oldp+51,(vlSelfRef.core__DOT__dataReg_7_rdata),32);
        bufp->chgBit(oldp+52,(vlSelfRef.core__DOT__producerFire_7));
        bufp->chgBit(oldp+53,(vlSelfRef.core__DOT__producerFire_8));
        bufp->chgBit(oldp+54,(vlSelfRef.core__DOT__consumerFire_8));
        bufp->chgBit(oldp+55,(vlSelfRef.core__DOT__Fsram__DOT___rdata_reg_T));
        bufp->chgBit(oldp+56,(vlSelfRef.core__DOT__consumerFire_2));
        bufp->chgBit(oldp+57,(vlSelfRef.core__DOT__LSU__DOT___GEN));
        bufp->chgBit(oldp+58,(vlSelfRef.core__DOT__Lsram__DOT___rdata_reg_T));
        bufp->chgBit(oldp+59,(vlSelfRef.core__DOT__consumerFire_7));
        bufp->chgIData(oldp+60,(vlSelfRef.core__DOT__EXU__DOT___alu_io_out),32);
        bufp->chgIData(oldp+61,(vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1),32);
        bufp->chgIData(oldp+62,(vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2),32);
        bufp->chgQData(oldp+63,((0x7fffffffffffffffULL 
                                 & ((QData)((IData)(vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1)) 
                                    << (0x1fU & vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2)))),63);
        bufp->chgBit(oldp+65,((1U & ((~ (IData)(vlSelfRef.core__DOT__Fsram__DOT__resp_valid_reg)) 
                                     | (~ (IData)(vlSelfRef.core__DOT__validReg_2))))));
        bufp->chgBit(oldp+66,((1U & (~ (IData)(vlSelfRef.core__DOT__validReg_2)))));
        bufp->chgBit(oldp+67,(vlSelfRef.core__DOT__Fsram__DOT__resp_valid_reg));
        bufp->chgIData(oldp+68,((IData)(vlSelfRef.core__DOT__Fsram__DOT__rdata_reg)),32);
        bufp->chgQData(oldp+69,(vlSelfRef.core__DOT__Fsram__DOT__rdata_reg),64);
        bufp->chgQData(oldp+71,(vlSelfRef.core__DOT__Fsram__DOT__readDPI__DOT__rdata_reg),64);
        bufp->chgCData(oldp+73,((0x1fU & (vlSelfRef.core__DOT__dataReg_inst 
                                          >> 7U))),5);
        bufp->chgBit(oldp+74,(vlSelfRef.core__DOT___IDU_io_out_bits_rd_en));
        bufp->chgCData(oldp+75,(vlSelfRef.core__DOT___IDU_io_out_bits_opcode),5);
        bufp->chgQData(oldp+76,(vlSelfRef.core__DOT__IDU__DOT__casez_tmp),64);
        bufp->chgBit(oldp+78,(((0xffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_12)) 
                               | ((0xffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_14)) 
                                  | ((0x7fffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_16)) 
                                     | ((0x1fffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_17)) 
                                        | ((0x7fffU 
                                            == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_18)) 
                                           | ((IData)(
                                                      ((0x33U 
                                                        == 
                                                        (0x2077U 
                                                         & vlSelfRef.core__DOT__dataReg_inst)) 
                                                       & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_43))) 
                                              | ((0xffU 
                                                  == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_51)) 
                                                 | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_37))))))))));
        bufp->chgBit(oldp+79,(vlSelfRef.core__DOT___IDU_io_out_bits_unsign_en));
        bufp->chgBit(oldp+80,(((0xffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_1)) 
                               | ((0xffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_5)) 
                                  | (IData)(((3U == 
                                              (0x1fU 
                                               & vlSelfRef.core__DOT__dataReg_inst)) 
                                             & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_57)))))));
        bufp->chgBit(oldp+81,((IData)(((0x23U == (0x3fU 
                                                  & vlSelfRef.core__DOT__dataReg_inst)) 
                                       & ((IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_51) 
                                          | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_57))))));
        bufp->chgCData(oldp+82,(vlSelfRef.core__DOT___IDU_io_out_bits_mlen),3);
        bufp->chgBit(oldp+83,(((0xffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_21)) 
                               | (0x1ffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_52)))));
        bufp->chgBit(oldp+84,((0x7fU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_25))));
        bufp->chgBit(oldp+85,((0x3ffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_24))));
        bufp->chgCData(oldp+86,((0x1fU & (vlSelfRef.core__DOT__dataReg_inst 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+87,((0x1fU & (vlSelfRef.core__DOT__dataReg_inst 
                                          >> 0x14U))),5);
        bufp->chgQData(oldp+88,(((0U != (0x1fU & (vlSelfRef.core__DOT__dataReg_inst 
                                                  >> 0xfU)))
                                  ? vlSelfRef.core__DOT__RF__DOT__casez_tmp
                                  : 0ULL)),64);
        bufp->chgQData(oldp+90,(((0U != (0x1fU & (vlSelfRef.core__DOT__dataReg_inst 
                                                  >> 0x14U)))
                                  ? vlSelfRef.core__DOT__RF__DOT__casez_tmp_0
                                  : 0ULL)),64);
        bufp->chgIData(oldp+92,((0x3fffffffU & (~ (vlSelfRef.core__DOT__dataReg_inst 
                                                   >> 2U)))),30);
        bufp->chgBit(oldp+93,((1U & (~ (IData)(vlSelfRef.core__DOT__validReg)))));
        bufp->chgIData(oldp+94,(vlSelfRef.core__DOT__IFU__DOT__result_reg_inst),32);
        bufp->chgIData(oldp+95,(vlSelfRef.core__DOT__IFU__DOT__result_reg_pc),32);
        bufp->chgBit(oldp+96,((1U & (~ (IData)(vlSelfRef.core__DOT__validReg_1)))));
        bufp->chgBit(oldp+97,(((0U != (IData)(vlSelfRef.core__DOT__IFU__DOT__state)) 
                               & (1U == (IData)(vlSelfRef.core__DOT__IFU__DOT__state)))));
        bufp->chgIData(oldp+98,(((IData)(4U) + vlSelfRef.core__DOT__IFU__DOT__pc)),32);
        bufp->chgBit(oldp+99,(((~ (IData)(vlSelfRef.core__DOT__IFU__DOT___GEN_3)) 
                               & (2U == (IData)(vlSelfRef.core__DOT__IFU__DOT__state)))));
        bufp->chgCData(oldp+100,(vlSelfRef.core__DOT__IFU__DOT__state),2);
        bufp->chgIData(oldp+101,(vlSelfRef.core__DOT__IFU__DOT__pc),32);
        bufp->chgBit(oldp+102,(vlSelfRef.core__DOT__IFU__DOT__is_first_inst));
        bufp->chgCData(oldp+103,(vlSelfRef.core__DOT__IFU__DOT__casez_tmp),2);
        bufp->chgBit(oldp+104,(vlSelfRef.core__DOT__LSU__DOT__l2w_reg_rd_en));
        bufp->chgCData(oldp+105,(vlSelfRef.core__DOT__LSU__DOT__l2w_reg_rd_addr),5);
        bufp->chgIData(oldp+106,(vlSelfRef.core__DOT__LSU__DOT__l2w_reg_rd_data),32);
        bufp->chgBit(oldp+107,((1U & (~ (IData)(vlSelfRef.core__DOT__validReg_6)))));
        bufp->chgBit(oldp+108,(((IData)(vlSelfRef.core__DOT__LSU__DOT___GEN_0) 
                                & ((IData)(vlSelfRef.core__DOT__LSU__DOT__is_load) 
                                   | (IData)(vlSelfRef.core__DOT__dataReg_4_mem_wen)))));
        bufp->chgBit(oldp+109,(vlSelfRef.core__DOT__LSU__DOT__state));
        bufp->chgBit(oldp+110,(vlSelfRef.core__DOT__LSU__DOT__is_load));
        bufp->chgBit(oldp+111,((1U & ((~ (IData)(vlSelfRef.core__DOT__Lsram__DOT__resp_valid_reg)) 
                                      | (~ (IData)(vlSelfRef.core__DOT__validReg_7))))));
        bufp->chgBit(oldp+112,((1U & (~ (IData)(vlSelfRef.core__DOT__validReg_7)))));
        bufp->chgBit(oldp+113,(vlSelfRef.core__DOT__Lsram__DOT__resp_valid_reg));
        bufp->chgIData(oldp+114,((IData)(vlSelfRef.core__DOT__Lsram__DOT__rdata_reg)),32);
        bufp->chgQData(oldp+115,(vlSelfRef.core__DOT__Lsram__DOT__rdata_reg),64);
        bufp->chgCData(oldp+117,(vlSelfRef.core__DOT__dataReg_6_len),4);
        bufp->chgQData(oldp+118,(vlSelfRef.core__DOT__Lsram__DOT__readDPI__DOT__rdata_reg),64);
        bufp->chgQData(oldp+120,((QData)((IData)(vlSelfRef.core__DOT__dataReg_6_wdata))),64);
        bufp->chgBit(oldp+122,(((IData)(vlSelfRef.core__DOT__Lsram__DOT___rdata_reg_T) 
                                & (IData)(vlSelfRef.core__DOT__dataReg_6_wen))));
        bufp->chgIData(oldp+123,(vlSelfRef.core__DOT__Lsram__DOT__writeDPI__DOT__unnamedblk1__DOT__temp_data),32);
        bufp->chgIData(oldp+124,(vlSelfRef.core__DOT__Lsram__DOT__writeDPI__DOT__unnamedblk2__DOT__temp_data),32);
        bufp->chgQData(oldp+125,((QData)((IData)(vlSelfRef.core__DOT__dataReg_5_rd_data))),64);
        bufp->chgQData(oldp+127,(vlSelfRef.core__DOT__RF__DOT__rf_0),64);
        bufp->chgQData(oldp+129,(vlSelfRef.core__DOT__RF__DOT__rf_1),64);
        bufp->chgQData(oldp+131,(vlSelfRef.core__DOT__RF__DOT__rf_2),64);
        bufp->chgQData(oldp+133,(vlSelfRef.core__DOT__RF__DOT__rf_3),64);
        bufp->chgQData(oldp+135,(vlSelfRef.core__DOT__RF__DOT__rf_4),64);
        bufp->chgQData(oldp+137,(vlSelfRef.core__DOT__RF__DOT__rf_5),64);
        bufp->chgQData(oldp+139,(vlSelfRef.core__DOT__RF__DOT__rf_6),64);
        bufp->chgQData(oldp+141,(vlSelfRef.core__DOT__RF__DOT__rf_7),64);
        bufp->chgQData(oldp+143,(vlSelfRef.core__DOT__RF__DOT__rf_8),64);
        bufp->chgQData(oldp+145,(vlSelfRef.core__DOT__RF__DOT__rf_9),64);
        bufp->chgQData(oldp+147,(vlSelfRef.core__DOT__RF__DOT__rf_10),64);
        bufp->chgQData(oldp+149,(vlSelfRef.core__DOT__RF__DOT__rf_11),64);
        bufp->chgQData(oldp+151,(vlSelfRef.core__DOT__RF__DOT__rf_12),64);
        bufp->chgQData(oldp+153,(vlSelfRef.core__DOT__RF__DOT__rf_13),64);
        bufp->chgQData(oldp+155,(vlSelfRef.core__DOT__RF__DOT__rf_14),64);
        bufp->chgQData(oldp+157,(vlSelfRef.core__DOT__RF__DOT__rf_15),64);
        bufp->chgQData(oldp+159,(vlSelfRef.core__DOT__RF__DOT__rf_16),64);
        bufp->chgQData(oldp+161,(vlSelfRef.core__DOT__RF__DOT__rf_17),64);
        bufp->chgQData(oldp+163,(vlSelfRef.core__DOT__RF__DOT__rf_18),64);
        bufp->chgQData(oldp+165,(vlSelfRef.core__DOT__RF__DOT__rf_19),64);
        bufp->chgQData(oldp+167,(vlSelfRef.core__DOT__RF__DOT__rf_20),64);
        bufp->chgQData(oldp+169,(vlSelfRef.core__DOT__RF__DOT__rf_21),64);
        bufp->chgQData(oldp+171,(vlSelfRef.core__DOT__RF__DOT__rf_22),64);
        bufp->chgQData(oldp+173,(vlSelfRef.core__DOT__RF__DOT__rf_23),64);
        bufp->chgQData(oldp+175,(vlSelfRef.core__DOT__RF__DOT__rf_24),64);
        bufp->chgQData(oldp+177,(vlSelfRef.core__DOT__RF__DOT__rf_25),64);
        bufp->chgQData(oldp+179,(vlSelfRef.core__DOT__RF__DOT__rf_26),64);
        bufp->chgQData(oldp+181,(vlSelfRef.core__DOT__RF__DOT__rf_27),64);
        bufp->chgQData(oldp+183,(vlSelfRef.core__DOT__RF__DOT__rf_28),64);
        bufp->chgQData(oldp+185,(vlSelfRef.core__DOT__RF__DOT__rf_29),64);
        bufp->chgQData(oldp+187,(vlSelfRef.core__DOT__RF__DOT__rf_30),64);
        bufp->chgQData(oldp+189,(vlSelfRef.core__DOT__RF__DOT__rf_31),64);
        bufp->chgQData(oldp+191,(vlSelfRef.core__DOT__RF__DOT__casez_tmp),64);
        bufp->chgQData(oldp+193,(vlSelfRef.core__DOT__RF__DOT__casez_tmp_0),64);
    }
    bufp->chgBit(oldp+195,(vlSelfRef.clock));
    bufp->chgBit(oldp+196,(vlSelfRef.reset));
    bufp->chgIData(oldp+197,(vlSelfRef.io_debugPC),32);
    bufp->chgIData(oldp+198,(vlSelfRef.io_debugInst),32);
    bufp->chgIData(oldp+199,(vlSelfRef.io_debugin1),32);
    bufp->chgIData(oldp+200,(vlSelfRef.io_debugin2),32);
    bufp->chgIData(oldp+201,(vlSelfRef.io_debugout1),32);
    bufp->chgIData(oldp+202,(vlSelfRef.io_debugmemaddr),32);
    bufp->chgIData(oldp+203,(vlSelfRef.io_debugmemdata),32);
    bufp->chgBit(oldp+204,(vlSelfRef.io_inst_done));
    bufp->chgBit(oldp+205,(vlSelfRef.io_log_ready1));
    bufp->chgBit(oldp+206,(vlSelfRef.io_log_ready2));
    bufp->chgBit(oldp+207,(vlSelfRef.io_log_ready3));
    bufp->chgBit(oldp+208,(vlSelfRef.io_log_ready4));
    bufp->chgBit(oldp+209,(vlSelfRef.io_log_ready5));
    bufp->chgBit(oldp+210,(vlSelfRef.io_Log_valid1));
    bufp->chgBit(oldp+211,(vlSelfRef.io_Log_valid2));
    bufp->chgBit(oldp+212,(vlSelfRef.io_Log_valid3));
    bufp->chgBit(oldp+213,(vlSelfRef.io_Log_valid4));
    bufp->chgBit(oldp+214,(vlSelfRef.io_Log_valid5));
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
