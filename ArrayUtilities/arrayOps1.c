#include "arrayUtil.h"
#include "arrayUtil.c"


int main(void){
    int max = 1000;
    int min = 0;

    int array[];

    for(count = 1; count <= 25; ++count){
            array[count - 1] = count;
        }

    printIntArray(array, 25);
    printf("arrayops1 finished\n");

    setAllIntArray(array, 25, 0);
    puts("Zeroing array"); 


    randIntArray( array, 25, min, max);
    puts("set values to random");


    sortIntArray(array, 25);
    puts("Sorted");
    return 0;
}
