#include "HLguess.h"

int main()
{
    int currentGuess = 0;
    int answer = 0;
    int numOfGuesses = 4;
    int min = 0;
    int max = 10;
    int keepGoing = 1;

    printBanner();
    answer = random(min, max);

    // main loop for higher lower guessing game
    while (keepGoing)
    {
        printPrompt(min, max);
        currentGuess = takeEntry(min, max);
        printGuess(currentGuess);
        numOfGuesses--;
        if (check(currentGuess, answer) == -1)
        {

            keepGoing = 0;
        }
        else if (numOfGuesses == 0)
        {
            printf("You ran out of guesses!\n");
            keepGoing = 0;
        }
    }
}
