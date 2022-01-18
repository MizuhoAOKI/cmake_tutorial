#include <stdio.h>
#include "viete.hpp"
#include "ramanujan.hpp"
#include "gregory.hpp"

int main(){
    // Main process starts.
    printf("This program calculate PI in different methods.\n\n");
    double process_time = 0.0f; // memorize processing time.

    // Viete's formula
    double pi_v = calc_pi_viete();

    // Ramanujan's formula
    double pi_r = calc_pi_ramanujan();

    // Gregory's formula
    double pi_g = calc_pi_gregory();

    // Announce results.
    printf("Viete's method     : PI = %f \n", pi_v);
    printf("Ramanujan's method : PI = %f \n", pi_r);
    printf("Gregory's method   : PI = %f \n", pi_g);

    // Notify processing time.
    printf("\nThe total processing time is %f second.\n", process_time);

    // Main process ends.
    return 0;
}