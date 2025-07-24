// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE___024ROOT_H_
#define VERILATED_VCORE___024ROOT_H_  // guard

#include "verilated.h"


class Vcore__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcore___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        CData/*0:0*/ core__DOT___executer_io_branchCond;
        CData/*4:0*/ core__DOT___decode_io_rs1_addr;
        CData/*4:0*/ core__DOT___decode_io_rs2_addr;
        CData/*4:0*/ core__DOT___decode_io_rd_addr;
        CData/*0:0*/ core__DOT__csr_write_en;
        CData/*0:0*/ core__DOT____VdfgRegularize_h47660625_0_1;
        CData/*0:0*/ core__DOT____VdfgRegularize_h47660625_0_2;
        CData/*6:0*/ core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T;
        CData/*7:0*/ core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_1;
        CData/*7:0*/ core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_4;
        CData/*5:0*/ core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_14;
        CData/*7:0*/ core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_16;
        CData/*7:0*/ core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_18;
        CData/*7:0*/ core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_24;
        CData/*6:0*/ core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_27;
        CData/*7:0*/ core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_40;
        CData/*7:0*/ core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_48;
        CData/*0:0*/ core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0;
        CData/*0:0*/ core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1;
        CData/*0:0*/ core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_10;
        CData/*0:0*/ core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_11;
        CData/*0:0*/ core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12;
        CData/*0:0*/ core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13;
        CData/*0:0*/ core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_21;
        CData/*0:0*/ core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_36;
        CData/*0:0*/ core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_37;
        CData/*0:0*/ core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_38;
        CData/*0:0*/ core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_52;
        CData/*0:0*/ core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_53;
        CData/*0:0*/ core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_54;
        CData/*0:0*/ core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_55;
        CData/*0:0*/ core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_56;
        CData/*0:0*/ core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_57;
        CData/*0:0*/ core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_61;
        CData/*0:0*/ core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_62;
        CData/*0:0*/ core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_63;
        CData/*0:0*/ core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_64;
        CData/*0:0*/ core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_68;
        CData/*0:0*/ core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_69;
        CData/*0:0*/ core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_70;
        CData/*0:0*/ core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_71;
        CData/*0:0*/ core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_72;
        CData/*0:0*/ core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_73;
        CData/*0:0*/ core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_76;
        CData/*0:0*/ core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_78;
        CData/*0:0*/ core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_79;
        CData/*1:0*/ core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_80;
        CData/*1:0*/ core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_81;
        CData/*2:0*/ core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_82;
        CData/*4:0*/ core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_83;
        CData/*4:0*/ core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_84;
        CData/*5:0*/ core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_85;
        CData/*5:0*/ core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_86;
        CData/*6:0*/ core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_87;
        CData/*6:0*/ core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_88;
        CData/*0:0*/ core__DOT__executer__DOT___GEN_28;
        CData/*0:0*/ core__DOT__executer__DOT___GEN_29;
        CData/*0:0*/ core__DOT__executer__DOT___GEN_48;
        CData/*0:0*/ core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_2;
        CData/*0:0*/ core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_3;
        CData/*0:0*/ core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_11;
        CData/*0:0*/ core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_15;
    };
    struct {
        CData/*0:0*/ core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_17;
        CData/*0:0*/ core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_18;
        CData/*0:0*/ core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_19;
        CData/*0:0*/ core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_24;
        CData/*0:0*/ core__DOT__instfetch__DOT__pc_en;
        CData/*0:0*/ core__DOT__rf__DOT___GEN;
        CData/*5:0*/ __VdfgRegularize_hd87f99a1_0_2;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clock__0;
        CData/*0:0*/ __VactContinue;
        SData/*11:0*/ core__DOT____VdfgRegularize_h47660625_0_0;
        SData/*9:0*/ core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_9;
        SData/*8:0*/ core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_12;
        SData/*14:0*/ core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_19;
        SData/*12:0*/ core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_20;
        SData/*14:0*/ core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_21;
        SData/*8:0*/ core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_25;
        SData/*9:0*/ core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_26;
        SData/*13:0*/ core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_30;
        SData/*14:0*/ core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_31;
        SData/*14:0*/ core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_33;
        SData/*14:0*/ core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_51;
        SData/*15:0*/ core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_34;
        SData/*15:0*/ core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_53;
        SData/*8:0*/ core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_89;
        SData/*9:0*/ core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_90;
        SData/*9:0*/ core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_91;
        VL_OUT(io_debugPC,31,0);
        VL_OUT(io_debugInst,31,0);
        VL_OUT(io_debugDNPC,31,0);
        VL_OUT(io_debugin1,31,0);
        VL_OUT(io_debugin2,31,0);
        VL_OUT(io_debugBranch,31,0);
        VL_OUT(io_debugImm,31,0);
        IData/*31:0*/ core__DOT___executer_io_out;
        IData/*31:0*/ core__DOT___executer_io_csrW;
        IData/*31:0*/ core__DOT__mstatus;
        IData/*31:0*/ core__DOT__mtvec;
        IData/*31:0*/ core__DOT__mepc;
        IData/*31:0*/ core__DOT__mcause;
        IData/*31:0*/ core__DOT____Vcellinp__executer__io_csrR;
        IData/*31:0*/ core__DOT____Vcellinp__control__io_rf_data;
        IData/*31:0*/ core__DOT__ram2r1w__DOT__mem__DOT__imem_rdata_reg;
        IData/*31:0*/ core__DOT__ram2r1w__DOT__mem__DOT__dmem_addr_base;
        IData/*31:0*/ core__DOT__ram2r1w__DOT__mem__DOT__dmem_data_low;
        IData/*31:0*/ core__DOT__ram2r1w__DOT__mem__DOT__dmem_data_high;
        IData/*29:0*/ core__DOT__decode__DOT__decodedBundle_invInputs;
        IData/*31:0*/ core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_1;
        IData/*31:0*/ core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_4;
        IData/*31:0*/ core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_5;
        IData/*31:0*/ core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_6;
        IData/*31:0*/ core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_7;
        IData/*31:0*/ core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_8;
        IData/*31:0*/ core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_22;
        IData/*31:0*/ core__DOT__instfetch__DOT__pc;
        IData/*31:0*/ core__DOT__rf__DOT__rf_0;
        IData/*31:0*/ core__DOT__rf__DOT__rf_1;
        IData/*31:0*/ core__DOT__rf__DOT__rf_2;
        IData/*31:0*/ core__DOT__rf__DOT__rf_3;
        IData/*31:0*/ core__DOT__rf__DOT__rf_4;
        IData/*31:0*/ core__DOT__rf__DOT__rf_5;
        IData/*31:0*/ core__DOT__rf__DOT__rf_6;
        IData/*31:0*/ core__DOT__rf__DOT__rf_7;
        IData/*31:0*/ core__DOT__rf__DOT__rf_8;
    };
    struct {
        IData/*31:0*/ core__DOT__rf__DOT__rf_9;
        IData/*31:0*/ core__DOT__rf__DOT__rf_10;
        IData/*31:0*/ core__DOT__rf__DOT__rf_11;
        IData/*31:0*/ core__DOT__rf__DOT__rf_12;
        IData/*31:0*/ core__DOT__rf__DOT__rf_13;
        IData/*31:0*/ core__DOT__rf__DOT__rf_14;
        IData/*31:0*/ core__DOT__rf__DOT__rf_15;
        IData/*31:0*/ core__DOT__rf__DOT__rf_16;
        IData/*31:0*/ core__DOT__rf__DOT__rf_17;
        IData/*31:0*/ core__DOT__rf__DOT__rf_18;
        IData/*31:0*/ core__DOT__rf__DOT__rf_19;
        IData/*31:0*/ core__DOT__rf__DOT__rf_20;
        IData/*31:0*/ core__DOT__rf__DOT__rf_21;
        IData/*31:0*/ core__DOT__rf__DOT__rf_22;
        IData/*31:0*/ core__DOT__rf__DOT__rf_23;
        IData/*31:0*/ core__DOT__rf__DOT__rf_24;
        IData/*31:0*/ core__DOT__rf__DOT__rf_25;
        IData/*31:0*/ core__DOT__rf__DOT__rf_26;
        IData/*31:0*/ core__DOT__rf__DOT__rf_27;
        IData/*31:0*/ core__DOT__rf__DOT__rf_28;
        IData/*31:0*/ core__DOT__rf__DOT__rf_29;
        IData/*31:0*/ core__DOT__rf__DOT__rf_30;
        IData/*31:0*/ core__DOT__rf__DOT__rf_31;
        IData/*31:0*/ core__DOT__rf__DOT__casez_tmp;
        IData/*31:0*/ core__DOT__rf__DOT__casez_tmp_0;
        IData/*31:0*/ __Vtask_core__DOT__ram2r1w__DOT__mem__DOT__inst_mem_read__0__data;
        IData/*31:0*/ __Vtask_core__DOT__ram2r1w__DOT__mem__DOT__data_mem_read__1__data;
        IData/*31:0*/ __Vtask_core__DOT__ram2r1w__DOT__mem__DOT__data_mem_read__2__data;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ core__DOT__ram2r1w__DOT__mem__DOT__dmem_rdata_reg;
        QData/*63:0*/ core__DOT__decode__DOT__casez_tmp;
        QData/*63:0*/ core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_16;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcore__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore___024root(Vcore__Syms* symsp, const char* v__name);
    ~Vcore___024root();
    VL_UNCOPYABLE(Vcore___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
