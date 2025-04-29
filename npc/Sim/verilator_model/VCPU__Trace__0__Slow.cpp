// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCPU__Syms.h"


VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__0(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_init_sub__TOP__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+61,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"io_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"io_debug_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"io_debug_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"io_dnpc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("CPU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+61,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"io_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"io_debug_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"io_debug_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"io_dnpc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("decode", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"io_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"io_rs1_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+3,0,"io_rs2_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+4,0,"io_rd_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+5,0,"io_rd_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"io_opcode",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+7,0,"io_imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+9,0,"decodedBundle_invInputs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declQuad(c+7,0,"casez_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("execute", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+61,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"io_rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"io_rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"io_opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+12,0,"io_imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+5,0,"io_rdEn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+67,0,"io_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"io_next_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"io_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"mem_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+14,0,"mem_addr_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"mem_data_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"mem_size_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+17,0,"mem_op_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+18,0,"casez_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("read", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+61,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"mem_ren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+20,0,"mem_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"data_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+22,0,"mem_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+68,0,"do_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("write", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+61,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"mem_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"mem_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"mem_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"data_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+69,0,"do_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("fetchUnit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+61,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"io_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"io_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dpiMem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+61,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"mem_ren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"mem_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+72,0,"data_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1,0,"mem_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+70,0,"do_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("regFile", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+61,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"io_rs1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+3,0,"io_rs2_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+10,0,"io_rs1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"io_rs2_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"io_rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+67,0,"io_rd_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+5,0,"io_rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"rf_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"rf_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"rf_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,0,"rf_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"rf_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"rf_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"rf_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"rf_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"rf_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"rf_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"rf_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"rf_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"rf_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"rf_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"rf_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"rf_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"rf_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,0,"rf_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"rf_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"rf_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"rf_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"rf_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"rf_22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"rf_23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"rf_24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"rf_25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"rf_26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"rf_27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"rf_28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"rf_29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"rf_30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"rf_31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"casez_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+60,0,"casez_tmp_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VCPU___024root__trace_init_top(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_init_top\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VCPU___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VCPU___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VCPU___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VCPU___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VCPU___024root__trace_register(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_register\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VCPU___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VCPU___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VCPU___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VCPU___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VCPU___024root__trace_const_0_sub_0(VCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VCPU___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_const_0\n"); );
    // Init
    VCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCPU___024root*>(voidSelf);
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VCPU___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VCPU___024root__trace_const_0_sub_0(VCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_const_0_sub_0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+71,(1U));
    bufp->fullCData(oldp+72,(2U),2);
}

VL_ATTR_COLD void VCPU___024root__trace_full_0_sub_0(VCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VCPU___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_full_0\n"); );
    // Init
    VCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCPU___024root*>(voidSelf);
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VCPU___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VCPU___024root__trace_full_0_sub_0(VCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_full_0_sub_0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data),32);
    bufp->fullCData(oldp+2,((0x1fU & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                      >> 0xfU))),5);
    bufp->fullCData(oldp+3,((0x1fU & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                      >> 0x14U))),5);
    bufp->fullCData(oldp+4,((0x1fU & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                      >> 7U))),5);
    bufp->fullBit(oldp+5,(vlSelfRef.CPU__DOT___decode_io_rd_en));
    bufp->fullCData(oldp+6,(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1),8);
    bufp->fullQData(oldp+7,(vlSelfRef.CPU__DOT__decode__DOT__casez_tmp),64);
    bufp->fullIData(oldp+9,((0x3fffffffU & (~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                               >> 2U)))),30);
    bufp->fullIData(oldp+10,(vlSelfRef.CPU__DOT___regFile_io_rs1_data),32);
    bufp->fullIData(oldp+11,(vlSelfRef.CPU__DOT___regFile_io_rs2_data),32);
    bufp->fullIData(oldp+12,((IData)(vlSelfRef.CPU__DOT__decode__DOT__casez_tmp)),32);
    bufp->fullCData(oldp+13,(vlSelfRef.CPU__DOT__execute__DOT__mem_state),2);
    bufp->fullIData(oldp+14,(vlSelfRef.CPU__DOT__execute__DOT__mem_addr_reg),32);
    bufp->fullIData(oldp+15,(vlSelfRef.CPU__DOT__execute__DOT__mem_data_reg),32);
    bufp->fullCData(oldp+16,(vlSelfRef.CPU__DOT__execute__DOT__mem_size_reg),2);
    bufp->fullCData(oldp+17,(vlSelfRef.CPU__DOT__execute__DOT__mem_op_reg),8);
    bufp->fullCData(oldp+18,(((0U == (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_state))
                               ? (((~ (IData)(vlSelfRef.CPU__DOT__execute__DOT___GEN_25)) 
                                   & (((((0x14U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)) 
                                         | (0x15U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))) 
                                        | (0x16U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))) 
                                       | (0x17U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))) 
                                      | (0x18U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))))
                                   ? 1U : (((~ (IData)(vlSelfRef.CPU__DOT__execute__DOT___GEN_30)) 
                                            & (IData)(vlSelfRef.CPU__DOT__execute__DOT___GEN_29))
                                            ? 3U : (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_state)))
                               : ((1U == (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_state))
                                   ? 2U : 0U))),2);
    bufp->fullBit(oldp+19,(((0U != (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_state)) 
                            & (1U == (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_state)))));
    bufp->fullIData(oldp+20,(((IData)(vlSelfRef.CPU__DOT__execute__DOT___GEN_41)
                               ? 0U : vlSelfRef.CPU__DOT__execute__DOT__mem_addr_reg)),32);
    bufp->fullCData(oldp+21,(((IData)(vlSelfRef.CPU__DOT__execute__DOT___GEN_41)
                               ? 0U : (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_size_reg))),2);
    bufp->fullIData(oldp+22,(vlSelfRef.CPU__DOT__execute__DOT__read__DOT__read_data),32);
    bufp->fullBit(oldp+23,(((~ (IData)(vlSelfRef.CPU__DOT__execute__DOT___GEN_43)) 
                            & (3U == (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_state)))));
    bufp->fullIData(oldp+24,(((1U & ((~ (IData)((3U 
                                                 == (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_state)))) 
                                     | (IData)(vlSelfRef.CPU__DOT__execute__DOT___GEN_43)))
                               ? 0U : vlSelfRef.CPU__DOT__execute__DOT__mem_addr_reg)),32);
    bufp->fullIData(oldp+25,(((1U & ((~ (IData)((3U 
                                                 == (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_state)))) 
                                     | (IData)(vlSelfRef.CPU__DOT__execute__DOT___GEN_43)))
                               ? 0U : vlSelfRef.CPU__DOT__execute__DOT__mem_data_reg)),32);
    bufp->fullCData(oldp+26,(((1U & ((~ (IData)((3U 
                                                 == (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_state)))) 
                                     | (IData)(vlSelfRef.CPU__DOT__execute__DOT___GEN_43)))
                               ? 0U : (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_size_reg))),2);
    bufp->fullIData(oldp+27,(vlSelfRef.CPU__DOT__regFile__DOT__rf_0),32);
    bufp->fullIData(oldp+28,(vlSelfRef.CPU__DOT__regFile__DOT__rf_1),32);
    bufp->fullIData(oldp+29,(vlSelfRef.CPU__DOT__regFile__DOT__rf_2),32);
    bufp->fullIData(oldp+30,(vlSelfRef.CPU__DOT__regFile__DOT__rf_3),32);
    bufp->fullIData(oldp+31,(vlSelfRef.CPU__DOT__regFile__DOT__rf_4),32);
    bufp->fullIData(oldp+32,(vlSelfRef.CPU__DOT__regFile__DOT__rf_5),32);
    bufp->fullIData(oldp+33,(vlSelfRef.CPU__DOT__regFile__DOT__rf_6),32);
    bufp->fullIData(oldp+34,(vlSelfRef.CPU__DOT__regFile__DOT__rf_7),32);
    bufp->fullIData(oldp+35,(vlSelfRef.CPU__DOT__regFile__DOT__rf_8),32);
    bufp->fullIData(oldp+36,(vlSelfRef.CPU__DOT__regFile__DOT__rf_9),32);
    bufp->fullIData(oldp+37,(vlSelfRef.CPU__DOT__regFile__DOT__rf_10),32);
    bufp->fullIData(oldp+38,(vlSelfRef.CPU__DOT__regFile__DOT__rf_11),32);
    bufp->fullIData(oldp+39,(vlSelfRef.CPU__DOT__regFile__DOT__rf_12),32);
    bufp->fullIData(oldp+40,(vlSelfRef.CPU__DOT__regFile__DOT__rf_13),32);
    bufp->fullIData(oldp+41,(vlSelfRef.CPU__DOT__regFile__DOT__rf_14),32);
    bufp->fullIData(oldp+42,(vlSelfRef.CPU__DOT__regFile__DOT__rf_15),32);
    bufp->fullIData(oldp+43,(vlSelfRef.CPU__DOT__regFile__DOT__rf_16),32);
    bufp->fullIData(oldp+44,(vlSelfRef.CPU__DOT__regFile__DOT__rf_17),32);
    bufp->fullIData(oldp+45,(vlSelfRef.CPU__DOT__regFile__DOT__rf_18),32);
    bufp->fullIData(oldp+46,(vlSelfRef.CPU__DOT__regFile__DOT__rf_19),32);
    bufp->fullIData(oldp+47,(vlSelfRef.CPU__DOT__regFile__DOT__rf_20),32);
    bufp->fullIData(oldp+48,(vlSelfRef.CPU__DOT__regFile__DOT__rf_21),32);
    bufp->fullIData(oldp+49,(vlSelfRef.CPU__DOT__regFile__DOT__rf_22),32);
    bufp->fullIData(oldp+50,(vlSelfRef.CPU__DOT__regFile__DOT__rf_23),32);
    bufp->fullIData(oldp+51,(vlSelfRef.CPU__DOT__regFile__DOT__rf_24),32);
    bufp->fullIData(oldp+52,(vlSelfRef.CPU__DOT__regFile__DOT__rf_25),32);
    bufp->fullIData(oldp+53,(vlSelfRef.CPU__DOT__regFile__DOT__rf_26),32);
    bufp->fullIData(oldp+54,(vlSelfRef.CPU__DOT__regFile__DOT__rf_27),32);
    bufp->fullIData(oldp+55,(vlSelfRef.CPU__DOT__regFile__DOT__rf_28),32);
    bufp->fullIData(oldp+56,(vlSelfRef.CPU__DOT__regFile__DOT__rf_29),32);
    bufp->fullIData(oldp+57,(vlSelfRef.CPU__DOT__regFile__DOT__rf_30),32);
    bufp->fullIData(oldp+58,(vlSelfRef.CPU__DOT__regFile__DOT__rf_31),32);
    bufp->fullIData(oldp+59,(vlSelfRef.CPU__DOT__regFile__DOT__casez_tmp),32);
    bufp->fullIData(oldp+60,(vlSelfRef.CPU__DOT__regFile__DOT__casez_tmp_0),32);
    bufp->fullBit(oldp+61,(vlSelfRef.clock));
    bufp->fullBit(oldp+62,(vlSelfRef.reset));
    bufp->fullIData(oldp+63,(vlSelfRef.io_pc),32);
    bufp->fullIData(oldp+64,(vlSelfRef.io_debug_pc),32);
    bufp->fullIData(oldp+65,(vlSelfRef.io_debug_inst),32);
    bufp->fullIData(oldp+66,(vlSelfRef.io_dnpc),32);
    bufp->fullIData(oldp+67,(vlSelfRef.CPU__DOT___execute_io_rd_data),32);
    bufp->fullBit(oldp+68,(((~ (IData)(vlSelfRef.reset)) 
                            & ((0U != (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_state)) 
                               & (1U == (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_state))))));
    bufp->fullBit(oldp+69,(((~ (IData)(vlSelfRef.reset)) 
                            & ((~ (IData)(vlSelfRef.CPU__DOT__execute__DOT___GEN_43)) 
                               & (3U == (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_state))))));
    bufp->fullBit(oldp+70,((1U & (~ (IData)(vlSelfRef.reset)))));
}
