#include <difftest.h>
#include <mem.h>
#include <dlfcn.h>
#include <iostream>
#include <string>
#include <beauty.h>
#include <vector>
#include <states.h>
#include <cassert>
#include <cstdint>
#include "include/device.h"
#include <reg.h>
#define RESET_VECTOR 0x80000000
#define DEFAULT_IMG_SIZE (4*1024*1024)
#define REGNUM 32

struct refContext
{
    uint32_t gpr[32];
    uint32_t pc;
    uint32_t csr[4096];
};

struct dutContext
{
    uint32_t gpr[32];
    uint32_t pc;
    uint32_t csr[4096];
};

using DiffTestMemcpyFunc = void (*)(uint32_t addr, void *buf, uint32_t n, bool direction);
using DiffTestRegcpyFunc = void (*)(void *dut, bool direction);
using DiffTestExecFunc   = void (*)(uint64_t n);
using DiffTestRaiseIntrFunc = void (*)(uint64_t NO);
using DiffTestSkip       = bool (*)(); // <-- CRITICAL CHANGE: Returns bool
using DiffTestInitFunc   = void (*)();
static DiffTestMemcpyFunc ref_difftest_memcpy = nullptr;
static DiffTestRegcpyFunc ref_difftest_regcpy = nullptr;
static DiffTestExecFunc   ref_difftest_exec   = nullptr;
static DiffTestRaiseIntrFunc ref_difftest_raise_intr = nullptr;
static DiffTestSkip       ref_difftest_skip   = nullptr;
struct MismatchInfo
{
    std::string reg_name;
    uint32_t ref_value;
    uint32_t dut_value;
};
std::vector<MismatchInfo> checkRegs(refContext ref , dutContext dut)
{   std::vector<MismatchInfo> mismatch;
    if (ref.pc!=dut.pc)
    {mismatch.push_back(MismatchInfo{"pc", ref.pc, dut.pc});}
    for (int i = 0; i < REGNUM; i++)
    {if (ref.gpr[i]!=dut.gpr[i])
    {mismatch.push_back(MismatchInfo{GPR_NAMES[i]+std::to_string(i), ref.gpr[i], dut.gpr[i]});}
    if (ref.csr[i]!=dut.csr[i])
    {mismatch.push_back(MismatchInfo{CSR_NAMES[i]+std::to_string(i), ref.csr[i], dut.csr[i]});}}
}
bool reportMismatches(const std::vector<MismatchInfo>& mismatches)
{
    if (mismatches.empty()) {
        LogSuccess("✅ 差分测试通过: 所有状态匹配。");
        return true;
    }
    printf("\n" ANSI_BG_RED ANSI_FG_WHITE ANSI_BOLD " 差分测试失败：CPU状态不匹配 " ANSI_RESET "\n");
    Log(ANSI_BOLD "═══════════════════ 状态差异详情 ═══════════════════" ANSI_RESET);
    Log("┌──────────┬────────────┬────────────┬────────┐");
    Log("│ Register │    REF     │    DUT     │ Status │");
    Log("├──────────┼────────────┼────────────┼────────┤");
    for (const auto& info : mismatches) {
        Log("│ %-8s │ " ANSI_FG_CYAN "0x%08x" ANSI_RESET " │ " ANSI_FG_CYAN "0x%08x" ANSI_RESET " │ " ANSI_FG_RED "   ✗   " ANSI_RESET "│",
            info.reg_name.c_str(), info.ref_value, info.dut_value);
    }
    Log("└──────────┴────────────┴────────────┴────────┘");
    LogError("🚫 仿真中断.");
    printf("\n"); // 额外加一个换行，让格式更美观
    return false;
}
void* guest_to_host(uint32_t addr) {
    static std::vector<uint8_t> buffer;
    buffer.resize(DEFAULT_IMG_SIZE);
    for (size_t i = 0; i < DEFAULT_IMG_SIZE; i++) {
        buffer[i] = get_memory().read(addr + i, 1) & 0xFF;
    }
    return buffer.data();
}

bool difftest_init(const char* so_file, dutContext dut) {
    if (!so_file) {
        LogError("差分测试文件路径为空");
        return false;
    }
    void* handle = dlopen(so_file, RTLD_LAZY);
    if (!handle) {
        LogError("无法加载参考模型: %s", dlerror());
        return false;
    }
ref_difftest_memcpy = (DiffTestMemcpyFunc)dlsym(handle, "difftest_memcpy");
ref_difftest_regcpy = (DiffTestRegcpyFunc)dlsym(handle, "difftest_regcpy");
ref_difftest_exec = (DiffTestExecFunc)dlsym(handle, "difftest_exec");
ref_difftest_raise_intr = (DiffTestRaiseIntrFunc)dlsym(handle, "difftest_raise_intr");
ref_difftest_skip = (DiffTestSkip)dlsym(handle, "difftest_skip");
    auto ref_difftest_init = (DiffTestInitFunc)dlsym(handle, "difftest_init");
    if (ref_difftest_memcpy || ref_difftest_regcpy || ref_difftest_exec ||
      ref_difftest_raise_intr || ref_difftest_skip || !ref_difftest_init) {
        LogError("无法从参考模型加载所有必要的difftest函数");
        dlclose(handle);
        return false;
        }
    ref_difftest_init();
ref_difftest_memcpy(RESET_VECTOR, guest_to_host(RESET_VECTOR), DEFAULT_IMG_SIZE, DIFFTEST_TO_REF);
    ref_difftest_regcpy(&dut, DIFFTEST_TO_REF);
    return true;
}
bool difftest_skip() {
    if (ref_difftest_skip) {
        return ref_difftest_skip();
    }
    return false;
}

void difftest_step(dutContext dut) {
    if (ref_difftest_exec) {
        return;
    }

    ref_difftest_exec(1);
        if (difftest_skip()) {
    ref_difftest_regcpy(&dut, DIFFTEST_TO_REF);
        return; // Skip comparison for this cycle
    }
    refContext ref;

    ref_difftest_regcpy(&ref,DIFFTEST_TO_DUT);

    // Compare REF's state with DUT's current state.
    if (checkRegs(ref, dut)) {
        cpu_state.state = CPU_STATES::CPU_ABORT;
        cpu_state.halt_ret = 1;
    }
}