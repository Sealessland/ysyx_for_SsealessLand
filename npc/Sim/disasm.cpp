#include <capstone/capstone.h>
#include <iostream>
#include <string>
#include <cstdint>
#include <vector>
#include <iomanip>
#include <sstream>
#include <disasm.h>
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

class RiscVDisassembler {
private:
    csh handle;
    bool initialized;

public:
    RiscVDisassembler() : initialized(false) {
        // 初始化Capstone引擎 - RISC-V 32位
        if (cs_open(CS_ARCH_RISCV, CS_MODE_RISCV32, &handle) != CS_ERR_OK) {
            std::cerr << ANSI_FG_RED "[ERROR] Failed to initialize Capstone engine" ANSI_RESET << std::endl;
            return;
        }
        
        // 设置详细模式以获取更多信息
        cs_option(handle, CS_OPT_DETAIL, CS_OPT_ON);
        initialized = true;
        
        std::cout << ANSI_FG_GREEN "🔧 RISC-V反汇编器初始化成功" ANSI_RESET << std::endl;
    }

    ~RiscVDisassembler() {
        if (initialized) {
            cs_close(&handle);
        }
    }

    // 反汇编单条指令
    std::string disassemble_instruction(uint32_t addr, uint32_t instruction) {
        if (!initialized) {
            return "ERROR: Disassembler not initialized";
        }

        // 将指令转换为字节数组（小端序）
        uint8_t code[4];
        code[0] = instruction & 0xFF;
        code[1] = (instruction >> 8) & 0xFF;
        code[2] = (instruction >> 16) & 0xFF;
        code[3] = (instruction >> 24) & 0xFF;

        cs_insn *insn;
        size_t count = cs_disasm(handle, code, 4, addr, 0, &insn);

        if (count > 0) {
            std::stringstream ss;
            ss << ANSI_FG_CYAN << std::setfill('0') << std::setw(8) << std::hex << addr << ANSI_RESET
               << ": " << ANSI_FG_YELLOW << std::setfill('0') << std::setw(8) << std::hex << instruction << ANSI_RESET
               << " " << ANSI_FG_GREEN << insn[0].mnemonic << ANSI_RESET
               << " " << ANSI_FG_WHITE << insn[0].op_str << ANSI_RESET;
            
            cs_free(insn, count);
            return ss.str();
        } else {
            std::stringstream ss;
            ss << ANSI_FG_CYAN << std::setfill('0') << std::setw(8) << std::hex << addr << ANSI_RESET
               << ": " << ANSI_FG_YELLOW << std::setfill('0') << std::setw(8) << std::hex << instruction << ANSI_RESET
               << " " << ANSI_FG_RED << "UNKNOWN" << ANSI_RESET;
            return ss.str();
        }
    }

    struct DisasmResult {
        std::string mnemonic;
        std::string operands;
        std::string full_text;
        bool valid;
        uint32_t instruction_id;
        uint32_t group_count;
        std::vector<uint8_t> groups;
    };

    DisasmResult disassemble_detailed(uint32_t addr, uint32_t instruction) {
        DisasmResult result;
        result.valid = false;

        if (!initialized) {
            result.full_text = "ERROR: Disassembler not initialized";
            return result;
        }

        uint8_t code[4];
        code[0] = instruction & 0xFF;
        code[1] = (instruction >> 8) & 0xFF;
        code[2] = (instruction >> 16) & 0xFF;
        code[3] = (instruction >> 24) & 0xFF;

        cs_insn *insn;
        size_t count = cs_disasm(handle, code, 4, addr, 0, &insn);

        if (count > 0) {
            result.valid = true;
            result.mnemonic = insn[0].mnemonic;
            result.operands = insn[0].op_str;
            result.instruction_id = insn[0].id;
            
            // 构建完整的反汇编文本
            std::stringstream ss;
            ss << ANSI_FG_CYAN << "0x" << std::setfill('0') << std::setw(8) << std::hex << addr << ANSI_RESET
               << ": " << ANSI_FG_YELLOW << "0x" << std::setfill('0') << std::setw(8) << std::hex << instruction << ANSI_RESET
               << " " << ANSI_FG_GREEN << result.mnemonic << ANSI_RESET;
            
            if (!result.operands.empty()) {
                ss << " " << ANSI_FG_WHITE << result.operands << ANSI_RESET;
            }
            
            result.full_text = ss.str();

            if (insn[0].detail) {
                result.group_count = insn[0].detail->groups_count;
                for (int i = 0; i < result.group_count; i++) {
                    result.groups.push_back(insn[0].detail->groups[i]);
                }
            }

            cs_free(insn, count);
        } else {
            result.full_text = ANSI_FG_RED "INVALID INSTRUCTION" ANSI_RESET;
        }

        return result;
    }

    // 批量反汇编
    std::vector<std::string> disassemble_block(uint32_t start_addr, const std::vector<uint32_t>& instructions) {
        std::vector<std::string> results;
        
        for (size_t i = 0; i < instructions.size(); i++) {
            uint32_t addr = start_addr + (i * 4);
            results.push_back(disassemble_instruction(addr, instructions[i]));
        }
        
        return results;
    }

