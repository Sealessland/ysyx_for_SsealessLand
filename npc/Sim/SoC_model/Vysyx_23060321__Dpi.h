// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VYSYX_23060321__DPI_H_
#define VERILATED_VYSYX_23060321__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at ysyxSoC/perip/flash/flash.v:84:30
    extern void flash_read(int addr, int* data);

#ifdef __cplusplus
}
#endif

#endif  // guard
