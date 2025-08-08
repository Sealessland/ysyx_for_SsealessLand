#include <difftest.h>
#include <mem.h>
#include <dlfcn.h>
#include <iostream>
#include <string>
#include <states.h>
#include <cassert>
#include <cstdint>
#include "include/device.h"

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

// 增强的格式化宏
#define ANSI_FMT(str, fmt) fmt str ANSI_RESET
#define Log(format, ...) printf(format "\n", ## __VA_ARGS__)

// 美化的Log宏
#define LogError(format, ...) printf(ANSI_FG_RED "[ERROR] " format ANSI_RESET "\n", ## __VA_ARGS__)
#define LogWarn(format, ...) printf(ANSI_FG_YELLOW "[WARN] " format ANSI_RESET "\n", ## __VA_ARGS__)
#define LogInfo(format, ...) printf(ANSI_FG_CYAN "[INFO] " format ANSI_RESET "\n", ## __VA_ARGS__)
#define LogSuccess(format, ...) printf(ANSI_FG_GREEN "[SUCCESS] " format ANSI_RESET "\n", ## __VA_ARGS__)

#include <reg.h>

// 系统常量定义
#define RESET_VECTOR 0x80000000
#define DEFAULT_IMG_SIZE (4*1024*1024)
#define REGNUM 32

// 外部变量声明
extern uint32_t gpr[REGNUM];
extern const char* regs[];

// 跳过标志

// 打印函数声明
static void print_difftest_init_start(const char* so_file);
static void print_difftest_init_success();
static void print_difftest_step_start(int step_count);
static void print_current_pc(uint32_t pc);
static void print_sync_dut_state();
static void print_pc_mismatch(uint32_t ref_pc, uint32_t dut_pc);
static void print_register_mismatches(const std::vector<int>& mismatch_regs, 
                                     const uint32_t* ref_gpr, const uint32_t* dut_gpr);
static void print_difftest_success();
static void print_complete_state_comparison(uint32_t ref_pc, uint32_t dut_pc, 
                                          const uint32_t* ref_gpr, const uint32_t* dut_gpr);
static void print_difftest_failure();

// 简化版的地址转换函数
void* guest_to_host(uint32_t addr) {
    static std::vector<uint8_t> buffer;
    buffer.resize(DEFAULT_IMG_SIZE);

    for (size_t i = 0; i < DEFAULT_IMG_SIZE; i++) {
        uint8_t value = get_memory().read(addr + i, 1) & 0xFF;
        buffer[i] = value;
    }

    return buffer.data();
}

// 内存跟踪相关定义
#define READ 1
#define WRITE 0
char mtrace[128] = {0};
void record_mem_trace(int rw, uint32_t addr, int len) {
    char *m = mtrace;
    if (rw == READ)
        m += sprintf(m, "READ  ");
    else
        m += sprintf(m, "WRITE ");
    m += sprintf(m, "%dbyte/mask in %#x", len, addr);
}

// ======================== 差分测试命名空间 ========================
namespace difftest {

// CPU状态结构体
struct CPUState {
    uint32_t gpr[32];
    uint32_t pc;
};

// 函数指针类型定义
using DiffTestMemcpyFunc = void (*)(uint32_t addr, void *buf, uint32_t n, bool direction);
using DiffTestRegcpyFunc = void (*)(void *dut, bool direction);
using DiffTestExecFunc = void (*)(uint64_t n);
using DiffTestRaiseIntrFunc = void (*)(uint64_t NO);
using DiffTestSkip = void (*)();
using DiffTestInitFunc = void (*)();

// 差分测试方向枚举
enum DiffTestDirection {
    DIFFTEST_TO_DUT = 0,
    DIFFTEST_TO_REF = 1
};

// 函数指针
static DiffTestMemcpyFunc ref_difftest_memcpy = nullptr;
static DiffTestRegcpyFunc ref_difftest_regcpy = nullptr;
static DiffTestExecFunc ref_difftest_exec = nullptr;
static DiffTestRaiseIntrFunc ref_difftest_raise_intr = nullptr;
static DiffTestSkip ref_difftest_skip = nullptr;

// 检查寄存器状态是否匹配
static bool checkRegs(const CPUState* ref_r, Vcore* core) {
    bool match = true;

    if (ref_r->pc != core->io_debugPC) {
        std::cout << ref_r->pc << std::endl;
        match = false;
    }

    for (int i = 0; i < REGNUM; i++) {
        if (ref_r->gpr[i] != gpr[i]) {
            match = false;
        }
    }

    if (!match) {
        std::cout << "ref-pc=" << std::hex << ref_r->pc << std::dec << std::endl;
        for (int i = 0; i < REGNUM; i++) {
            if (ref_r->gpr[i] >= 0x80000000) {
                std::cout << "ref-" << regs[i] << " = 0x" << std::hex << ref_r->gpr[i] << std::dec;
            } else {
                std::cout << "ref-" << regs[i] << " = " << ref_r->gpr[i];
            }

            if (i % 3 == 0) {
                std::cout << std::endl;
            } else {
                std::cout << "\t";
            }
        }
        std::cout << std::endl;
    }

    return match;
}

} // namespace difftest

