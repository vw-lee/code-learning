#include <stdio.h>

int main (int argc, char *argv[]) {
    int areas[] = {
        10,
        20,
        30,
        40,
        50
    };
    char name[] = {
        "Oliver"
    };
    char full_name[] = {
        'O',
        'l',
        'i',
        'v',
        'e',
        'r',
        '\0' // need this line to terminate the string
    };
    
    printf("(int[]): %ld\n %ld\n",sizeof(areas), sizeof(int));
    printf("%s\n", full_name);

    return 0;
}