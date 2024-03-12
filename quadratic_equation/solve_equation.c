#include "solve_equation.h"

quadraticRoots solve_equation(double a, double b, double c) {
    quadraticRoots result;


    if (a == 0) { // check if equation is linear
        if (b == 0) {
            if (c == 0) { //  any root is the solution
                result.roots_num = INFINITE_ROOTS;
            } else { // решений не существует
                result.roots_num = ZERO_ROOTS;
            }
        } else {
            result.roots_num = ONE_ROOT;
            result.root1 = -c / b;
        }
    } else { // if not linear

        double discriminant = b * b - 4 * a * c;

        if (discriminant < 0) {
            result.roots_num = ZERO_ROOTS;
        } else if (discriminant == 0) {
            result.roots_num = ONE_ROOT;
            result.root1 = -b / (2 * a);
        } else {
            result.roots_num = TWO_ROOTS;
            result.root1 = (-b + sqrt(discriminant)) / (2 * a);
            result.root2 = (-b - sqrt(discriminant)) / (2 * a);
        }
    }

    return result;
}


