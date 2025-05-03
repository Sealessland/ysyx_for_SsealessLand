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
    // DPI import at build/core.sv:1773:32
    extern void mem_read(int addr, int len, int* data);
    // DPI import at build/core.sv:1774:32
    extern void mem_write(int addr, int len, int data);

#ifdef __cplusplus
}
#endif

#endif  // guard
