#include <stdio.h>

int a, b;

int main(void) {
    a = b = 5;

    printf("\nPre    Post\n");

    for (int i = 0; i < 5; i++) {
        printf("\n%d     %d\n", a--, --b);
    }
    return 0;
}