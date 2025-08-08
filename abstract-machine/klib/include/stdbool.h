#ifndef _BASIC_STDBOOL_H_
#define _BASIC_STDBOOL_H_

/*
 * This is a minimal, self-contained stdbool.h for bare-metal projects
 * that can be used with the -nostdinc flag.
 */

// This macro indicates that bool, true, and false are defined.
#define __bool_true_false_are_defined 1

/*
 * In C99 and later, _Bool is a built-in keyword. We just need to create
 * aliases for it. In C++, bool, true, and false are already keywords,
 * so we must not redefine them.
 */
#ifndef __cplusplus
#define bool  _Bool
#define true  1
#define false 0
#endif

#endif /* _BASIC_STDBOOL_H_ */