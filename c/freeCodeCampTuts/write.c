/* Write to file demo */
#include <stdio.h>

int main() {
    // File mode: "r", "w" and "a" stands for read, write and append
    FILE *fpointer = fopen("employees.txt", "w");
    fprintf(fpointer, "Jim, Salesman\nTommy, Accountant\n");
    fclose(fpointer);
    return 0;
}