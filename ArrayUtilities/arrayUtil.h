#ifndef H_ARRAY
#define H_ARRAY

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printIntArray(int array[], int size);
void setAllIntArray(int array[], int size, int value);
void randIntArray(int array[], int size, int min, int max);
void sortIntArray(int array[], int size);
void printCharArray(char array[], int size);
void setAllCharArray(char array[], int size, char c);
void randPassword(char array[], int size);
int charCountInArray(char array[], int size, char c);
void helloWorld(char array[]);

#endif
