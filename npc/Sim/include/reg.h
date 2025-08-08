// reg.h
#pragma once

#include <verilated.h>
#include <Vcore.h>
#include <string>

// 获取寄存器值
uint32_t getRegValue(Vcore* core, uint32_t regIndex);

// 设置寄存器值
void setRegValue(Vcore* core, uint32_t regIndex, uint32_t value);

// 获取寄存器名称
std::string getRegName(uint32_t regIndex);

// 打印所有寄存器值
void printAllRegs(Vcore* core);

// 打印特定寄存器值
void printReg(Vcore* core, uint32_t regIndex);

// 从寄存器名称获取索引
uint32_t getRegIndexByName(const std::string& name);

// 从 ISA 名称获取寄存器值
uint32_t getRegValueByName(Vcore* core, const std::string& name);

// 从 ISA 名称设置寄存器值
void setRegValueByName(Vcore* core, const std::string& name, uint32_t value);
uint32_t isa_reg_str2val(const char *s, bool *success);

void get_reg(Vcore* core);
// 打印 RISC-V 寄存器映射关系
void isa2Reg();
uint32_t isa_reg_halt(bool *success);

