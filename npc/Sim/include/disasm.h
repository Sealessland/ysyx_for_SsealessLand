#ifndef DISASM_H
#define DISASM_H

#include <cstdint>
#include <string>

#ifdef __cplusplus
extern "C" {
#endif

// C风格接口
int disasm_init();
const char* disasm_instruction(uint32_t addr, uint32_t instruction);
const char* disasm_get_type(uint32_t instruction);

#ifdef __cplusplus
}

// C++接口
std::string disassemble(uint32_t addr, uint32_t instruction);
std::string disassemble_with_colors(uint32_t addr, uint32_t instruction);
void test_disassembler();

#endif

#endif // DISASM_H//
// Created by sealessland on 25-5-19.
//

#ifndef DISASM_H
#define DISASM_H

#endif //DISASM_H
