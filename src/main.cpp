#include <stdio.h>
#include "viete.hpp"
#include "ramanujan.hpp"
#include "gregory.hpp"

int main(){
    // Main process starts.
    printf("[main.cpp] This program calculate PI in three different methods.\n");

    // set number of iterations
    int num_iter = 8;
    printf("[main.cpp] Number of iterations = %d\n\n", num_iter);

    // Viete's formula
    double pi_v = calc_pi_viete(num_iter);

    // Ramanujan's formula
    double pi_r = calc_pi_ramanujan(num_iter);

    // Gregory's formula
    double pi_g = calc_pi_gregory(num_iter);

    // Announce results.
    printf("\n[Results]\n");
    printf("  Viete's method     : PI = %f \n", pi_v);
    printf("  Ramanujan's method : PI = %f \n", pi_r);
    printf("  Gregory's method   : PI = %f \n", pi_g);

    // Main process ends.
    return 0;
}
