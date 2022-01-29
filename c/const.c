/* Listing 3.2 of 21 days in C book */
#include <stdio.h>

// Note that #define does not end with ;
#define gramsPerPound 454

const int targetYear = 2010;

long weightInGrams, weightInPounds;
int yearOfBirth, ageIn2010;

int main (void) {
    // Input data from user
    printf("Enter your weight in pounds: ");
    scanf("%ld", &weightInPounds);
    printf("Enter your year of birth: ");
    scanf("%d", &yearOfBirth);

    // Perform conversions
    weightInGrams = weightInPounds * gramsPerPound;
    ageIn2010 = targetYear - yearOfBirth;

    // Display results
    printf("\nYour weight in grams = %ld", weightInGrams);
    printf("\nIn 2010 you will be %d years old\n", ageIn2010);

    return 0;
}