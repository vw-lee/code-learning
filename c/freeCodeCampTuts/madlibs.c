#include <stdio.h>
#include <stdlib.h>

int main() {
    char colour[20];
    char pluralNoun[20];
    char celebrityF[20];
    char celebrityL[20];

    printf("Enter a color:\n");
    scanf("%s", colour);
    printf("Enter a pluralNoun:\n");
    scanf("%s", pluralNoun);
    printf("Enter a celebrity:\n");
    // Need 2 strings to complete the first and last name.
    scanf("%s%s", celebrityF, celebrityL);

    printf("Roses are %s\n", colour);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s%s\n", celebrityF, celebrityL);

    return 0;
}