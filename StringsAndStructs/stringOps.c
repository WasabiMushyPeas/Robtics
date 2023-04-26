#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// Create three strings firstName (max len. 100), lastName(max len. 100), middleName(max len. 100), fullName(max len. 305)
char firstName[100];
char lastName[100];
char middleName[100];
char fullName[305];

int main()
{
    // Prompt the user to enter their last name
    printf("Enter your last name: ");
    // Read the user's last name into lastName
    scanf("%s", lastName);

    // Prompt the user to enter their first name
    printf("Enter your first name: ");
    // Read the user's first name into firstName
    scanf("%s", firstName);

    // Prompt the user to enter their middle name
    printf("Enter your middle name: ");
    // Read the user's middle name into middleName
    scanf("%s", middleName);

    // Print back the length of each name entry
    printf("Length of first name: %d\n", strlen(firstName));
    printf("Length of middle name: %d\n", strlen(middleName));
    printf("Length of last name: %d\n", strlen(lastName));

    // Concatenate the the user's first, middle, and last name into fullName
    strcat(fullName, firstName);
    strcat(fullName, " ");
    strcat(fullName, middleName);
    strcat(fullName, " ");
    strcat(fullName, lastName);

    // Print fullname and ", your name was composed using strings!"
    printf("Hello %s, your name was composed using strings!\n", fullName);

    // Print their name in all caps, using your library to change fullName to all uppercase
    for (int i = 0; i < strlen(fullName); i++)
    {
        fullName[i] = toupper(fullName[i]);
    }
    printf("Your name in all caps: %s\n", fullName);

    // Print their name in all lowercase, using your library to change fullName to all lowercase
    for (int i = 0; i < strlen(fullName); i++)
    {
        fullName[i] = tolower(fullName[i]);
    }
    printf("Your name in all lowercase: %s\n", fullName);
}
