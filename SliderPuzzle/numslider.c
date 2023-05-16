#include "numslider.h"

// Function: fillPuzzle
// Fill the puzzle with random numbers from 1 to height * width - 1
int fillPuzzle(int height, int width, int puzzle[sizeof(height)][sizeof(width)])
{
    printf("fillPuzzle\n");
    int i = 0;
    int j = 0;
    int num = 1;
    for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
        {

            puzzle[i][j] = num;
            num++;
        }
    }
    puzzle[height - 1][width - 1] = 0;

    printf("Puzzle filled\n");

    return 0;
}

// Function: printPuzzleWithSides
// Print the puzzle with a border around it and the numbers aligned each in a box
int printPuzzleWithSides(int height, int width, int puzzle[sizeof(height)][sizeof(width)])
{
    printf("printPuzzleWithSides\n");
    int i = 0;
    int j = 0;
    int k = 0;
    int l = 0;
    int m = 0;
    int n = 0;

    // Print top border
    for (i = 0; i < width * 4 + 4; i++)
    {
        printf("-");
    }
    printf("\n");

    // Print puzzle
    for (j = 0; j < height; j++)
    {
        printf("|");
        for (k = 0; k < width; k++)
        {
            printf(" %2d |", puzzle[j][k]);
        }
        printf("\n");
        // Print bottom border
        for (l = 0; l < width * 4 + 4; l++)
        {
            printf("-");
        }
        printf("\n");
    }

    return 0;
}

// Function: findBlank
int findBlank(int height, int width, int puzzle[sizeof(height)][sizeof(width)], int *blankRow, int *blankCol)
{
    printf("findBlank\n");
    int i = 0;
    int j = 0;
    int found = 0;
    for (i = 0; i < height && found == 0; i++)
    {
        for (j = 0; j < width && found == 0; j++)
        {
            if (puzzle[i][j] == 0)
            {
                *blankRow = i;
                *blankCol = j;
                found = 1;
            }
        }
    }

    return 0;
}

// Function: moveUp
int moveUp(int height, int width, int puzzle[sizeof(height)][sizeof(width)])
{
    printf("moveUp\n");
    int blankRow = 0;
    int blankCol = 0;
    findBlank(height, width, puzzle, &blankRow, &blankCol);
    if (blankRow == 0)
    {
        return 1;
    }
    else
    {
        int temp = puzzle[blankRow][blankCol];
        puzzle[blankRow][blankCol] = puzzle[blankRow - 1][blankCol];
        puzzle[blankRow - 1][blankCol] = temp;
        return 0;
    }
}

// Function: moveDown
int moveDown(int height, int width, int puzzle[sizeof(height)][sizeof(width)])
{
    printf("moveDown\n");
    int blankRow = 0;
    int blankCol = 0;
    findBlank(height, width, puzzle, &blankRow, &blankCol);
    if (blankRow == height - 1)
    {
        return 1;
    }
    else
    {
        int temp = puzzle[blankRow][blankCol];
        puzzle[blankRow][blankCol] = puzzle[blankRow + 1][blankCol];
        puzzle[blankRow + 1][blankCol] = temp;
        return 0;
    }
}

// Function: moveLeft
int moveLeft(int height, int width, int puzzle[sizeof(height)][sizeof(width)])
{
    printf("moveLeft\n");
    int blankRow = 0;
    int blankCol = 0;
    findBlank(height, width, puzzle, &blankRow, &blankCol);
    if (blankCol == 0)
    {
        return 1;
    }
    else
    {
        int temp = puzzle[blankRow][blankCol];
        puzzle[blankRow][blankCol] = puzzle[blankRow][blankCol - 1];
        puzzle[blankRow][blankCol - 1] = temp;
        return 0;
    }
}

// Function: moveRight
int moveRight(int height, int width, int puzzle[sizeof(height)][sizeof(width)])
{
    printf("moveRight\n");
    int blankRow = 0;
    int blankCol = 0;
    findBlank(height, width, puzzle, &blankRow, &blankCol);
    if (blankCol == width - 1)
    {
        return 1;
    }
    else
    {
        int temp = puzzle[blankRow][blankCol];
        puzzle[blankRow][blankCol] = puzzle[blankRow][blankCol + 1];
        puzzle[blankRow][blankCol + 1] = temp;
        return 0;
    }
}

// Function: checkWin
int checkWin(int height, int width, int puzzle[sizeof(height)][sizeof(width)])
{
    printf("checkWin\n");
    int i = 0;
    int j = 0;
    int num = 1;
    int win = 1;
    for (i = 0; i < height && win == 1; i++)
    {
        for (j = 0; j < width && win == 1; j++)
        {
            if (puzzle[i][j] != num && puzzle[i][j] != 0)
            {
                win = 0;
            }
            num++;
        }
    }

    return win;
}

// Function: allocate2Darray

// Function: freePuzzle
int freePuzzle(int height, int width, int puzzle[sizeof(height)][sizeof(width)])
{
    printf("freePuzzle\n");
    int i = 0;
    int j = 0;
    for (i = 0; i < height; i++)
    {
        free(puzzle[i]);
    }

    return 0;
}
