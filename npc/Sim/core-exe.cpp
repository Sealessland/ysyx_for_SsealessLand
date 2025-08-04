//
// Created by sealessland on 25-4-30.
//

#include "include/core-exe.h"

#include <algorithm>

#include "include/disasm.h"  // 添加反汇编头文件
#include <iostream>
#include <iomanip>
#include <Vcore.h>
#include "verilated.h"
#include<states.h>

#include "include/difftest.h"
#ifdef DIFFTEST
#include "include/difftest.h"
#endif

// 颜色定义
#define ANSI_FG_RED     "\33[1;31m"
#define ANSI_FG_GREEN   "\33[1;32m"
#define ANSI_FG_YELLOW  "\33[1;33m"
#define ANSI_FG_BLUE    "\33[1;34m"
#define ANSI_FG_MAGENTA "\33[1;35m"
#define ANSI_FG_CYAN    "\33[1;36m"
#define ANSI_FG_WHITE   "\33[1;37m"
#define ANSI_RESET      "\33[0m"
#define ANSI_BOLD       "\33[1m"



CoreExecutor::CoreExecutor() : core(nullptr), tfp(nullptr), sim_time(0) {}

CoreExecutor::~CoreExecutor() {
    finalize();
}

bool CoreExecutor::initialize(const CoreConfig& cfg) {
    // 初始化Verilator
    Verilated::traceEverOn(true);

    // 创建core模块实例
    core = new Vcore();
    core->clock = 0;
    core->reset = 1;  // 开始时处于复位状态

    // 设置波形追踪
    tfp = new VerilatedVcdC;
    core->trace(tfp, 99);  // 跟踪99级深度
    tfp->open(cfg.wave_file.c_str());

#ifdef ITRACE
    std::cout << ANSI_FG_GREEN "🚀 Core仿真初始化完成" ANSI_RESET << std::endl;
    std::cout << ANSI_FG_CYAN "📊 波形文件: " << cfg.wave_file << ANSI_RESET << std::endl;

    // 执行复位周期
    std::cout << ANSI_FG_YELLOW "🔄 执行复位周期..." ANSI_RESET << std::endl;
#endif

    for (int i = 0; i < 20; i++) {
        toggle_clock();
    }

    // 关闭复位并执行一个周期使复位信号生效
    core->reset = 0;
    core->clock = 1;
    core->eval();
    tfp->dump(sim_time++);
    
#ifdef ITRACE
    std::cout << ANSI_FG_GREEN "✅ 复位完成" ANSI_RESET << std::endl;
    std::cout << "┌────────────────── " ANSI_FG_CYAN "初始状态" ANSI_RESET " ──────────────────┐" << std::endl;
    std::cout << "│ PC = " ANSI_FG_YELLOW "0x" << std::hex << std::setw(8) << std::setfill('0')
              << core->io_debugPC << ANSI_RESET << " │ Inst = " ANSI_FG_YELLOW "0x" << std::setw(8) << std::setfill('0')
              << core->io_debugInst << ANSI_RESET << " │" << std::endl;
    std::cout << "└─────────────────────────────────────────────┘" << std::dec << std::endl;
#endif
    
    core->clock = 0;
    core->eval();

#ifdef DIFFTEST
    // 差分测试初始化已经在main.cpp中完成
#ifdef ITRACE
    std::cout << ANSI_FG_BLUE "🔍 差分测试已启用" ANSI_RESET << std::endl;
#endif
#endif

    return true;
}

void CoreExecutor::finalize() {
    // 关闭波形文件
    if (tfp) {
        tfp->close();
        delete tfp;
        tfp = nullptr;
    }

#ifdef DIFFTEST
    // 清理差分测试资源
    difftest_cleanup();
#endif

    // 释放core模块
    if (core) {
        delete core;
        core = nullptr;
    }
    
#ifdef ITRACE
    std::cout << ANSI_FG_GREEN "🏁 Core执行器已清理" ANSI_RESET << std::endl;
#endif
}

void CoreExecutor::toggle_clock() {
    // 时钟上升沿
    core->clock = 1;
    core->eval();
    tfp->dump(sim_time++);

    // 时钟下降沿
    core->clock = 0;
    core->eval();
    tfp->dump(sim_time++);

#ifdef DIFFTEST
    // 每个时钟周期执行一次差分测试
   // only for single cycle difftest_step(core);
#endif
}

// 计算字符串的可见长度（排除ANSI颜色代码）
size_t get_visible_length(const std::string& str) {
    size_t visible_length = 0;
    bool in_ansi = false;
    
    for (char c : str) {
        if (c == '\33') {  // ESC字符，ANSI序列开始
            in_ansi = true;
        } else if (in_ansi && c == 'm') {  // ANSI序列结束
            in_ansi = false;
        } else if (!in_ansi) {  // 只计算非ANSI序列的字符
            visible_length++;
        }
    }
    return visible_length;
}

