/* Create an array of numbers */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int arrayNum;
    int luckyNumbers[] = {
        4,
        16, 
        20,
        25,
        90
    };
    printf("Enter an element in the array\n");
    scanf("%d", &arrayNum);
    printf("The number in the array is %d\n", luckyNumbers[arrayNum]);

    return 0;

}