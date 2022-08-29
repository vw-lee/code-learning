#include <stdio.h>

int main() {
    int secretNum = 5;
    int guessNum;
    int attempt = 0;

    while(guessNum != secretNum && attempt <= 2) {
       printf("Enter a number from 1-10\n");
       scanf("%d", &guessNum);
       attempt++;
       if(guessNum != secretNum) {
        printf("Try again!\n");
       }
       else if(guessNum == secretNum){
        printf("You guessed right!\n");
        break;
       }
       else {
        printf("You are out of guesses!\n");
       }
    }
    return 0;
}