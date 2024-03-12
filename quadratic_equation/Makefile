CC = gcc
CFLAGS = -Wall -Werror -Wextra -fsanitize=address -lm
TEST_FLAGS= -g -lcheck -lsubunit
FILES = solve_equation/solve_equation.c 
TEST_FILES = tests/tests.c
RESULT = solve_equation.out
LIBRARY = solve_equation.a

check:
	$(CC) $(FILES) $(TEST_FILES) $(CFLAGS) $(TEST_FLAGS) -o $(RESULT) 
	./$(RESULT)

lib: $(FILES)
	$(CC) -c $(FILES) $(CFLAGS)
	ar rcs $(LIBRARY) solve_equation.o

clang:
	clang-format -i */*.c

clean:
	rm -f *.out *.o *.a