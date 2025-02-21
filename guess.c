#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int randomNumber, guess;

    srand(time(0));
    randomNumber = (rand() % 20) + 1; // Generate number between 1 and 20

    
    do {
        printf("Guess a number between 1 and 20: ");
        scanf("%d", &guess);
    } while (guess != randomNumber);

    printf("Congratulations! You guessed it right.\n");

    return 0;
}