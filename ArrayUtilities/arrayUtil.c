#include "arrayUtil.h"

void printIntArray(int array[], int size){
    for(int i = 0; i < 25;  i++){
    printf("value of array[%d] = %d\n", i, array[i]);
    }
}

void setAllIntArray(int array[], int size, int value){ 
    for(int i = 0; i < 25;  i++){
    array[i] = value;
    printf("new value of array[%d] = %d\n", i, array[i]);
    }
}



int comparisonFn(const void *p1, const void *p2){
    int value1 = *(int*)p1;
    int value2 = *(int*)p2;
    return value1 - value2; 
    }
// add prototype to header if you want
//int comparisonFn(const void *p1, const void *p2);

void sortIntArray(int array[], int size){
    
    qsort(array, 25, sizeof(int), comparisonFn);
    for(int i = 0; i < 25; i++){
        printf("[%d]: %d\n", 1, array[i]);       
        }
    

}

void printCharArray(char array[], int size){
    for(int i = 0; i < size; i++){
        printf("the value of array [%d] = %c\n", i, array[i]);
    }

}

void randIntArray(int array[], int size, int min, int max){
    fflush(stdout);
    srand(time(NULL));
    for(int i = 0; i < 25;  i++){
    int range = max - min;
    int randNum;
    randNum = (rand() % range) + min;        
    array[i] = randNum;
    printf("value of array[%d] is %d\n", i, array[i]);
    }
}

void setAllCharArray(char array[], int size, char c){
    for(int i = 0; i < size;  i++){
    array[i] = c ;
    printf("The new value array[%d] is %c\n", i, array[i]);
    }
}

void randPassword(char array[], int size){
    for(int i = 0; i < size;  i++){
        char randChar = 0;

        int randType = rand() % 3;
        switch (randType){
        case 0:
            randChar = (rand() % 26) + 65 ;
            break;
        case 1:
            randChar = (rand() % 26) + 97 ;
            break;
        case 2:
            randChar = (rand() % 10) + 48 ;
            break;
        }            
            array[i] = randChar;
    }
}

void helloWorld(char array[]){
    for(int i = 0; i < 1;  i++){
        array[0] = 'H' ;        
        array[1] = 'e' ;
        array[2] = 'l' ;
        array[3] = 'l' ;
        array[4] = 'o' ;
        array[5] = ' ' ;
        array[6] = 'W' ;
        array[7] = 'o' ;
        array[8] = 'r' ;
        array[9] = 'l' ;
        array[10] = 'd' ;
        array[11] = '!' ;
        printf("array[] = %c %c %c %c %c %c %c %c %c %c %c %c\n", array[0], array[1], array[2], array[3], array[4], array[5], array[6], array[7], array[8], array[9], array[10], array[11] );
    }
}

int charCountInArray(char array[], int size, char c){
    int num = 0;
    for(int i = 0; i < 12; i++){
        if(array[i] == 'l'){
            num = num + 1;
        }
        
    }
    return num;
}


