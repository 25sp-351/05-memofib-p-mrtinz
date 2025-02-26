#include "fibonacci_cache_handler.h"
#include "fibonacci_calculator.h"
#include "fibonacci_test_runner.h"
#include <assert.h>
#include <stdio.h>

void execute_fibonacci_tests() {
    initialize_fibonacci_cache(); // Ensure cache is initialized in tests
    assert(compute_fibonacci(0) == 0);
    assert(compute_fibonacci(1) == 1);
    assert(compute_fibonacci(2) == 1);
    assert(compute_fibonacci(3) == 2);
    assert(compute_fibonacci(10) == 55);
    assert(compute_fibonacci(20) == 6765);
    assert(compute_fibonacci(50) == 12586269025LL);
    assert(compute_fibonacci(91) == 4660046610375530309LL);
    printf("All Fibonacci tests passed successfully!\n");
}
