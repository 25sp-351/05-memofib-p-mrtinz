#include "fibonacci_cache_handler.h"

long long fibonacci_cache[MAX_MEMOIZED_FIB_INDEX + 1] = {0};

void initialize_fibonacci_cache() {
    for (int index = 0; index <= MAX_MEMOIZED_FIB_INDEX; index++) {
        fibonacci_cache[index] = -1; 
    }
}