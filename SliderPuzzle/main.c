#include "numslider.h"
#include <stdlib.h>
#include <stdio.h>

int main()
{

    // Declare variables
    int height = 0;
    int width = 0;
    int characterNum = 0;
    char move = ' ';

    // Ask user for size of puzzle
    printf("Enter the height of the puzzle: ");
    scanf("%d", &height);
    printf("Enter the width of the puzzle: ");
    scanf("%d", &width);

    // Allocate memory for puzzle
    printf("height: %d\n", sizeof(height));
    printf("width: %d\n", sizeof(width));
    int puzzle[sizeof(height)][sizeof(width)];
    printf("Puzzle created\n");
    printf("Puzzle size: %d x %d \n", height, width);

    // Fill puzzle with numbers
    fillPuzzle(height, width, puzzle);

    // Main game loop
    while (1)
    {
        printf("Main game loop\n");
        // Print puzzle
        printPuzzleWithSides(height, width, puzzle);

        // Check if user has won
        if (checkWin(height, width, puzzle))
        {
            printf("You win!\n");
            return 0;
        }

        // Ask user for input
        printf("Enter a number to move: ");

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

        // clear user input
        while ((move = getchar()) != '\n' && move != EOF)
            ;
    }
}
