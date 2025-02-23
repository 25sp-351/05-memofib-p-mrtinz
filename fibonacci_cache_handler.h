#ifndef FIBONACCI_CACHE_HANDLER_H
#define FIBONACCI_CACHE_HANDLER_H

#define MAX_MEMOIZED_FIB_INDEX 91

extern long long fibonacci_cache[MAX_MEMOIZED_FIB_INDEX + 1];
void initialize_fibonacci_cache();

#endif // FIBONACCI_CACHE_HANDLER_H