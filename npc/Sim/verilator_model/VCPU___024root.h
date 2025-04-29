// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCPU.h for the primary calling header

#ifndef VERILATED_VCPU___024ROOT_H_
#define VERILATED_VCPU___024ROOT_H_  // guard

#include "verilated.h"


class VCPU__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCPU___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        CData/*0:0*/ CPU__DOT___decode_io_rd_en;
        CData/*6:0*/ CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T;
        CData/*7:0*/ CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_1;
        CData/*7:0*/ CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_4;
        CData/*5:0*/ CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_14;
        CData/*7:0*/ CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_18;
        CData/*7:0*/ CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_24;
        CData/*6:0*/ CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_27;
        CData/*7:0*/ CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_40;
        CData/*7:0*/ CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_48;
        CData/*0:0*/ CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_42;
        CData/*0:0*/ CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_43;
        CData/*0:0*/ CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_44;
        CData/*0:0*/ CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_47;
        CData/*0:0*/ CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_49;
        CData/*0:0*/ CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_51;
        CData/*0:0*/ CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_52;
        CData/*0:0*/ CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_53;
        CData/*0:0*/ CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_54;
        CData/*0:0*/ CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_58;
        CData/*0:0*/ CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_59;
        CData/*0:0*/ CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_60;
        CData/*0:0*/ CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_61;
        CData/*0:0*/ CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_62;
        CData/*0:0*/ CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_63;
        CData/*0:0*/ CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_64;
        CData/*0:0*/ CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_67;
        CData/*0:0*/ CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_69;
        CData/*0:0*/ CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_70;
        CData/*1:0*/ CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_71;
        CData/*2:0*/ CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_72;
        CData/*4:0*/ CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_73;
        CData/*5:0*/ CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_74;
        CData/*6:0*/ CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_75;
        CData/*4:0*/ CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_77;
        CData/*1:0*/ CPU__DOT__execute__DOT__mem_state;
        CData/*1:0*/ CPU__DOT__execute__DOT__mem_size_reg;
        CData/*7:0*/ CPU__DOT__execute__DOT__mem_op_reg;
        CData/*0:0*/ CPU__DOT__execute__DOT___GEN_25;
        CData/*0:0*/ CPU__DOT__execute__DOT___GEN_29;
        CData/*0:0*/ CPU__DOT__execute__DOT___GEN_30;
        CData/*0:0*/ CPU__DOT__execute__DOT___GEN_41;
        CData/*0:0*/ CPU__DOT__execute__DOT___GEN_43;
        CData/*1:0*/ CPU__DOT__execute__DOT__casez_tmp;
        CData/*4:0*/ CPU__DOT__execute__DOT____VdfgRegularize_hbe579afe_0_0;
        CData/*0:0*/ CPU__DOT__execute__DOT____VdfgRegularize_hbe579afe_0_2;
        CData/*0:0*/ CPU__DOT__execute__DOT____VdfgRegularize_hbe579afe_0_3;
        CData/*0:0*/ CPU__DOT__execute__DOT____VdfgRegularize_hbe579afe_0_4;
        CData/*0:0*/ CPU__DOT__execute__DOT____VdfgRegularize_hbe579afe_0_8;
        CData/*0:0*/ CPU__DOT__execute__DOT____VdfgRegularize_hbe579afe_0_9;
        CData/*0:0*/ CPU__DOT__regFile__DOT___GEN;
        CData/*5:0*/ __VdfgRegularize_hd87f99a1_0_1;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clock__0;
        CData/*0:0*/ __VactContinue;
        SData/*9:0*/ CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_9;
        SData/*8:0*/ CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_12;
        SData/*9:0*/ CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_26;
        SData/*14:0*/ CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_31;
        SData/*14:0*/ CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_51;
        SData/*15:0*/ CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_34;
    };
    struct {
        SData/*15:0*/ CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_53;
        SData/*9:0*/ CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_76;
        VL_IN(io_pc,31,0);
        VL_OUT(io_debug_pc,31,0);
        VL_OUT(io_debug_inst,31,0);
        VL_OUT(io_dnpc,31,0);
        IData/*31:0*/ CPU__DOT___regFile_io_rs1_data;
        IData/*31:0*/ CPU__DOT___regFile_io_rs2_data;
        IData/*31:0*/ CPU__DOT___execute_io_rd_data;
        IData/*31:0*/ CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data;
        IData/*27:0*/ CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_28;
        IData/*31:0*/ CPU__DOT__execute__DOT__mem_addr_reg;
        IData/*31:0*/ CPU__DOT__execute__DOT__mem_data_reg;
        IData/*31:0*/ CPU__DOT__execute__DOT___GEN_39;
        IData/*31:0*/ CPU__DOT__execute__DOT____VdfgRegularize_hbe579afe_0_10;
        IData/*31:0*/ CPU__DOT__execute__DOT____VdfgRegularize_hbe579afe_0_11;
        IData/*31:0*/ CPU__DOT__execute__DOT__read__DOT__read_data;
        IData/*31:0*/ CPU__DOT__regFile__DOT__rf_0;
        IData/*31:0*/ CPU__DOT__regFile__DOT__rf_1;
        IData/*31:0*/ CPU__DOT__regFile__DOT__rf_2;
        IData/*31:0*/ CPU__DOT__regFile__DOT__rf_3;
        IData/*31:0*/ CPU__DOT__regFile__DOT__rf_4;
        IData/*31:0*/ CPU__DOT__regFile__DOT__rf_5;
        IData/*31:0*/ CPU__DOT__regFile__DOT__rf_6;
        IData/*31:0*/ CPU__DOT__regFile__DOT__rf_7;
        IData/*31:0*/ CPU__DOT__regFile__DOT__rf_8;
        IData/*31:0*/ CPU__DOT__regFile__DOT__rf_9;
        IData/*31:0*/ CPU__DOT__regFile__DOT__rf_10;
        IData/*31:0*/ CPU__DOT__regFile__DOT__rf_11;
        IData/*31:0*/ CPU__DOT__regFile__DOT__rf_12;
        IData/*31:0*/ CPU__DOT__regFile__DOT__rf_13;
        IData/*31:0*/ CPU__DOT__regFile__DOT__rf_14;
        IData/*31:0*/ CPU__DOT__regFile__DOT__rf_15;
        IData/*31:0*/ CPU__DOT__regFile__DOT__rf_16;
        IData/*31:0*/ CPU__DOT__regFile__DOT__rf_17;
        IData/*31:0*/ CPU__DOT__regFile__DOT__rf_18;
        IData/*31:0*/ CPU__DOT__regFile__DOT__rf_19;
        IData/*31:0*/ CPU__DOT__regFile__DOT__rf_20;
        IData/*31:0*/ CPU__DOT__regFile__DOT__rf_21;
        IData/*31:0*/ CPU__DOT__regFile__DOT__rf_22;
        IData/*31:0*/ CPU__DOT__regFile__DOT__rf_23;
        IData/*31:0*/ CPU__DOT__regFile__DOT__rf_24;
        IData/*31:0*/ CPU__DOT__regFile__DOT__rf_25;
        IData/*31:0*/ CPU__DOT__regFile__DOT__rf_26;
        IData/*31:0*/ CPU__DOT__regFile__DOT__rf_27;
        IData/*31:0*/ CPU__DOT__regFile__DOT__rf_28;
        IData/*31:0*/ CPU__DOT__regFile__DOT__rf_29;
        IData/*31:0*/ CPU__DOT__regFile__DOT__rf_30;
        IData/*31:0*/ CPU__DOT__regFile__DOT__rf_31;
        IData/*31:0*/ CPU__DOT__regFile__DOT__casez_tmp;
        IData/*31:0*/ CPU__DOT__regFile__DOT__casez_tmp_0;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ CPU__DOT__decode__DOT__casez_tmp;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCPU___024root(VCPU__Syms* symsp, const char* v__name);
    ~VCPU___024root();
    VL_UNCOPYABLE(VCPU___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
