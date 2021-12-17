#include <stdio.h>

int main (int argc, char *argv[]) {
    int numbers[4] = {0};
    char characters[3] = {'c'};

    printf("%d, %d, %d, %d, %c, %c, %c\n", numbers[0], numbers[1], numbers[2], numbers[3], characters[0], characters[1], characters[2]);
    printf("%s\n", characters);
    
    char *string_1 = "name 1";
    char *string_2 = "name 2";
    char stirng_0 = 'i';
    
    printf("%s, %c, %c\n", string_1, string_2[3], stirng_0);

    return 0;
}