// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vbiriscv_mem_top__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vbiriscv_mem_top::Vbiriscv_mem_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vbiriscv_mem_top__Syms(contextp(), _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , rst_ni{vlSymsp->TOP.rst_ni}
    , mem_req_o{vlSymsp->TOP.mem_req_o}
    , mem_we_o{vlSymsp->TOP.mem_we_o}
    , mem_strb_o{vlSymsp->TOP.mem_strb_o}
    , mem_addr_o{vlSymsp->TOP.mem_addr_o}
    , mem_wdata_o{vlSymsp->TOP.mem_wdata_o}
    , mem_rdata_i{vlSymsp->TOP.mem_rdata_i}
    , biriscv_mem_top{vlSymsp->TOP.biriscv_mem_top}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vbiriscv_mem_top::Vbiriscv_mem_top(const char* _vcname__)
    : Vbiriscv_mem_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vbiriscv_mem_top::~Vbiriscv_mem_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vbiriscv_mem_top___024root___eval_debug_assertions(Vbiriscv_mem_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vbiriscv_mem_top___024root___eval_static(Vbiriscv_mem_top___024root* vlSelf);
void Vbiriscv_mem_top___024root___eval_initial(Vbiriscv_mem_top___024root* vlSelf);
void Vbiriscv_mem_top___024root___eval_settle(Vbiriscv_mem_top___024root* vlSelf);
void Vbiriscv_mem_top___024root___eval(Vbiriscv_mem_top___024root* vlSelf);

void Vbiriscv_mem_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vbiriscv_mem_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vbiriscv_mem_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vbiriscv_mem_top___024root___eval_static(&(vlSymsp->TOP));
        Vbiriscv_mem_top___024root___eval_initial(&(vlSymsp->TOP));
        Vbiriscv_mem_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vbiriscv_mem_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vbiriscv_mem_top::eventsPending() { return false; }

uint64_t Vbiriscv_mem_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vbiriscv_mem_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vbiriscv_mem_top___024root___eval_final(Vbiriscv_mem_top___024root* vlSelf);

VL_ATTR_COLD void Vbiriscv_mem_top::final() {
    Vbiriscv_mem_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vbiriscv_mem_top::hierName() const { return vlSymsp->name(); }
const char* Vbiriscv_mem_top::modelName() const { return "Vbiriscv_mem_top"; }
unsigned Vbiriscv_mem_top::threads() const { return 1; }
void Vbiriscv_mem_top::prepareClone() const { contextp()->prepareClone(); }
void Vbiriscv_mem_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vbiriscv_mem_top::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vbiriscv_mem_top___024root__trace_decl_types(VerilatedVcd* tracep);

void Vbiriscv_mem_top___024root__trace_init_top(Vbiriscv_mem_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vbiriscv_mem_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbiriscv_mem_top___024root*>(voidSelf);
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vbiriscv_mem_top___024root__trace_decl_types(tracep);
    Vbiriscv_mem_top___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vbiriscv_mem_top___024root__trace_register(Vbiriscv_mem_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vbiriscv_mem_top::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vbiriscv_mem_top::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vbiriscv_mem_top___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
