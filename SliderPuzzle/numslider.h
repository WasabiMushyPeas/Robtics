#ifndef NUMSLIDER_H
#define NUMSLIDER_H

#include <stdlib.h>
#include <stdio.h>

int fillPuzzle(int height, int width, int puzzle[sizeof(height)][sizeof(width)]);

int printPuzzleWithSides(int height, int width, int puzzle[sizeof(height)][sizeof(width)]);

int findBlank(int height, int width, int puzzle[sizeof(height)][sizeof(width)], int *emptyRow, int *emptyCol);

int moveUp(int height, int width, int puzzle[sizeof(height)][sizeof(width)]);

int moveDown(int height, int width, int puzzle[sizeof(height)][sizeof(width)]);

int moveLeft(int height, int width, int puzzle[sizeof(height)][sizeof(width)]);

int moveRight(int height, int width, int puzzle[sizeof(height)][sizeof(width)]);

int checkWin(int height, int width, int puzzle[sizeof(height)][sizeof(width)]);

#endif