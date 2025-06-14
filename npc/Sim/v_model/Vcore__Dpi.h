// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VCORE__DPI_H_
#define VERILATED_VCORE__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at build/core.sv:1806:32
    extern void data_mem_read(int addr, int len, int* data);
    // DPI import at build/core.sv:1807:32
    extern void data_mem_write(int addr, int len, int data);
    // DPI import at build/core.sv:1877:32
    extern void ebreak_handler();
    // DPI import at build/core.sv:1805:32
    extern void inst_mem_read(int addr, int len, int* data);

#ifdef __cplusplus
}
#endif

#endif  // guard
