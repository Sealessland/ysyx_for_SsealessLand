#ifndef _BASIC_TIME_H_
#define _BASIC_TIME_H_

#include <stddef.h>      // For NULL and size_t
#include <sys/types.h>   // For time_t, clock_t

/*
 * This is a minimal, self-contained time.h for bare-metal projects.
 */

// A constant often used with clock()
#define CLOCKS_PER_SEC ((clock_t)1000)

// Structure for broken-down time
struct tm {
    int tm_sec;    // seconds after the minute [0-60]
    int tm_min;    // minutes after the hour [0-59]
    int tm_hour;   // hours since midnight [0-23]
    int tm_mday;   // day of the month [1-31]
    int tm_mon;    // months since January [0-11]
    int tm_year;   // years since 1900
    int tm_wday;   // days since Sunday [0-6]
    int tm_yday;   // days since January 1 [0-365]
    int tm_isdst;  // Daylight Saving Time flag
};

// Structure for high-resolution time
struct timespec {
    time_t tv_sec;  // seconds
    long   tv_nsec; // nanoseconds
};


// Function prototypes for common time functions.
// The actual implementations should be in your project's C library (klib).
clock_t clock(void);
double  difftime(time_t time1, time_t time0);
time_t  time(time_t *timer);
// char* asctime(const struct tm *timeptr);
// char* ctime(const time_t *timer);
// struct tm* gmtime(const time_t *timer);
// struct tm* localtime(const time_t *timer);
// size_t strftime(char *s, size_t maxsize, const char *format, const struct tm *timeptr);

#endif /* _BASIC_TIME_H_ */