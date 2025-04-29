// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCPU__Syms.h"


void VCPU___024root__trace_chg_0_sub_0(VCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VCPU___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_chg_0\n"); );
    // Init
    VCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCPU___024root*>(voidSelf);
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VCPU___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VCPU___024root__trace_chg_0_sub_0(VCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_chg_0_sub_0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data),32);
        bufp->chgCData(oldp+1,((0x1fU & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                         >> 0xfU))),5);
        bufp->chgCData(oldp+2,((0x1fU & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                         >> 0x14U))),5);
        bufp->chgCData(oldp+3,((0x1fU & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                         >> 7U))),5);
        bufp->chgBit(oldp+4,(vlSelfRef.CPU__DOT___decode_io_rd_en));
        bufp->chgCData(oldp+5,(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1),8);
        bufp->chgQData(oldp+6,(vlSelfRef.CPU__DOT__decode__DOT__casez_tmp),64);
        bufp->chgIData(oldp+8,((0x3fffffffU & (~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                  >> 2U)))),30);
        bufp->chgIData(oldp+9,(vlSelfRef.CPU__DOT___regFile_io_rs1_data),32);
        bufp->chgIData(oldp+10,(vlSelfRef.CPU__DOT___regFile_io_rs2_data),32);
        bufp->chgIData(oldp+11,((IData)(vlSelfRef.CPU__DOT__decode__DOT__casez_tmp)),32);
        bufp->chgCData(oldp+12,(vlSelfRef.CPU__DOT__execute__DOT__mem_state),2);
        bufp->chgIData(oldp+13,(vlSelfRef.CPU__DOT__execute__DOT__mem_addr_reg),32);
        bufp->chgIData(oldp+14,(vlSelfRef.CPU__DOT__execute__DOT__mem_data_reg),32);
        bufp->chgCData(oldp+15,(vlSelfRef.CPU__DOT__execute__DOT__mem_size_reg),2);
        bufp->chgCData(oldp+16,(vlSelfRef.CPU__DOT__execute__DOT__mem_op_reg),8);
        bufp->chgCData(oldp+17,(((0U == (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_state))
                                  ? (((~ (IData)(vlSelfRef.CPU__DOT__execute__DOT___GEN_25)) 
                                      & (((((0x14U 
                                             == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)) 
                                            | (0x15U 
                                               == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))) 
                                           | (0x16U 
                                              == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))) 
                                          | (0x17U 
                                             == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))) 
                                         | (0x18U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))))
                                      ? 1U : (((~ (IData)(vlSelfRef.CPU__DOT__execute__DOT___GEN_30)) 
                                               & (IData)(vlSelfRef.CPU__DOT__execute__DOT___GEN_29))
                                               ? 3U
                                               : (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_state)))
                                  : ((1U == (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_state))
                                      ? 2U : 0U))),2);
        bufp->chgBit(oldp+18,(((0U != (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_state)) 
                               & (1U == (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_state)))));
        bufp->chgIData(oldp+19,(((IData)(vlSelfRef.CPU__DOT__execute__DOT___GEN_41)
                                  ? 0U : vlSelfRef.CPU__DOT__execute__DOT__mem_addr_reg)),32);
        bufp->chgCData(oldp+20,(((IData)(vlSelfRef.CPU__DOT__execute__DOT___GEN_41)
                                  ? 0U : (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_size_reg))),2);
        bufp->chgIData(oldp+21,(vlSelfRef.CPU__DOT__execute__DOT__read__DOT__read_data),32);
        bufp->chgBit(oldp+22,(((~ (IData)(vlSelfRef.CPU__DOT__execute__DOT___GEN_43)) 
                               & (3U == (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_state)))));
        bufp->chgIData(oldp+23,(((1U & ((~ (IData)(
                                                   (3U 
                                                    == (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_state)))) 
                                        | (IData)(vlSelfRef.CPU__DOT__execute__DOT___GEN_43)))
                                  ? 0U : vlSelfRef.CPU__DOT__execute__DOT__mem_addr_reg)),32);
        bufp->chgIData(oldp+24,(((1U & ((~ (IData)(
                                                   (3U 
                                                    == (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_state)))) 
                                        | (IData)(vlSelfRef.CPU__DOT__execute__DOT___GEN_43)))
                                  ? 0U : vlSelfRef.CPU__DOT__execute__DOT__mem_data_reg)),32);
        bufp->chgCData(oldp+25,(((1U & ((~ (IData)(
                                                   (3U 
                                                    == (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_state)))) 
                                        | (IData)(vlSelfRef.CPU__DOT__execute__DOT___GEN_43)))
                                  ? 0U : (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_size_reg))),2);
        bufp->chgIData(oldp+26,(vlSelfRef.CPU__DOT__regFile__DOT__rf_0),32);
        bufp->chgIData(oldp+27,(vlSelfRef.CPU__DOT__regFile__DOT__rf_1),32);
        bufp->chgIData(oldp+28,(vlSelfRef.CPU__DOT__regFile__DOT__rf_2),32);
        bufp->chgIData(oldp+29,(vlSelfRef.CPU__DOT__regFile__DOT__rf_3),32);
        bufp->chgIData(oldp+30,(vlSelfRef.CPU__DOT__regFile__DOT__rf_4),32);
        bufp->chgIData(oldp+31,(vlSelfRef.CPU__DOT__regFile__DOT__rf_5),32);
        bufp->chgIData(oldp+32,(vlSelfRef.CPU__DOT__regFile__DOT__rf_6),32);
        bufp->chgIData(oldp+33,(vlSelfRef.CPU__DOT__regFile__DOT__rf_7),32);
        bufp->chgIData(oldp+34,(vlSelfRef.CPU__DOT__regFile__DOT__rf_8),32);
        bufp->chgIData(oldp+35,(vlSelfRef.CPU__DOT__regFile__DOT__rf_9),32);
        bufp->chgIData(oldp+36,(vlSelfRef.CPU__DOT__regFile__DOT__rf_10),32);
        bufp->chgIData(oldp+37,(vlSelfRef.CPU__DOT__regFile__DOT__rf_11),32);
        bufp->chgIData(oldp+38,(vlSelfRef.CPU__DOT__regFile__DOT__rf_12),32);
        bufp->chgIData(oldp+39,(vlSelfRef.CPU__DOT__regFile__DOT__rf_13),32);
        bufp->chgIData(oldp+40,(vlSelfRef.CPU__DOT__regFile__DOT__rf_14),32);
        bufp->chgIData(oldp+41,(vlSelfRef.CPU__DOT__regFile__DOT__rf_15),32);
        bufp->chgIData(oldp+42,(vlSelfRef.CPU__DOT__regFile__DOT__rf_16),32);
        bufp->chgIData(oldp+43,(vlSelfRef.CPU__DOT__regFile__DOT__rf_17),32);
        bufp->chgIData(oldp+44,(vlSelfRef.CPU__DOT__regFile__DOT__rf_18),32);
        bufp->chgIData(oldp+45,(vlSelfRef.CPU__DOT__regFile__DOT__rf_19),32);
        bufp->chgIData(oldp+46,(vlSelfRef.CPU__DOT__regFile__DOT__rf_20),32);
        bufp->chgIData(oldp+47,(vlSelfRef.CPU__DOT__regFile__DOT__rf_21),32);
        bufp->chgIData(oldp+48,(vlSelfRef.CPU__DOT__regFile__DOT__rf_22),32);
        bufp->chgIData(oldp+49,(vlSelfRef.CPU__DOT__regFile__DOT__rf_23),32);
        bufp->chgIData(oldp+50,(vlSelfRef.CPU__DOT__regFile__DOT__rf_24),32);
        bufp->chgIData(oldp+51,(vlSelfRef.CPU__DOT__regFile__DOT__rf_25),32);
        bufp->chgIData(oldp+52,(vlSelfRef.CPU__DOT__regFile__DOT__rf_26),32);
        bufp->chgIData(oldp+53,(vlSelfRef.CPU__DOT__regFile__DOT__rf_27),32);
        bufp->chgIData(oldp+54,(vlSelfRef.CPU__DOT__regFile__DOT__rf_28),32);
        bufp->chgIData(oldp+55,(vlSelfRef.CPU__DOT__regFile__DOT__rf_29),32);
        bufp->chgIData(oldp+56,(vlSelfRef.CPU__DOT__regFile__DOT__rf_30),32);
        bufp->chgIData(oldp+57,(vlSelfRef.CPU__DOT__regFile__DOT__rf_31),32);
        bufp->chgIData(oldp+58,(vlSelfRef.CPU__DOT__regFile__DOT__casez_tmp),32);
        bufp->chgIData(oldp+59,(vlSelfRef.CPU__DOT__regFile__DOT__casez_tmp_0),32);
    }
    bufp->chgBit(oldp+60,(vlSelfRef.clock));
    bufp->chgBit(oldp+61,(vlSelfRef.reset));
    bufp->chgIData(oldp+62,(vlSelfRef.io_pc),32);
    bufp->chgIData(oldp+63,(vlSelfRef.io_debug_pc),32);
    bufp->chgIData(oldp+64,(vlSelfRef.io_debug_inst),32);
    bufp->chgIData(oldp+65,(vlSelfRef.io_dnpc),32);
    bufp->chgIData(oldp+66,(vlSelfRef.CPU__DOT___execute_io_rd_data),32);
    bufp->chgBit(oldp+67,(((~ (IData)(vlSelfRef.reset)) 
                           & ((0U != (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_state)) 
                              & (1U == (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_state))))));
    bufp->chgBit(oldp+68,(((~ (IData)(vlSelfRef.reset)) 
                           & ((~ (IData)(vlSelfRef.CPU__DOT__execute__DOT___GEN_43)) 
                              & (3U == (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_state))))));
    bufp->chgBit(oldp+69,((1U & (~ (IData)(vlSelfRef.reset)))));
}

void VCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_cleanup\n"); );
    // Init
    VCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCPU___024root*>(voidSelf);
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
