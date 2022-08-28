/* Switch statements */
#include <stdio.h>

int main() {
    char grade;
    printf("Enter a grade: (choose from A, B, C or D)\n");
    scanf(" %c", &grade);
    switch (grade)
    {
    case 'A':
        printf("You did great!\n");
        break;
    case 'B':
        printf("You did alright!\n");
        break;
    case 'C':
        printf("You did OK.\n");
        break;
    case 'D':
        printf("You did poorly.\n");
        break;
    default:
        printf("Invalid!\n");
        break;
    }
    return 0;
}