// ======================== 导出函数 ========================

// 对外提供的函数指针实现
difftest_memcpy_func difftest_memcpy_ref = nullptr;

// 差分测试跳过函数


bool difftest_init(const char* so_file, Vcore* core) {
    if (!so_file) {
        LogError("差分测试文件路径为空");
        return false;
    }

    print_difftest_init_start(so_file);

    // 动态加载参考模型
    void* handle = dlopen(so_file, RTLD_LAZY);
    if (!handle) {
        LogError("无法加载参考模型: %s", dlerror());
        return false;
    }

    // 获取必要的函数指针
    difftest::ref_difftest_memcpy = reinterpret_cast<difftest::DiffTestMemcpyFunc>(
        dlsym(handle, "difftest_memcpy"));
    if (!difftest::ref_difftest_memcpy) {
        LogError("无法找到 difftest_memcpy 函数");
        return false;
    }

    difftest::ref_difftest_regcpy = reinterpret_cast<difftest::DiffTestRegcpyFunc>(
        dlsym(handle, "difftest_regcpy"));
    if (!difftest::ref_difftest_regcpy) {
        LogError("无法找到 difftest_regcpy 函数");
        return false;
    }

    difftest::ref_difftest_exec = reinterpret_cast<difftest::DiffTestExecFunc>(
        dlsym(handle, "difftest_exec"));
    if (!difftest::ref_difftest_exec) {
        LogError("无法找到 difftest_exec 函数");
        return false;
    }

    difftest::ref_difftest_raise_intr = reinterpret_cast<difftest::DiffTestRaiseIntrFunc>(
        dlsym(handle, "difftest_raise_intr"));
    if (!difftest::ref_difftest_raise_intr) {
        LogError("无法找到 difftest_raise_intr 函数");
        return false;
    }

    auto ref_difftest_init = reinterpret_cast<difftest::DiffTestInitFunc>(
        dlsym(handle, "difftest_init"));
    if (!ref_difftest_init) {
        LogError("无法找到 difftest_init 函数");
        return false;
    }

    // 设置对外暴露的函数指针
    difftest_memcpy_ref = reinterpret_cast<difftest_memcpy_func>(difftest::ref_difftest_memcpy);

    print_difftest_init_success();

    // 初始化参考模型
    ref_difftest_init();

    // 复制内存和寄存器状态到参考模型
    difftest::ref_difftest_memcpy(RESET_VECTOR,
                      const_cast<void*>(guest_to_host(RESET_VECTOR)),
                      DEFAULT_IMG_SIZE,
                      difftest::DIFFTEST_TO_REF);

    difftest::ref_difftest_regcpy(&gpr, difftest::DIFFTEST_TO_REF);

    return true;
}

// ======================== 差分测试执行 ========================

void difftest_step(Vcore* core) {
    static int step_count = 0;
    step_count++;
    
    if (!difftest::ref_difftest_memcpy) {

       // LogWarn("差分测试未初始化");
        return;
    }

    
    print_difftest_step_start(step_count);

    // 先获取DUT当前状态
    difftest::CPUState dut_r;
    get_reg(core);

    // 填充DUT状态
    for (int i = 0; i < REGNUM; i++) {
        dut_r.gpr[i] = gpr[i];
    }
    dut_r.pc = core->io_debugPC;

    print_current_pc(core->io_debugPC);

    // 让参考模型执行一步
    difftest::ref_difftest_exec(1);

    // 从参考模型获取状态
    difftest::CPUState ref_r;
    difftest::ref_difftest_regcpy(&ref_r, difftest::DIFFTEST_TO_DUT);

    // 检查结果并输出详细的错误信息
    bool match = true;

    // 检查PC
    if (ref_r.pc != dut_r.pc) {
        match = false;
        print_pc_mismatch(ref_r.pc, dut_r.pc);
    }

    // 检查通用寄存器
    std::vector<int> mismatch_regs;
    for (int i = 0; i < REGNUM; i++) {
        if (ref_r.gpr[i] != dut_r.gpr[i]) {
            mismatch_regs.push_back(i);
            match = false;
        }
    }

    // 如果有寄存器不匹配，显示详细信息
    if (!mismatch_regs.empty()) {
        print_register_mismatches(mismatch_regs, ref_r.gpr, dut_r.gpr);
    }

    // 如果完全匹配，显示成功信息
    if (match) {
        print_difftest_success();
        return;
    }

    // 如果不匹配，显示完整状态对比
    print_complete_state_comparison(ref_r.pc, dut_r.pc, ref_r.gpr, dut_r.gpr);
    print_difftest_failure();

    // 设置CPU状态
    cpu_state.state = CPU_STATES::CPU_ABORT;
    cpu_state.halt_ret = 1;
}

// 清理差分测试资源
void difftest_cleanup() {
    // 如果需要清理资源，可以在这里实现
}

