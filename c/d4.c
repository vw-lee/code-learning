#include <stdio.h>

#define num1 12345
#define num2 56789

int main(void) {

    printf("%d\n", num1);
    printf("%d\n", num2);

    for (int i = 0; i <=5; ++i) {
        printf("The iteration of this loop is %d\n", i);
    }

    printf("\n");

    for (int j = 0; j <=5; j++) {
        printf("The iteration of this loop is %d\n", j);
    }

    return 0;
}