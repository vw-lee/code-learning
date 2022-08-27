/* Demo of a function */ 
#include <stdio.h>

// This is called function prototype, which allows writing the function below the main loop.
double cube(double num);

int main() {

    printf("Answer: %f\n", cube(3.0));
    return 0;
}

// Function type `void` will return nothing.
double cube(double num) {
    double result = num * num * num;
    return result;
}