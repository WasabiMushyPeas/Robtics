#ifndef NUMSLIDER_H
#define NUMSLIDER_H

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <time.h>

void fillPuzzle(int height, int width, int puzzle[5][5]);
void printPuzzleWithSides(int height, int width, int puzzle[5][5]);
void shufflePuzzle(int height, int width, int puzzle[5][5]);
void findBlankSpace(int height, int width, int puzzle[5][5], int *blankSpaceRow, int *blankSpaceColumn);
void makeBlankSpace(int height, int width, int puzzle[5][5]);
void moveUp(int height, int width, int puzzle[5][5]);
void moveDown(int height, int width, int puzzle[5][5]);
void moveLeft(int height, int width, int puzzle[5][5]);
void moveRight(int height, int width, int puzzle[5][5]);
int checkWin(int height, int width, int puzzle[5][5]);
void printAsciiArt(int moves, int difficulty, double time);
double score(int moves, int difficulty, double time);

#endif