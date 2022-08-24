/* A basic calculator that adds two numbers */
#include <stdio.h>
#include <stdlib.h>

int main() {
    double num1;
    double num2;
    printf("Enter first number: \n");
    // Note the `%lf` in the expression, `&` denotes a pointer.
    scanf("%lf", &num1);
    printf("Enter second number: \n");
    scanf("%lf", &num2);
    printf("Answer is: %f\n", num1 + num2);
    return 0;
}