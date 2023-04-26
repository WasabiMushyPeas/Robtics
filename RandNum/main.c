#include<stdio.h>
#include<stdlib.h>
#include <time.h>

// Funcion that returns a random line from a file
char *getRandomLine(char *filename) {
    srand(time(NULL));
    FILE *fp = fopen(filename, "r");
    char *line = NULL;
    size_t len = 0;
    ssize_t read;
    int i = 0;
    int random = rand() % 8;
    while ((read = getline(&line, &len, fp)) != -1) {
        if (i == random) {
            break;
        }
        i++;
    }
    fclose(fp);
    return line;
}


int main()
{
    int numberOfSayings = 5;
    char yesOrNo;
    char sayings[numberOfSayings][200];

    puts("Welcome to the 8 ball roler");
    puts("Do you want to role the ball? (y/n)");
    scanf("%s", &yesOrNo);

    if(yesOrNo == 'y')
    {

        puts(getRandomLine("./8ballSayings.txt"));

    }
    else
    {
        printf("%s", yesOrNo);
        puts("Goodbye");
    }

    return 0;
}




