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
    // DPI import at build/core.sv:2658:32
    extern void ebreak_handler();
    // DPI import at build/core.sv:2583:32
    extern void memory_read(int ar_addr, int* r_data);
    // DPI import at build/core.sv:2629:32
    extern void memory_write(int aw_addr, int w_data, int w_strb);

#ifdef __cplusplus
}
#endif

#endif  // guard
