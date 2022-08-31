/* Demo of `for` loop */
#include <stdio.h>

int main() {
    int luckyNumbers[] = {1, 3, 5, 7, 9};
    int i = 0;
    for(i = 0; i <= 4; i++) {
        printf("%d\n", luckyNumbers[i]);
    }
}