// 美化的指令执行信息显示
void CoreExecutor::print_instruction_info(uint32_t inst_num, uint32_t from_pc, uint32_t to_pc, uint32_t instruction) {
#ifdef ITRACE
    std::cout << "\n╔═══════════════════════════════════════════════════════════════╗" << std::endl;
    std::cout << "  " ANSI_BOLD ANSI_FG_CYAN "指令 #" << std::setw(3) << std::setfill('0') << inst_num << ANSI_RESET << std::endl;
    std::cout << "╠═══════════════════════════════════════════════════════════════╣" << std::endl;
    
    // PC变化信息
    std::cout << "  " ANSI_FG_YELLOW "执行路径:" ANSI_RESET " " ANSI_FG_GREEN "0x" << std::hex << std::setw(8) << std::setfill('0')
              << from_pc << ANSI_RESET " → " ANSI_FG_BLUE "0x" << std::setw(8) << std::setfill('0')
              << to_pc << ANSI_RESET << std::endl;
    
    // 指令编码
    std::cout << "  " ANSI_FG_YELLOW "指令编码:" ANSI_RESET " " ANSI_FG_MAGENTA "0x" << std::setw(8) << std::setfill('0') 
              << instruction << ANSI_RESET << std::endl;
    
    // 反汇编信息
    std::string disasm_result = disassemble(from_pc, instruction);
    std::cout << "  " ANSI_FG_YELLOW "反汇编:" ANSI_RESET "   " << disasm_result << std::endl;
    
    // 分割线
    std::cout << "  ─────────────────────────────────────────────────────────────" << std::endl;
    
    // 调试信息第一行
    std::cout << "  " ANSI_FG_YELLOW "输入1:" ANSI_RESET "     " ANSI_FG_CYAN "0x" << std::setw(8) << std::setfill('0') 
              << core->io_debugin1 << ANSI_RESET << " │ " ANSI_FG_YELLOW "输入2:" ANSI_RESET "     " ANSI_FG_CYAN "0x" << std::setw(8) << std::setfill('0')
              << core->io_debugin2 << ANSI_RESET << std::endl;

    

    
    std::cout << "╚═══════════════════════════════════════════════════════════════╝" << std::dec << std::endl;
#endif
}

// 显示下一条指令预览
void CoreExecutor::print_next_instruction(uint32_t pc, uint32_t instruction) {
#ifdef ITRACE
    std::cout << "┌─────────────── " ANSI_FG_BLUE "下一条指令" ANSI_RESET " ───────────────┐" << std::endl;
    std::cout << "  PC: " ANSI_FG_CYAN "0x" << std::hex << std::setw(8) << std::setfill('0') << pc << ANSI_RESET;
    std::cout << " │ Inst: " ANSI_FG_YELLOW "0x" << std::setw(8) << std::setfill('0') << instruction << ANSI_RESET << std::endl;
    
    // 添加反汇编预览
    std::string disasm_preview = disassemble(pc, instruction);
    std::cout << "  " << disasm_preview << std::endl;
    
    std::cout << "└─────────────────────────────────────────────┘" << std::dec << std::endl;
#endif
}

// 显示执行统计信息
void CoreExecutor::print_execution_summary(int executed, int total) {
#ifdef ITRACE
    std::cout << "\n╔══════════════════════════════════════════════╗" << std::endl;
    std::cout << "  " ANSI_BOLD ANSI_FG_GREEN "执行统计" ANSI_RESET << std::endl;
    std::cout << "╠══════════════════════════════════════════════╣" << std::endl;
    std::cout << "  已执行: " ANSI_FG_CYAN << std::setw(8) << executed << ANSI_RESET << " 条指令" << std::endl;
    std::cout << "  目标:   " ANSI_FG_YELLOW << std::setw(8) << total << ANSI_RESET << " 条指令" << std::endl;
    
    if (executed == total) {
        std::cout << "  状态:   " ANSI_FG_GREEN "完成 ✓" ANSI_RESET << std::endl;
    } else {
        std::cout << "  状态:   " ANSI_FG_RED "中断 ✗" ANSI_RESET << std::endl;
    }
    
    std::cout << "╚══════════════════════════════════════════════╝" << std::endl;
#endif
}

void CoreExecutor::run_insts(int insts) {
    if (insts <= 0) return;

    int executed_insts = 0;
    uint32_t current_pc = core->io_debugPC;
    uint32_t current_inst = core->io_debugInst;

#ifdef ITRACE
    std::cout << "\n" << ANSI_BOLD ANSI_FG_GREEN "🚀 开始执行指令" ANSI_RESET << std::endl;
    std::cout << "┌────────────────── " ANSI_FG_CYAN "执行配置" ANSI_RESET " ──────────────────┐" << std::endl;
    std::cout << "│ 起始PC: " ANSI_FG_YELLOW "0x" << std::hex << std::setw(8) << std::setfill('0')
              << current_pc << ANSI_RESET << " │ 指令数: " ANSI_FG_CYAN << std::dec << insts << ANSI_RESET << "        │" << std::endl;
    std::cout << "│ 首指令: " ANSI_FG_YELLOW "0x" << std::hex << std::setw(8) << std::setfill('0')
              << current_inst << ANSI_RESET << "                    │" << std::endl;
    std::cout << "└─────────────────────────────────────────────┘" << std::dec << std::endl;
#endif


    while (executed_insts < insts && !Verilated::gotFinish()) {
        // 执行一个时钟周期
        toggle_clock();

         if (core->io_inst_done) {
            executed_insts++;

            difftest_step(core);
             current_pc = core->io_debugPC;
             current_inst = core->io_debugInst;
            executed_insts++;
            //difftest_step(core);
            if (cpu_state.state != CPU_STATES::CPU_RUNNING) {
#ifdef ITRACE
                std::cout << ANSI_FG_RED "❌ 执行中断：CPU状态异常，状态码: " << static_cast<int>(cpu_state.state) << ANSI_RESET << std::endl;
#endif
                break;
            }

            // 显示详细的指令执行信息
            print_instruction_info(executed_insts, current_pc, core->io_debugPC, current_inst);
            // 显示下一条指令预览
            print_next_instruction(core->io_debugPC, core->io_debugInst);
            // 更新当前PC和指令
            current_pc = core->io_debugPC;
            current_inst = core->io_debugInst;
        }
    }

    // 显示执行统计
    print_execution_summary(executed_insts, insts);
}
