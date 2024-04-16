#include <stdio.h>
#include <math.h>
#include "ramanujan.hpp"
#include "factorial.hpp"

// calculate pi with Ramanujan's formula.
double calc_pi_ramanujan(int num_iter){

    // announce
    printf("[ramanujan.cpp] Calculating PI with Ramanujan's formula.\n");

    // initialize variables for calculation
    double one_over_pi = 0.0;
    double const_scale = (2.0 * sqrt(2.0)) / pow(99, 2);

    // update pi for N times
    for (int i = 0; i < num_iter; i++)
    {
        one_over_pi += const_scale * (factorial(4*i) * (1103 + 26390*i)) / (pow(factorial(i), 4) * pow(396, 4*i));
    }

    // calculate pi
    double pi = 1.0 / one_over_pi;

    // return pi
    return pi;
}
