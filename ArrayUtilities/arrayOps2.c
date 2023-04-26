#include "arrayUtil.h"
#include "arrayUtil.c"

int main(void){
    srand(time(0));


    char array2[] = {'A','B','C','D','E','F','G','H','I','J','K','L'};

    printCharArray(array2, 12);
    printf("arrayops2 finished\n");

    setAllCharArray(array2, 12, ' ');
    puts("Set all values to whitespace");

    for(int i = 0; i < 5; i++){
        randPassword(array2, 12);
        printf("%s\n", array2);
    }

    printf("25 paswords:\n"); 

    helloWorld(array2);
    puts("All values are Hello world");

    int numL = charCountInArray(array2, 12, 'l');
    printf("The amount of l's is %d\n", numL);
    return 0;
}
