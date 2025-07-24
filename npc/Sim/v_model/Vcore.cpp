// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcore__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vcore::Vcore(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcore__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_debugPC{vlSymsp->TOP.io_debugPC}
    , io_debugInst{vlSymsp->TOP.io_debugInst}
    , io_debugDNPC{vlSymsp->TOP.io_debugDNPC}
    , io_debugin1{vlSymsp->TOP.io_debugin1}
    , io_debugin2{vlSymsp->TOP.io_debugin2}
    , io_debugBranch{vlSymsp->TOP.io_debugBranch}
    , io_debugImm{vlSymsp->TOP.io_debugImm}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vcore::Vcore(const char* _vcname__)
    : Vcore(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcore::~Vcore() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcore___024root___eval_debug_assertions(Vcore___024root* vlSelf);
#endif  // VL_DEBUG
void Vcore___024root___eval_static(Vcore___024root* vlSelf);
void Vcore___024root___eval_initial(Vcore___024root* vlSelf);
void Vcore___024root___eval_settle(Vcore___024root* vlSelf);
void Vcore___024root___eval(Vcore___024root* vlSelf);

void Vcore::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcore::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcore___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vcore___024root___eval_static(&(vlSymsp->TOP));
        Vcore___024root___eval_initial(&(vlSymsp->TOP));
        Vcore___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vcore___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vcore::eventsPending() { return false; }

uint64_t Vcore::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vcore::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vcore___024root___eval_final(Vcore___024root* vlSelf);

VL_ATTR_COLD void Vcore::final() {
    Vcore___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcore::hierName() const { return vlSymsp->name(); }
const char* Vcore::modelName() const { return "Vcore"; }
unsigned Vcore::threads() const { return 1; }
void Vcore::prepareClone() const { contextp()->prepareClone(); }
void Vcore::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vcore::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vcore___024root__trace_decl_types(VerilatedVcd* tracep);

void Vcore___024root__trace_init_top(Vcore___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vcore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcore___024root*>(voidSelf);
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vcore___024root__trace_decl_types(tracep);
    Vcore___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vcore___024root__trace_register(Vcore___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vcore::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vcore::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vcore___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
