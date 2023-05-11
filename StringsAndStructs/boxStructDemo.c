#include <stdlib.h>
#include <stdio.h>
#include "strStruct.h"

// calculates the volume of the box b and returns it.
float boxCalcVolume(struct box b)
{
    return b.length * b.width * b.height;
}

int main()
{
    // Create a ‘box’ data structure by having the user enter data
    struct box b;

    // Prompt the user to enter a length measurement (max len. 100).
    printf("Enter a length measurement: ");
    // Read the user's length measurement into b.length
    scanf("%f", &b.length);

    // Prompt the user to enter a width measurement (max len. 100).
    printf("Enter a width measurement: ");
    // Read the user's width measurement into b.width
    scanf("%f", &b.width);

    // Prompt the user to enter a height measurement (max len. 100).
    printf("Enter a height measurement: ");
    // Read the user's height measurement into b.height
    scanf("%f", &b.height);

    // Print the volume of the box using the boxCalcVolume function
    printf("The volume of the box is: %f\n", boxCalcVolume(b));
}
