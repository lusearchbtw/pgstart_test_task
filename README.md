# Quadratic Equation Solver

This project is a simple C program that solves quadratic equations of the form `ax^2 + bx + c = 0`.

## Files

The project consists of the following files:

- `solve_equation.c`: This is the main source file that contains the `solve_equation` function.
- `solve_equation.h`: This is the header file that contains the declaration of the `solve_equation` function and the `quadraticRoots` struct.
- `test.c`: This file contains the unit tests for the `solve_equation` function.
- `makefile`: This file is used to compile and run the program and its tests.

## Usage

To compile a static library, use the following command:

```
make lib
```

To run the tests, use the following command:
```
make check
```

To format the code using clang-format, use the following command:

```
make clang
```

To clean up the compiled files, use the following command:

```
make clean
```

## Functionality

The `solve_equation` function takes three parameters `a`, `b`, and `c`, which are the coefficients of the quadratic equation. It returns a `quadraticRoots` struct that contains the number of roots and their values.

The function first checks if the equation is linear (i.e., `a` is zero). If it is, it solves the linear equation `bx + c = 0`. If the equation is not linear, it calculates the discriminant and finds the roots based on its value.

## Testing

The `test.c` file contains several unit tests for the `solve_equation` function. These tests cover different types of quadratic equations, including ones with zero, one, two, or infinite roots.

## Dependencies

This project uses the Check library for unit testing. Make sure to install it before running the tests.

```
$ apt install check
```

### P.S.

The code was written with the assumption that math.h `IS` the `multifunctional math module` that already has the sqrt() function implemented.