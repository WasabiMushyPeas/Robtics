#include "numslider.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{

    // Declare variables
    int height = 5;
    int width = 5;
    int characterNum = 0;
    char move;
    int difficulty = 4;
    int moves = 0;
    double time = 0;
    int puzzle[5][5];

    // Fill puzzle with numbers
    fillPuzzle(height, width, puzzle);

    // Print puzzle
    printPuzzleWithSides(height, width, puzzle);

    // shuffle the Puzzle
    shufflePuzzle(height, width, puzzle);

    // make blank space
    makeBlankSpace(height, width, puzzle);

    clock_t t;
    t = clock();

    // Main game loop
    while (1)
    {

        // Print puzzle
        printPuzzleWithSides(height, width, puzzle);

        // Ask user for input
        printf("Enter a letter: ");

        // Get input
        scanf("%c", &move);

        // Move blank space
        switch (move)
        {
        case 'w':
            moveUp(height, width, puzzle);
            break;
        case 's':
            moveDown(height, width, puzzle);
            break;
        case 'a':
            moveLeft(height, width, puzzle);
            break;
        case 'd':
            moveRight(height, width, puzzle);
            break;
        case 'q':
            printf("Quitting...\n");
            return 0;
        default:
            printf("Invalid input\n");
            break;
        }

        // clear input buffer
        while ((characterNum = getchar()) != '\n' && characterNum != EOF)
            ;

        // Check if puzzle is solved
        if (moves == 4)
        {
            t = clock() - t;
            time = (double)t / CLOCKS_PER_SEC;

            printAsciiArt(moves, time, difficulty);
            return 0;
        }
        moves++;
    }
}