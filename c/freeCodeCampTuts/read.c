/* Read the file */
#include <stdio.h>

int main() {
    char line[255]; 
    FILE *fpointer = fopen("employees.txt", "r");
    // Read the characters in the first line of the txt file.
    fgets(line, 255, fpointer);
    printf("%s", line);
    // `fget` again will grab the 2nd line of the txt file.
    fgets(line, 255, fpointer);
    printf("%s", line);
    fclose(fpointer);
    return 0;
}