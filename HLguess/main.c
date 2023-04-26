#include "HLguess.h"

int main(){
    int currentGuess = 0;
    int answer = 0;
    int numOfGuesses = 4;
    int min = 0;
    int max = 10;
    int keepGoing = 1;

    printBanner();
    answer = random(min, max);

   
    //while(keepGoing){
        printPrompt(min, max);
        keepGoing = check(takeEntry(min, max), answer);
        if(keepGoing < 0 || numOfGuesses <= 0){
            puts("You lose!");
            //break;
        }

        //numOfGuesses--;
            
            

    

    //}


}
