#ifndef _BASIC_STDDEF_H_
#define _BASIC_STDDEF_H_

/*
 * This is a minimal, self-contained stddef.h for bare-metal projects,
 * specifically tailored for a 32-bit architecture.
 */

// Define size_t, the type for object sizes in memory.
// For riscv32, this is a 32-bit unsigned integer.
#ifndef __SIZE_TYPE__
typedef unsigned int size_t;
#else
typedef __SIZE_TYPE__ size_t;
#endif

// Define NULL, the null pointer constant.
#ifndef NULL
#define NULL ((void *)0)
#endif

// Define offsetof, a macro to calculate member offset within a struct.
// This uses a GCC built-in for safety and correctness.
#ifndef offsetof
#define offsetof(TYPE, MEMBER) __builtin_offsetof(TYPE, MEMBER)
#endif

// Define ptrdiff_t, the type for the result of subtracting two pointers.
// For riscv32, this is a 32-bit signed integer.
#ifndef __PTRDIFF_TYPE__
typedef signed int ptrdiff_t;
#else
typedef __PTRDIFF_TYPE__ ptrdiff_t;
#endif


#endif /* _BASIC_STDDEF_H_ */