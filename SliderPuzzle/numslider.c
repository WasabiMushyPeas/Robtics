#include "numslider.h"

// Fuction: fillPuzzle
// fills an array that is 5 by 5 with numbers 1-25 in a random order
void fillPuzzle(int height, int width, int puzzle[5][5])
{
    // printf("fillPuzzle\n");
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

    printf("Puzzle filled\n");
}

// Function: printPuzzleWithSides
void printPuzzleWithSides(int height, int width, int puzzle[5][5])
{
    // clear screen
    system("cls");

    // print instructions
    printf("The goal of the game is to get the numbers in order from 1-25\n");
    printf("the blank space is represented by 0\n");

    // printf("printPuzzleWithSides\n");
    int i = 0;
    int j = 0;
    int k = 0;
    int l = 0;
    int m = 0;
    int n = 0;

    // Print top border
    for (i = 0; i < width * 5 + 1; i++)
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
        for (l = 0; l < width * 5 + 1; l++)
        {
            printf("-");
        }
        printf("\n");
    }

    printf("w = up, s = down, a = left, d = right, q = quit\n");
}

// Function: shufflePuzzle
void shufflePuzzle(int height, int width, int puzzle[5][5])
{
    // seed random number generator
    srand(time(NULL));

    // printf("shufflePuzzle\n");
    int i = 0;
    int j = 0;
    int k = 0;
    int l = 0;
    int m = 0;
    int n = 0;

    // Shuffle puzzle
    for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
        {

            // Generate random numbers
            k = rand() % height;
            l = rand() % width;

            // Swap numbers
            m = puzzle[i][j];
            n = puzzle[k][l];
            puzzle[i][j] = n;
            puzzle[k][l] = m;
        }
    }
}

// Function: findBlank
void findBlankSpace(int height, int width, int puzzle[5][5], int *blankRow, int *blankCol)
{
    // printf("findBlank\n");
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
}

// Function: makeBlankSpace
// random place in the puzzle set to 0
void makeBlankSpace(int height, int width, int puzzle[5][5])
{
    // printf("makeBlankSpace\n");

    int k = 0;
    int l = 0;

    // Generate random numbers
    k = rand() % height;
    l = rand() % width;

    puzzle[k][l] = 0;
}

// Function: moveUp
void moveUp(int height, int width, int puzzle[5][5])
{
    // printf("moveUp\n");
    int blankRow = 0;
    int blankCol = 0;
    int temp = 0;

    // Find blank space
    findBlankSpace(height, width, puzzle, &blankRow, &blankCol);

    // Check if blank space is on top row
    if (blankRow == 0)
    {
        printf("Can't move up\n");
    }
    else
    {
        // Swap blank space with number above it
        temp = puzzle[blankRow][blankCol];
        puzzle[blankRow][blankCol] = puzzle[blankRow - 1][blankCol];
        puzzle[blankRow - 1][blankCol] = temp;
    }
}

// Function: moveDown
void moveDown(int height, int width, int puzzle[5][5])
{
    // printf("moveDown\n");
    int blankRow = 0;
    int blankCol = 0;
    int temp = 0;

    // Find blank space
    findBlankSpace(height, width, puzzle, &blankRow, &blankCol);

    // Check if blank space is on bottom row
    if (blankRow == height - 1)
    {
        printf("Can't move down\n");
    }
    else
    {
        // Swap blank space with number below it
        temp = puzzle[blankRow][blankCol];
        puzzle[blankRow][blankCol] = puzzle[blankRow + 1][blankCol];
        puzzle[blankRow + 1][blankCol] = temp;
    }
}

// Function: moveLeft
void moveLeft(int height, int width, int puzzle[5][5])
{
    // printf("moveLeft\n");
    int blankRow = 0;
    int blankCol = 0;
    int temp = 0;

    // Find blank space
    findBlankSpace(height, width, puzzle, &blankRow, &blankCol);

    // Check if blank space is on left column
    if (blankCol == 0)
    {
        printf("Can't move left\n");
    }
    else
    {
        // Swap blank space with number to the left of it
        temp = puzzle[blankRow][blankCol];
        puzzle[blankRow][blankCol] = puzzle[blankRow][blankCol - 1];
        puzzle[blankRow][blankCol - 1] = temp;
    }
}

// Function: moveRight
void moveRight(int height, int width, int puzzle[5][5])
{
    // printf("moveRight\n");
    int blankRow = 0;
    int blankCol = 0;
    int temp = 0;

    // Find blank space
    findBlankSpace(height, width, puzzle, &blankRow, &blankCol);

    // Check if blank space is on right column
    if (blankCol == width - 1)
    {
        printf("Can't move right\n");
    }
    else
    {
        // Swap blank space with number to the right of it
        temp = puzzle[blankRow][blankCol];
        puzzle[blankRow][blankCol] = puzzle[blankRow][blankCol + 1];
        puzzle[blankRow][blankCol + 1] = temp;
    }
}

// Function: checkWin
int checkWin(int height, int width, int puzzle[5][5])
{
    // printf("checkWin\n");
    int i = 0;
    int j = 0;
    int num = 1;
    int win = 1;
    for (i = 0; i < height && win == 1; i++)
    {
        for (j = 0; j < width && win == 1; j++)
        {
            if (puzzle[i][j] != num && num != 0)
            {
                win = 0;
            }
            num++;
        }
    }
    return win;
}

// Function: scoure
// function that takes number of moves diffuculty and time and returns a score
double score(int moves, int difficulty, double time)
{
    // printf("score\n");
    int score = 0;
    score = (difficulty * 1000) - (moves * 100) - (time);
    return score;
}

// write a function that printWin in ascii art
// print ascii art you win
void printAsciiArt(int moves, int difficulty, double time)
{
    // clear screen
    system("cls");

    printf("          _______                       _________ _       \n");
    printf(" |\\     /|(  ___  )|\\     /|    |\\     /|\\__   __/( (    /|\n");
    printf(" ( \\   / )| (   ) || )   ( |    | )   ( |   ) (   |  \\  ( |\n");
    printf("  \\ (_) / | |   | || |   | |    | | _ | |   | |   |   \\ | |\n");
    printf("   \\   /  | |   | || |   | |    | |( )| |   | |   | (\\ \\) |\n");
    printf("    ) (   | |   | || |   | |    | || || |   | |   | | \\   |\n");
    printf("    | |   | (___) || (___) |    | () () |___) (___| )  \\  |\n");
    printf("    \\_/   (_______)(_______)    (_______)\\_______/|/    )_)\n");

    printf("\n\nYour score was: \n");
    printf("%d\n", score(moves, difficulty, time));
    printf("Moves: %d\n", moves);
    printf("Difficulty: %d\n", difficulty);
    printf("Time: %d sec\n", (int)time);
}
