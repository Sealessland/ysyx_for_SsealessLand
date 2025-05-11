#include <difftest.h>
#include <mem.h>
#include <dlfcn.h>
#include <iostream>
#include <string>
#include <cassert>
#include <cstdint>
#define ANSI_FG_GREEN "\33[1;32m"
#define ANSI_FMT(str, fmt) fmt str "\33[0m"
#define Log(format, ...) printf(format "\n", ## __VA_ARGS__)
#include<reg.h>

#define RESET_VECTOR 0x80000000     // 复位向量地址
#define DEFAULT_IMG_SIZE (4*1024*1024)  // 默认4MB
#define REGNUM 32
extern uint32_t gpr[REGNUM];        // 声明外部变量
extern const char* regs[];          // 声明外部寄存器名称数组

// 简化版的地址转换函数
void* guest_to_host(uint32_t addr) {
    static std::vector<uint8_t> buffer;

    // 确保缓冲区大小足够
    buffer.resize(DEFAULT_IMG_SIZE);

    // 使用Memory公共接口按字节读取数据
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

// 为差分测试提供一个命名空间
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

// 检查寄存器状态是否匹配
static bool checkRegs(const CPUState* ref_r, Vcore* core) {
    bool match = true;

    // 检查PC是否匹配
    if (ref_r->pc != core->io_debugPC) {
        std::cout<<ref_r->pc<<std::endl;
        match = false;
    }

    // 检查所有通用寄存器是否匹配
    for (int i = 0; i < REGNUM; i++) {
        if (ref_r->gpr[i] != gpr[i]) {
            match = false;
        }
    }

    // 如果不匹配，显示参考模型的状态
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

// 对外提供的函数指针实现
difftest_memcpy_func difftest_memcpy_ref = nullptr;

// 初始化差分测试环境
bool difftest_init(const char* so_file, Vcore* core) {
    if (!so_file) {
        return false;
    }

    // 动态加载参考模型
    void* handle = dlopen(so_file, RTLD_LAZY);
    if (!handle) {
        std::cerr << "无法加载参考模型: " << dlerror() << std::endl;
        return false;
    }

    // 获取必要的函数指针
    difftest::ref_difftest_memcpy = reinterpret_cast<difftest::DiffTestMemcpyFunc>(
        dlsym(handle, "difftest_memcpy"));
    if (!difftest::ref_difftest_memcpy) {
        std::cerr << "无法找到 difftest_memcpy 函数" << std::endl;
        return false;
    }

    difftest::ref_difftest_regcpy = reinterpret_cast<difftest::DiffTestRegcpyFunc>(
        dlsym(handle, "difftest_regcpy"));
    if (!difftest::ref_difftest_regcpy) {
        std::cerr << "无法找到 difftest_regcpy 函数" << std::endl;
        return false;
    }

    difftest::ref_difftest_exec = reinterpret_cast<difftest::DiffTestExecFunc>(
        dlsym(handle, "difftest_exec"));
    if (!difftest::ref_difftest_exec) {
        std::cerr << "无法找到 difftest_exec 函数" << std::endl;
        return false;
    }

    difftest::ref_difftest_raise_intr = reinterpret_cast<difftest::DiffTestRaiseIntrFunc>(
        dlsym(handle, "difftest_raise_intr"));
    if (!difftest::ref_difftest_raise_intr) {
        std::cerr << "无法找到 difftest_raise_intr 函数" << std::endl;
        return false;
    }

    auto ref_difftest_init = reinterpret_cast<difftest::DiffTestInitFunc>(
        dlsym(handle, "difftest_init"));
    if (!ref_difftest_init) {
        std::cerr << "无法找到 difftest_init 函数" << std::endl;
        return false;
    }

    // 设置对外暴露的函数指针
    difftest_memcpy_ref = reinterpret_cast<difftest_memcpy_func>(difftest::ref_difftest_memcpy);

    // 输出日志消息
    Log("差分测试: %s", ANSI_FMT("已启用", ANSI_FG_GREEN));
    Log("每条指令的执行结果将与 %s 进行比较。"
        "这对调试非常有帮助，但会显著降低性能。"
        "如果不需要，可以在配置中关闭。", so_file);

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

// 执行一步差分测试
// 执行一步差分测试
void difftest_step(Vcore* core) {
    std::cout << "diff one step";
    if (!difftest::ref_difftest_memcpy) {
        return;
    }

    // 先获取DUT当前状态
    difftest::CPUState dut_r;
    get_reg(core);  // 获取最新寄存器值

    // 填充DUT状态
    for (int i = 0; i < REGNUM; i++) {
        dut_r.gpr[i] = gpr[i];
    }
    dut_r.pc = core->io_debugPC;

    // 打印调试信息
    std::cout << core->io_debugPC << std::endl;

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
        std::cout << "\n[差分测试失败] PC不匹配：" << std::endl;
        std::cout << "参考PC = 0x" << std::hex << ref_r.pc << std::dec << std::endl;
        std::cout << "DUT PC = 0x" << std::hex << dut_r.pc << std::dec << std::endl;
    }

    // 检查通用寄存器
    for (int i = 0; i < REGNUM; i++) {
        if (ref_r.gpr[i] != dut_r.gpr[i]) {
            match = false;
            std::cout << "\n[差分测试失败] 寄存器 " << regs[i] << " 不匹配：" << std::endl;
            std::cout << "参考 " << regs[i] << " = 0x" << std::hex << ref_r.gpr[i] << std::dec
                      << " (" << (int32_t)ref_r.gpr[i] << ")" << std::endl;
            std::cout << "DUT " << regs[i] << " = 0x" << std::hex << dut_r.gpr[i] << std::dec
                      << " (" << (int32_t)dut_r.gpr[i] << ")" << std::endl;
        }
    }

    // 如果不匹配，显示所有状态
    if (!match) {
        std::cout << "\n======== 完整状态比较 ========" << std::endl;
        std::cout << "参考 PC = 0x" << std::hex << ref_r.pc << std::dec << std::endl;
        std::cout << "DUT PC = 0x" << std::hex << dut_r.pc << std::dec << std::endl;

        std::cout << "\n===== 寄存器状态 =====" << std::endl;
        for (int i = 0; i < REGNUM; i++) {
            std::cout << regs[i] << ":\t";
            std::cout << "参考 = 0x" << std::hex << ref_r.gpr[i] << std::dec;
            std::cout << " | DUT = 0x" << std::hex << dut_r.gpr[i] << std::dec;

            if (ref_r.gpr[i] != dut_r.gpr[i]) {
                std::cout << " [不匹配]";
            }

            if ((i + 1) % 4 == 0) {
                std::cout << std::endl;
            } else {
                std::cout << "\t";
            }
        }
        std::cout << "\n===============================" << std::endl;

        assert(0 && "差分测试失败：寄存器状态不匹配");
    }
}
// 清理差分测试资源
void difftest_cleanup() {
    // 如果需要清理资源，可以在这里实现
}