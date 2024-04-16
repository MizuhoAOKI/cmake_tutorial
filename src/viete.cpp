#include <stdio.h>
#include <math.h>
#include "viete.hpp"
#include "factorial.hpp"

// calculate pi with Viete's formula.
double calc_pi_viete(int num_iter){

    // announce
    printf("[viete.cpp] Calculating PI with Viete's formula.\n");

    // initialize variables for calculation
    double pi = 4.0 / sqrt(2.0);
    double denominator = sqrt(2.0);

    // update pi for N times
    for (int i = 0; i < num_iter; i++)
    {
        denominator = sqrt(2.0 + denominator);
        pi = pi * (2.0 / denominator);
    }

    // return pi
    return pi;
}
