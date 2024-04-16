#include <stdio.h>
#include <math.h>
#include "gregory.hpp"

// calculate pi with Gregory's formula.
double calc_pi_gregory(int num_iter){

    // announce
    printf("[gregory.cpp] Calculating PI with Gregory's formula.\n");

    // initialize variables for calculation
    double pi = 4.0;

    // update pi for N times
    for (int i = 1; i < num_iter+1; i++)
    {
        pi += 4.0 * (pow(-1, i) / (2.0 * i + 1));
    }

    // return pi
    return pi;
}
