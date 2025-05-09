//
// Created by sealessland on 25-5-7.
//
#include "include/difftest.h"
#include <dlfcn.h>
#include <iostream>
#include <cstring>
#include <cassert>
#include "include/reg.h"
#include "Vcore.h"

// 定义动态链接函数类型
typedef void (*difftest_memcpy_func)(uint32_t addr, void *buf, size_t n, bool direction);
typedef void (*difftest_regcpy_func)(void *dut, bool direction);
typedef void (*difftest_exec_func)(uint64_t n);
typedef void (*difftest_raise_intr_func)(uint32_t NO);
typedef void (*difftest_init_func)(int port);

// 函数指针
static difftest_memcpy_func difftest_memcpy_ref = nullptr;
static difftest_regcpy_func difftest_regcpy_ref = nullptr;
static difftest_exec_func difftest_exec_ref = nullptr;
static difftest_raise_intr_func difftest_raise_intr_ref = nullptr;
static difftest_init_func difftest_init_ref = nullptr;

// 用于保存REF和DUT的寄存器状态
struct DiffRegs {
    uint32_t gpr[32];
    uint32_t pc;
};

static DiffRegs ref_regs;
static DiffRegs dut_regs;
static void* difftest_handle = nullptr;

// 从处理器获取寄存器状态
void get_dut_regs(Vcore* core, DiffRegs* regs) {
    for (int i = 0; i < 32; i++) {
        regs->gpr[i] = getRegValue(core, i);
    }
    regs->pc = core->io_debugPC;
}

bool difftest_init(const char* so_file, Vcore* core) {
    // 动态加载.so文件
    difftest_handle = dlopen(so_file, RTLD_LAZY);
    if (!difftest_handle) {
        std::cerr << "加载差分测试库失败: " << dlerror() << std::endl;
        return false;
    }

    // 获取函数指针
    difftest_memcpy_ref = (difftest_memcpy_func)dlsym(difftest_handle, "difftest_memcpy");
    difftest_regcpy_ref = (difftest_regcpy_func)dlsym(difftest_handle, "difftest_regcpy");
    difftest_exec_ref = (difftest_exec_func)dlsym(difftest_handle, "difftest_exec");
    difftest_raise_intr_ref = (difftest_raise_intr_func)dlsym(difftest_handle, "difftest_raise_intr");
    difftest_init_ref = (difftest_init_func)dlsym(difftest_handle, "difftest_init");

    // 检查函数是否获取成功
    if (!difftest_memcpy_ref || !difftest_regcpy_ref || !difftest_exec_ref ||
        !difftest_raise_intr_ref || !difftest_init_ref) {
        std::cerr << "获取函数指针失败: " << dlerror() << std::endl;
        dlclose(difftest_handle);
        return false;
    }

    // 初始化参考模型
    difftest_init_ref(0);

    // 初始化DUT寄存器状态
    memset(&dut_regs, 0, sizeof(dut_regs));
    get_dut_regs(core, &dut_regs);

    // 将初始状态同步到参考模型
    difftest_regcpy_ref(&dut_regs, 1);  // 1表示从DUT到REF

    std::cout << "差分测试初始化成功" << std::endl;
    return true;
}

void difftest_step(Vcore* core) {
    // 执行一步参考模型
    difftest_exec_ref(1);

    // 获取参考模型状态
    memset(&ref_regs, 0, sizeof(ref_regs));
    difftest_regcpy_ref(&ref_regs, 0);  // 0表示从REF到DUT

    // 获取DUT状态
    get_dut_regs(core, &dut_regs);

    // 比较状态
    bool passed = true;
    for (int i = 0; i < 32; i++) {
        if (ref_regs.gpr[i] != dut_regs.gpr[i]) {
            printf("寄存器 %s 不匹配: REF=%#x, DUT=%#x\n",
                   getRegName(i).c_str(), ref_regs.gpr[i], dut_regs.gpr[i]);
            passed = false;
        }
    }

    if (ref_regs.pc != dut_regs.pc) {
        printf("PC 不匹配: REF=%#x, DUT=%#x\n", ref_regs.pc, dut_regs.pc);
        passed = false;
    }

    if (passed) {
        printf("差分测试通过: PC=%#x\n", dut_regs.pc);
    } else {
        printf("差分测试失败\n");
    }
}

void difftest_cleanup() {
    if (difftest_handle) {
        dlclose(difftest_handle);
        difftest_handle = nullptr;
    }
}