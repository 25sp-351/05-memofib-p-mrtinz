CC = gcc
CFLAGS = -Wall -Wextra -Werror
TARGET = fibonacci_program
OBJ = fibonacci_cache_handler.o fibonacci_calculator.o fibonacci_test_runner.o fibonacci_main_executor.o

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

fibonacci_cache_handler.o: fibonacci_cache_handler.c fibonacci_cache_handler.h
	$(CC) $(CFLAGS) -c fibonacci_cache_handler.c

fibonacci_calculator.o: fibonacci_calculator.c fibonacci_calculator.h
	$(CC) $(CFLAGS) -c fibonacci_calculator.c

fibonacci_test_runner.o: fibonacci_test_runner.c fibonacci_test_runner.h
	$(CC) $(CFLAGS) -c fibonacci_test_runner.c

fibonacci_main_executor.o: fibonacci_main_executor.c
	$(CC) $(CFLAGS) -c fibonacci_main_executor.c

clean:
	rm -f $(TARGET) $(OBJ)
