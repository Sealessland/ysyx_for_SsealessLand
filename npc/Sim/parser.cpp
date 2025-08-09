// parser.cpp
#include "include/parser.h"
#include <iostream>
#include <string>

void show_help(const char* program_name) {
    std::cout << "用法: " << program_name << " [选项]\n"
              << "选项:\n"
              << "  -m, --memory FILE   从FILE加载内存映像\n"
              << "  -w, --wave FILE     将波形输出到FILE (默认: wave.vcd)\n"
              << "  -c, --cycles N      运行N个周期 (默认: 300)\n"
              << "  -pc, --start-pc VAL 设置起始PC值 (默认: 0x80000000)\n"
              << "  -nd, --no-debug     禁用调试模式，直接运行仿真\n"
              << "  -d, --diff SO_FILE  启用差分测试，使用指定的参考模型SO文件\n"
              << "  -h, --help          显示此帮助信息\n";
}

CoreConfig parse_args(int argc, char** argv) {
    CoreConfig cfg;

    // 设置默认值
    cfg.wave_file = "wave.vcd";
    cfg.cycles = 300;
    cfg.start_pc = 0x20000000;
    cfg.debug = true;
    cfg.diff_test = true;
    cfg.memory_file = "";
    cfg.diff_so = "";
    cfg.itrace = false;
    cfg.mtrace= false;

    for (int i = 1; i < argc; i++) {
        std::string arg = argv[i];

        if (arg == "-m" || arg == "--memory") {
            if (i + 1 < argc) cfg.memory_file = argv[++i];
        }
        else if (arg == "-w" || arg == "--wave") {
            if (i + 1 < argc) cfg.wave_file = argv[++i];
        }
        else if (arg == "-c" || arg == "--cycles") {
            if (i + 1 < argc) cfg.cycles = std::stoi(argv[++i]);
        }
        else if (arg == "-pc" || arg == "--start-pc") {
            if (i + 1 < argc) cfg.start_pc = std::stoul(argv[++i], nullptr, 0);
        }
        else if (arg == "-nd" || arg == "--no-debug") {
            cfg.debug = false;
        }
        else if (arg == "-d" || arg == "--diff") {
            if (i + 1 < argc) {
                cfg.diff_so = argv[++i];
                cfg.diff_test = true;
            }
        }
        else if (arg == "-h" || arg == "--help") {
            show_help(argv[0]);
            exit(0);
        }
    }

    return cfg;
}//
// Created by sealessland on 25-5-9.
//
