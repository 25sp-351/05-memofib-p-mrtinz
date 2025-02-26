#include "fibonacci_cache_handler.h"
#include "fibonacci_calculator.h"
#include "fibonacci_test_runner.h" 
#include <stdio.h>

int main() {
    initialize_fibonacci_cache();
    execute_fibonacci_tests(); 

    printf("Fibonacci sequence up to Fib(91):\n");
    for (int index = 0; index <= MAX_MEMOIZED_FIB_INDEX; index++) {
        printf("Fib(%d) = %lld\n", index, compute_fibonacci(index));
    }

    return 0;
}
