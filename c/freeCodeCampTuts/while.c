/* `while` loop demo */
#include <stdio.h>

int main() {
    int index = 1;
    while (index <= 5) {
        printf("%d\n", index);
        index++;
    }
    index = 0;
    // `do while` loop is very similar to a `while` loop
    do {
        printf("%d\n", index);
        index++;
    }
    while(index <= 5);
    return 0;
}