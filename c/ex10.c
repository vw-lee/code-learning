#include <stdio.h>

int main(int argc, char *argv[]) {
    int i = 0;

    // run this program with ./ex10 i am a bunch of args
    for (i = 1; i < argc; i++) {
        printf("arg %d: %s\n", i, argv[i]);
    }

    char *states[] = {
        "Cali",
        "Pen",
        "Wash",
        "Texas"
    };

    int num_states = 4;

    for (i = 0; i < num_states; i++) {
        printf("State %d: %s\n", i, states[i]);
    }

    return 0;
}