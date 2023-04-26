#include "HLguess.h"


// Function that returns -1 if the guess is too low, 1 if the guess is too high, and 0 if the guess is correct
int check(int guess, int answer) {
    if (guess < answer) {
        puts("Too low!");
        return 1;
    } else if (guess > answer) {
        puts("Too high!");
        return 2;
    } else {
        puts("Correct!");
        return -1;
    }
}


void printPrompt(int min, int max){
    printf("Enter a number between %d and %d (not inclusive): ", min, max);
}

int takeEntry(int min, int max){
    int entry = -1;
    fflush(stdout);
    int vaild = scanf("%d", &entry);
    while (vaild != 1 || entry < min || entry > max) {
        printf("Invalid entry. ");
        printPrompt(min, max);
        fflush(stdout);
        vaild = scanf("%d", &entry);
    }
    
}

//Function that returns a random number with in a range 
int random(int min, int max) {
    srand(time(0)*clock());
    return rand() % (max - min) + min;
}


void numprintGuess(int guess){
    printf("You have %d guesses remaining\n", guess);

}

void printBanner(){
puts("Higher or Lower Game");

}
