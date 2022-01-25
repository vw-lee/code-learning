#include <stdio.h>

int main (int argc, char * argv[]) {
    int i = 0;

    for (i = 0; i < 5; i++) {
        printf("The number is %d.\n", i);
    }

    char * name_array [] = {
        "Bob",
        "John",
        "Tony",
        "\0"
    };

    for (i = 0; i <= 3; i++) {    
        if (i == 3) {
            printf("This is a dead end!\n");
            return 1;
        }
        printf("Name is: %s\n", name_array[i]);
    }
        
    return 0;
}