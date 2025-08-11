#include <difftest.h>
#include <mem.h>
#include <dlfcn.h>
#include <iostream>
#include <string>
#include <vector>
#include <states.h>
#include <cassert>
#include <cstdint>
#include "include/device.h"
#include <reg.h>

// -------------------- ANSI Color and Logging Macros --------------------
#define ANSI_FG_RED     "\33[1;31m"
#define ANSI_FG_GREEN   "\33[1;32m"
#define ANSI_FG_YELLOW  "\33[1;33m"
#define ANSI_FG_BLUE    "\33[1;34m"
#define ANSI_FG_MAGENTA "\33[1;35m"
#define ANSI_FG_CYAN    "\33[1;36m"
#define ANSI_FG_WHITE   "\33[1;37m"
#define ANSI_BG_RED     "\33[1;41m"
#define ANSI_RESET      "\33[0m"
#define ANSI_BOLD       "\33[1m"
#define ANSI_FMT(str, fmt) fmt str ANSI_RESET
#define Log(format, ...) printf(format "\n", ## __VA_ARGS__)
#define LogError(format, ...) printf(ANSI_FG_RED "[ERROR] " format ANSI_RESET "\n", ## __VA_ARGS__)
#define LogWarn(format, ...) printf(ANSI_FG_YELLOW "[WARN] " format ANSI_RESET "\n", ## __VA_ARGS__)
#define LogInfo(format, ...) printf(ANSI_FG_CYAN "[INFO] " format ANSI_RESET "\n", ## __VA_ARGS__)
#define LogSuccess(format, ...) printf(ANSI_FG_GREEN "[SUCCESS] " format ANSI_RESET "\n", ## __VA_ARGS__)

// -------------------- System Constants and Externs --------------------
#define RESET_VECTOR 0x80000000
#define DEFAULT_IMG_SIZE (4*1024*1024)
#define REGNUM 32

extern uint32_t gpr[REGNUM];
extern const char* regs[];
extern CPU_State cpu_state;
extern void get_reg(Vcore* core);

// -------------------- Forward Declarations for Print Functions --------------------
static void print_difftest_init_start(const char* so_file);
static void print_difftest_init_success();
static void print_pc_mismatch(uint32_t ref_pc, uint32_t dut_pc);
static void print_register_mismatches(const std::vector<int>& mismatch_regs,
                                     const uint32_t* ref_gpr, const uint32_t* dut_gpr);
static void print_difftest_success();
static void print_complete_state_comparison(uint32_t ref_pc, uint32_t dut_pc,
                                          const uint32_t* ref_gpr, const uint32_t* dut_gpr);
static void print_difftest_failure();

// -------------------- Helper Functions --------------------
void* guest_to_host(uint32_t addr) {
    static std::vector<uint8_t> buffer;
    buffer.resize(DEFAULT_IMG_SIZE);
    for (size_t i = 0; i < DEFAULT_IMG_SIZE; i++) {
        buffer[i] = get_memory().read(addr + i, 1) & 0xFF;
    }
    return buffer.data();
}

// ======================== Difftest Internal Implementation ========================
namespace difftest {

    struct CPUState {
        uint32_t gpr[32];
        uint32_t pc;
    };

    // MODIFIED: Update function pointer types
    using DiffTestMemcpyFunc = void (*)(uint32_t addr, void *buf, uint32_t n, bool direction);
    using DiffTestRegcpyFunc = void (*)(void *dut, bool direction);
    using DiffTestExecFunc   = void (*)(uint64_t n);
    using DiffTestRaiseIntrFunc = void (*)(uint64_t NO);
    using DiffTestSkip       = bool (*)(); // <-- CRITICAL CHANGE: Returns bool
    using DiffTestInitFunc   = void (*)();

    enum DiffTestDirection {
        DIFFTEST_TO_DUT = 0,
        DIFFTEST_TO_REF = 1
    };

    // Internal function pointers with updated types
    static DiffTestMemcpyFunc ref_difftest_memcpy = nullptr;
    static DiffTestRegcpyFunc ref_difftest_regcpy = nullptr;
    static DiffTestExecFunc   ref_difftest_exec   = nullptr;
    static DiffTestRaiseIntrFunc ref_difftest_raise_intr = nullptr;
    static DiffTestSkip       ref_difftest_skip   = nullptr; // <-- CRITICAL CHANGE: Type is now bool (*)()

