// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VCPU__DPI_H_
#define VERILATED_VCPU__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at build/CPU.sv:1698:31
    extern int mem_read(int addr, int size);
    // DPI import at build/CPU.sv:1735:32
    extern void mem_write(int addr, int data, int size);

#ifdef __cplusplus
}
#endif

#endif  // guard
