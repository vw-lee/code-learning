#include <stdio.h>
#include <stdlib.h>

void calc(double num1, double num2, char op); 

int main() {
    double num1;
    double num2;
    char op;

    printf("Enter a number: \n");
    scanf("%lf", &num1);
    printf("Enter operator: \n");
    // Note the space before the `%c`, this is required if getting a char.
    scanf(" %c", &op);
    printf("Enter 2nd number: \n");
    scanf("Enter a number: \n");
    scanf("%lf", &num2);

    calc(num1, num2, op);

    return 0;
}
// `void` function does not return any value.
void calc(double num1, double num2, char op) {
    if(op == '+') {
        printf("%f\n", num1 + num2);
    }
    else if(op == '-') {
        printf("%f\n", num1 - num2);
    }
    else if(op == '/') {
        printf("%f\n", num1 / num2);
    }
    else if(op == '*') {
        printf("%f\n", num1 * num2);
    }
    else {
        printf("Invalid operator!\n");
    }
}