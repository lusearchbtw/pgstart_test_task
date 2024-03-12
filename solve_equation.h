#ifndef SOLVE_EQUATION_H
#define SOLVE_EQUATION_H

#include <math.h>

#define INFINITE_ROOTS -1
#define ZERO_ROOTS 0
#define ONE_ROOT 1
#define TWO_ROOTS 2


//  quadratic function calculation results
typedef struct {
    int roots_num;
    double root1;
    double root2;
} quadraticRoots;


/**
 *  This function solves a quadratic equation of the form: ax^2 + bx + c = 0
 *
 *  @param a - coefficient of x^2
 *  @param b - coefficient of x
 *  @param c - constant
 *
 *  @return quadraticRoots struct
 * 
 */
quadraticRoots solve_equation(double a, double b, double c);




#endif