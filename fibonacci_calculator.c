#include "fibonacci_cache_handler.h"
#include "fibonacci_calculator.h"

long long compute_fibonacci(int fibonacci_index) {
    if (fibonacci_index < 0 || fibonacci_index > MAX_MEMOIZED_FIB_INDEX) {
        return -1; // Out of bounds
    }
    if (fibonacci_index <= 1) return fibonacci_index;
    if (fibonacci_cache[fibonacci_index] != -1) return fibonacci_cache[fibonacci_index];

    fibonacci_cache[fibonacci_index] = compute_fibonacci(fibonacci_index - 1) + compute_fibonacci(fibonacci_index - 2);
    return fibonacci_cache[fibonacci_index];
}