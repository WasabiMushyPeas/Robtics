//Libraries
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//function that reads all lines from a file into an array
char **readLines(char *filename, int numberOflines, char (*line)[numberOflines]) {
    FILE *fp = fopen(filename, "r");
    for (int i = 0; i < numberOflines; i++) {
        fgets(line[i], numberOflines, fp);
    }
}

//function that returns random line from a text file
char *randomLine(char *filename, int numberOflines) {
    char line[numberOflines][numberOflines];
    readLines(filename, numberOflines, line);
    int random = rand() % numberOflines;
    return line[random];
}
