#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int keepGoing = 1;
int number;
int numberOfGuessesLeft = 5;
int guess;


int random_number(int min, int max);

int main(){
    srand(time(NULL));
    number = random_number(0, 20);


    printf("Welcome to the Higher or Lower guessing game. Guess a number between 0 and 20\n");
    
    while(keepGoing){


        scanf("%d", &guess);

        if(guess < number){
            printf("Too low\n");
        }else if(guess > number){
            printf("Too high\n");
        }else{
            keepGoing = 0;
            printf("Yayy, you won!\n");
        }

        numberOfGuessesLeft--;

        if(numberOfGuessesLeft < 0){
            printf("You ran out of guesses\n");
            keepGoing = 0;
        }



    }



    return 0;
}



int random_number(int min, int max) {
    return (rand() % (max - min + 1)) + min;
}