    // Internal check function remains the same
    static bool checkRegs(const CPUState* ref_r, Vcore* core) {
        get_reg(core);
        if (ref_r->pc != core->io_debugPC) return false;
        for (int i = 0; i < REGNUM; i++) {
            if (ref_r->gpr[i] != gpr[i]) return false;
        }
        return true;
    }

} // namespace difftest

// ======================== Public API Implementation ========================

bool difftest_init(const char* so_file, Vcore* core) {
    if (!so_file) {
        LogError("差分测试文件路径为空");
        return false;
    }
    print_difftest_init_start(so_file);

    void* handle = dlopen(so_file, RTLD_LAZY);
    if (!handle) {
        LogError("无法加载参考模型: %s", dlerror());
        return false;
    }

    // Load function pointers from the shared library
    difftest::ref_difftest_memcpy = (difftest::DiffTestMemcpyFunc)dlsym(handle, "difftest_memcpy");
    difftest::ref_difftest_regcpy = (difftest::DiffTestRegcpyFunc)dlsym(handle, "difftest_regcpy");
    difftest::ref_difftest_exec = (difftest::DiffTestExecFunc)dlsym(handle, "difftest_exec");
    difftest::ref_difftest_raise_intr = (difftest::DiffTestRaiseIntrFunc)dlsym(handle, "difftest_raise_intr");
    difftest::ref_difftest_skip = (difftest::DiffTestSkip)dlsym(handle, "difftest_skip");
    auto ref_difftest_init = (difftest::DiffTestInitFunc)dlsym(handle, "difftest_init");

    // Check if all functions were loaded successfully
    if (!difftest::ref_difftest_memcpy || !difftest::ref_difftest_regcpy || !difftest::ref_difftest_exec ||
        !difftest::ref_difftest_raise_intr || !difftest::ref_difftest_skip || !ref_difftest_init) {
        LogError("无法从参考模型加载所有必要的difftest函数");
        dlclose(handle);
        return false;
    }

    print_difftest_init_success();

    // Initialize the reference model and sync initial state
    ref_difftest_init();
    difftest::ref_difftest_memcpy(RESET_VECTOR, guest_to_host(RESET_VECTOR), DEFAULT_IMG_SIZE, difftest::DIFFTEST_TO_REF);

    difftest::CPUState initial_dut_state;
    get_reg(core);
    for(int i=0; i<REGNUM; ++i) initial_dut_state.gpr[i] = gpr[i];
    initial_dut_state.pc = core->io_debugPC;
    difftest::ref_difftest_regcpy(&initial_dut_state, difftest::DIFFTEST_TO_REF);

    return true;
}

// MODIFIED: Public wrapper for the skip function, now returns bool
bool difftest_skip() {
    if (difftest::ref_difftest_skip) {
        return difftest::ref_difftest_skip();
    }
    return false; // Default to not skipping if uninitialized
}

// MODIFIED: Complete rewrite of difftest_step to implement the new strategy
void difftest_step(Vcore* core) {
    if (!difftest::ref_difftest_exec) {
        return; // Not initialized
    }

    // 1. Let the reference model (NEMU) execute one instruction
    difftest::ref_difftest_exec(1);

    // 2. Check if the reference model has requested to skip comparison
    //    (This happens if NEMU encountered an MMIO access)
    if (difftest_skip()) {
        // 3.A. STATE ROLLBACK: REF requested a skip.
        // Get DUT's latest state and force it upon the REF to re-synchronize.
        difftest::CPUState dut_latest_state;
        get_reg(core);
        for (int i = 0; i < REGNUM; i++) {
            dut_latest_state.gpr[i] = gpr[i];
        }
        dut_latest_state.pc = core->io_debugPC;

        difftest::ref_difftest_regcpy(&dut_latest_state, difftest::DIFFTEST_TO_REF);
        return; // Skip comparison for this cycle
    }

    // 3.B. NORMAL COMPARISON: REF did not request a skip.
    // Get REF's state after its execution for comparison.
    difftest::CPUState ref_state;
    difftest::ref_difftest_regcpy(&ref_state, difftest::DIFFTEST_TO_DUT);

    // Compare REF's state with DUT's current state.
    if (difftest::checkRegs(&ref_state, core)) {
        // Match: States are identical.
        // print_difftest_success(); // Uncomment for verbose success messages
    } else {
        // Mismatch: States differ. Print detailed diagnostics and abort.
        get_reg(core); // Ensure global gpr is fresh for printing
        std::vector<int> mismatch_regs;
        for(int i=0; i<REGNUM; ++i) if(ref_state.gpr[i] != gpr[i]) mismatch_regs.push_back(i);

        if (ref_state.pc != core->io_debugPC) print_pc_mismatch(ref_state.pc, core->io_debugPC);
        if (!mismatch_regs.empty()) print_register_mismatches(mismatch_regs, ref_state.gpr, gpr);

        print_complete_state_comparison(ref_state.pc, core->io_debugPC, ref_state.gpr, gpr);
        print_difftest_failure();
        cpu_state.state = CPU_STATES::CPU_ABORT;
        cpu_state.halt_ret = 1;
    }
}

