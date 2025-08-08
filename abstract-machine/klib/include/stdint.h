#ifndef _BASIC_STDINT_H_
#define _BASIC_STDINT_H_

/* * This is a minimal, self-contained stdint.h for bare-metal projects,
 * specifically tailored for a 32-bit RISC-V (riscv32) target.
 * It does not include any other files and can be used with the -nostdinc flag.
 */

// 8-bit integer types
typedef signed char         int8_t;
typedef unsigned char       uint8_t;

// 16-bit integer types
typedef signed short        int16_t;
typedef unsigned short      uint16_t;

// 32-bit integer types
// For the riscv32 architecture (ILP32 ABI), 'int' is 32 bits.
typedef signed int          int32_t;
typedef unsigned int        uint32_t;

// 64-bit integer types
// For the riscv32 architecture, 'long long' must be used for 64 bits.
typedef signed long long    int64_t;
typedef unsigned long long  uint64_t;

// Integer types capable of holding object pointers
// For the riscv32 architecture, a pointer is 32 bits wide.
typedef int32_t             intptr_t;
typedef uint32_t            uintptr_t;


#endif /* _BASIC_STDINT_H_ */