// ======================== 打印函数实现 ========================

static void print_difftest_init_start(const char* so_file) {
    printf(ANSI_FG_CYAN "🚀 初始化差分测试环境..." ANSI_RESET "\n");
    printf("📁 加载参考模型: %s\n", so_file);
}

static void print_difftest_init_success() {
    LogSuccess("差分测试环境初始化完成");
    printf("🔍 每条指令将与参考模型进行对比\n");
    printf("⚠️  " ANSI_FG_YELLOW "注意: 差分测试会显著降低性能" ANSI_RESET "\n");
}

static void print_difftest_step_start(int step_count) {
    printf(ANSI_FG_CYAN "🔄 差分测试步骤 %d" ANSI_RESET "\n", step_count);
}

static void print_current_pc(uint32_t pc) {
    printf(ANSI_FG_BLUE "📍 当前PC: " ANSI_BOLD "0x%08x" ANSI_RESET "\n", pc);
}


static void print_sync_dut_state() {
    LogInfo("已同步DUT状态到参考模型");
}

static void print_pc_mismatch(uint32_t ref_pc, uint32_t dut_pc) {
    printf(ANSI_BG_RED ANSI_FG_WHITE " ❌ PC不匹配 " ANSI_RESET "\n");
    printf("┌─────────────────────────────────┐\n");
    printf("│ " ANSI_FG_YELLOW "参考PC" ANSI_RESET " = " ANSI_FG_GREEN "0x%08x" ANSI_RESET " │\n", ref_pc);
    printf("│ " ANSI_FG_YELLOW "DUT PC" ANSI_RESET " = " ANSI_FG_RED "0x%08x" ANSI_RESET " │\n", dut_pc);
    printf("└─────────────────────────────────┘\n");
}

static void print_register_mismatches(const std::vector<int>& mismatch_regs, 
                                     const uint32_t* ref_gpr, const uint32_t* dut_gpr) {
    printf(ANSI_BG_RED ANSI_FG_WHITE " ❌ 寄存器不匹配 " ANSI_RESET "\n");
    for (int i : mismatch_regs) {
        printf("┌─────────────────────────────────────────────┐\n");
        printf("│ " ANSI_FG_CYAN "寄存器 %s" ANSI_RESET " 不匹配                    │\n", regs[i]);
        printf("│ " ANSI_FG_YELLOW "参考值" ANSI_RESET " = " ANSI_FG_GREEN "0x%08x" ANSI_RESET " (%d)          │\n", 
               ref_gpr[i], (int32_t)ref_gpr[i]);
        printf("│ " ANSI_FG_YELLOW "DUT值 " ANSI_RESET " = " ANSI_FG_RED "0x%08x" ANSI_RESET " (%d)          │\n", 
               dut_gpr[i], (int32_t)dut_gpr[i]);
        printf("└─────────────────────────────────────────────┘\n");
    }
}

static void print_difftest_success() {
    printf(ANSI_FG_GREEN "✅ 差分测试通过" ANSI_RESET "\n");
}

static void print_complete_state_comparison(uint32_t ref_pc, uint32_t dut_pc, 
                                          const uint32_t* ref_gpr, const uint32_t* dut_gpr) {
    printf("\n" ANSI_BOLD "════════════════ 完整状态对比 ════════════════" ANSI_RESET "\n");
    
    // PC对比
    printf(ANSI_FG_YELLOW "PC状态:" ANSI_RESET "\n");
    printf("  参考PC = " ANSI_FG_GREEN "0x%08x" ANSI_RESET "\n", ref_pc);
    printf("  DUT PC = " ANSI_FG_RED "0x%08x" ANSI_RESET "\n", dut_pc);
    
    printf("\n" ANSI_FG_YELLOW "寄存器状态:" ANSI_RESET "\n");
    printf("┌──────┬──────────────┬──────────────┬────────┐\n");
    printf("│ 寄存器 │    参考值      │    DUT值     │  状态  │\n");
    printf("├──────┼──────────────┼──────────────┼────────┤\n");
    
    for (int i = 0; i < REGNUM; i++) {
        const char* status_color = (ref_gpr[i] == dut_gpr[i]) ? ANSI_FG_GREEN : ANSI_FG_RED;
        const char* status_text = (ref_gpr[i] == dut_gpr[i]) ? "  ✓   " : "  ✗   ";
        
        printf("│ %-4s │ " ANSI_FG_CYAN "0x%08x" ANSI_RESET " │ " ANSI_FG_CYAN "0x%08x" ANSI_RESET " │ %s%s" ANSI_RESET " │\n",
               regs[i], ref_gpr[i], dut_gpr[i], status_color, status_text);
    }
    printf("└──────┴──────────────┴──────────────┴────────┘\n");
}

static void print_difftest_failure() {
    printf(ANSI_BG_RED ANSI_FG_WHITE " 差分测试失败：CPU状态不匹配 " ANSI_RESET "\n");
    printf(ANSI_FG_RED "🚫 执行中断，状态码: 3" ANSI_RESET "\n");
}