    // 获取指令类型信息
    std::string get_instruction_type(uint32_t instruction) {
        if (!initialized) {
            return "UNKNOWN";
        }

        uint8_t code[4];
        code[0] = instruction & 0xFF;
        code[1] = (instruction >> 8) & 0xFF;
        code[2] = (instruction >> 16) & 0xFF;
        code[3] = (instruction >> 24) & 0xFF;

        cs_insn *insn;
        size_t count = cs_disasm(handle, code, 4, 0, 0, &insn);

        if (count > 0) {
            std::string type;
            
            // 根据指令ID判断类型
            switch (insn[0].id) {
                // R-type instructions
                case RISCV_INS_ADD:
                case RISCV_INS_SUB:
                case RISCV_INS_SLL:
                case RISCV_INS_SLT:
                case RISCV_INS_SLTU:
                case RISCV_INS_XOR:
                case RISCV_INS_SRL:
                case RISCV_INS_SRA:
                case RISCV_INS_OR:
                case RISCV_INS_AND:
                    type = "R-type";
                    break;
                
                // I-type instructions
                case RISCV_INS_ADDI:
                case RISCV_INS_SLTI:
                case RISCV_INS_SLTIU:
                case RISCV_INS_XORI:
                case RISCV_INS_ORI:
                case RISCV_INS_ANDI:
                case RISCV_INS_SLLI:
                case RISCV_INS_SRLI:
                case RISCV_INS_SRAI:
                case RISCV_INS_LB:
                case RISCV_INS_LH:
                case RISCV_INS_LW:
                case RISCV_INS_LBU:
                case RISCV_INS_LHU:
                case RISCV_INS_JALR:
                    type = "I-type";
                    break;
                
                // S-type instructions
                case RISCV_INS_SB:
                case RISCV_INS_SH:
                case RISCV_INS_SW:
                    type = "S-type";
                    break;
                
                // B-type instructions
                case RISCV_INS_BEQ:
                case RISCV_INS_BNE:
                case RISCV_INS_BLT:
                case RISCV_INS_BGE:
                case RISCV_INS_BLTU:
                case RISCV_INS_BGEU:
                    type = "B-type";
                    break;
                
                // U-type instructions
                case RISCV_INS_LUI:
                case RISCV_INS_AUIPC:
                    type = "U-type";
                    break;
                
                // J-type instructions
                case RISCV_INS_JAL:
                    type = "J-type";
                    break;
                
                default:
                    type = "Other";
                    break;
            }
            
            cs_free(insn, count);
            return type;
        }
        
        return "INVALID";
    }

    bool is_initialized() const {
        return initialized;
    }
};

// 全局反汇编器实例
static RiscVDisassembler global_disassembler;

// C风格接口函数
extern "C" {
    // 初始化反汇编器
    int disasm_init() {
        return global_disassembler.is_initialized() ? 1 : 0;
    }

    // 反汇编单条指令
    const char* disasm_instruction(uint32_t addr, uint32_t instruction) {
        static std::string result;
        result = global_disassembler.disassemble_instruction(addr, instruction);
        return result.c_str();
    }

    // 获取指令类型
    const char* disasm_get_type(uint32_t instruction) {
        static std::string result;
        result = global_disassembler.get_instruction_type(instruction);
        return result.c_str();
    }
}

// C++接口函数
std::string disassemble(uint32_t addr, uint32_t instruction) {
    return global_disassembler.disassemble_instruction(addr, instruction);
}

std::string disassemble_with_colors(uint32_t addr, uint32_t instruction) {
    auto result = global_disassembler.disassemble_detailed(addr, instruction);
    if (result.valid) {
        std::stringstream ss;
        ss << "┌─────────────── " ANSI_FG_CYAN "指令反汇编" ANSI_RESET " ──────────────┐\n";
        ss << "│ " ANSI_FG_YELLOW "地址:" ANSI_RESET " 0x" << std::setfill('0') << std::setw(8) << std::hex << addr << "                      │\n";
        ss << "│ " ANSI_FG_YELLOW "编码:" ANSI_RESET " 0x" << std::setfill('0') << std::setw(8) << std::hex << instruction << "                      │\n";
        ss << "│ " ANSI_FG_YELLOW "指令:" ANSI_RESET " " ANSI_FG_GREEN << result.mnemonic << ANSI_RESET;
        if (!result.operands.empty()) {
            ss << " " << ANSI_FG_WHITE << result.operands << ANSI_RESET;
        }
        ss << "\n│ " ANSI_FG_YELLOW "类型:" ANSI_RESET " " << global_disassembler.get_instruction_type(instruction) << "\n";
        ss << "└────────────────────────────────────────┘";
        return ss.str();
    } else {
        return ANSI_FG_RED "反汇编失败: 无效指令" ANSI_RESET;
    }
}

// 测试函数
void test_disassembler() {
    std::cout << ANSI_FG_CYAN "🧪 测试RISC-V反汇编器..." ANSI_RESET << std::endl;
    
    // 测试一些常见的RISC-V指令
    std::vector<std::pair<uint32_t, uint32_t>> test_cases = {
        {0x80000000, 0x00000013},  // nop (addi x0, x0, 0)
        {0x80000004, 0x00100093},  // addi x1, x0, 1
        {0x80000008, 0x002081B3},  // add x3, x1, x2
        {0x8000000C, 0x40208233},  // sub x4, x1, x2
        {0x80000010, 0x00002037},  // lui x0, 2
    };
    
    for (const auto& test : test_cases) {
        std::cout << global_disassembler.disassemble_instruction(test.first, test.second) << std::endl;
    }
    
    std::cout << ANSI_FG_GREEN "✅ 反汇编器测试完成" ANSI_RESET << std::endl;
}