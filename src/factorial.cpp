#include "factorial.hpp"

// calculate factorial of given positive integer
int factorial(int n){

    // recursive implementation of factorial
    if (n < 0)
    {
        return -1; // error
    } 
    else if (n == 0)
    {
        return 1;
    }
    else 
    {
        return n * factorial(n - 1);
    }

}