void difftest_cleanup() {
    // Placeholder for cleanup logic (e.g., dlclose(handle)) if needed.
}

// ======================== Print Function Implementations ========================

static void print_difftest_init_start(const char* so_file) {
    printf(ANSI_FG_CYAN "🚀 初始化差分测试环境..." ANSI_RESET "\n");
    printf("   加载参考模型: %s\n", so_file);
}

static void print_difftest_init_success() {
    LogSuccess("✅ 差分测试环境初始化完成");
}

static void print_pc_mismatch(uint32_t ref_pc, uint32_t dut_pc) {
    printf(ANSI_BG_RED ANSI_FG_WHITE " ❌ PC不匹配 " ANSI_RESET "\n");
    printf("   参考PC: " ANSI_FG_GREEN "0x%08x" ANSI_RESET "  |  DUT PC: " ANSI_FG_RED "0x%08x" ANSI_RESET "\n", ref_pc, dut_pc);
}

static void print_register_mismatches(const std::vector<int>& mismatch_regs,
                                     const uint32_t* ref_gpr, const uint32_t* dut_gpr) {
    printf(ANSI_BG_RED ANSI_FG_WHITE " ❌ 寄存器不匹配 " ANSI_RESET "\n");
    for (int i : mismatch_regs) {
        printf("   %-4s -> 参考: " ANSI_FG_GREEN "0x%08x" ANSI_RESET "  |  DUT: " ANSI_FG_RED "0x%08x" ANSI_RESET "\n",
               regs[i], ref_gpr[i], dut_gpr[i]);
    }
}

static void print_difftest_success() {
    // Intentionally left blank to avoid flooding the console.
    // Uncomment for verbose success messages.
    // LogSuccess("✅ 差分测试通过");
}

static void print_complete_state_comparison(uint32_t ref_pc, uint32_t dut_pc,
                                          const uint32_t* ref_gpr, const uint32_t* dut_gpr) {
    printf("\n" ANSI_BOLD "════════════════ 完整状态对比 ════════════════" ANSI_RESET "\n");
    printf("┌──────┬────────────┬────────────┬──────┐\n");
    printf("│ Reg  │    REF     │    DUT     │ Match│\n");
    printf("├──────┼────────────┼────────────┼──────┤\n");

    const char* pc_status_color = (ref_pc == dut_pc) ? ANSI_FG_GREEN : ANSI_FG_RED;
    printf("│ %-4s │ " ANSI_FG_CYAN "0x%08x" ANSI_RESET " │ " ANSI_FG_CYAN "0x%08x" ANSI_RESET " │ %s  %c  " ANSI_RESET "│\n",
           "pc", ref_pc, dut_pc, pc_status_color, (ref_pc == dut_pc) ? '✓' : '✗');

    for (int i = 0; i < REGNUM; i++) {
        const char* status_color = (ref_gpr[i] == dut_gpr[i]) ? ANSI_FG_GREEN : ANSI_FG_RED;
        printf("│ %-4s │ " ANSI_FG_CYAN "0x%08x" ANSI_RESET " │ " ANSI_FG_CYAN "0x%08x" ANSI_RESET " │ %s  %c  " ANSI_RESET "│\n",
               regs[i], ref_gpr[i], dut_gpr[i], status_color, (ref_gpr[i] == dut_gpr[i]) ? '✓' : '✗');
    }
    printf("└──────┴────────────┴────────────┴──────┘\n");
}

static void print_difftest_failure() {
    printf("\n" ANSI_BG_RED ANSI_FG_WHITE " 差分测试失败：CPU状态不匹配 " ANSI_RESET "\n");
    printf(ANSI_FG_RED "🚫 仿真中断." ANSI_RESET "\n\n");
}