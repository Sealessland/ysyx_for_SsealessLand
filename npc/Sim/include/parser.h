//
// Created by sealessland on 25-5-9.
//
// include/parser.h
#ifndef PARSER_H
#define PARSER_H

#include "core-exe.h"  // 包含CoreConfig定义

// 解析命令行参数
CoreConfig parse_args(int argc, char** argv);

// 显示帮助信息
void show_help(const char* program_name);

#endif // PARSER_H