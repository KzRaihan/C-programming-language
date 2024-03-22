/*
  >> Create a string first_name and last_name to store details of user and
    print all the character using loop.

 * Method: Using a for loop, print each character of a given string  by user

*/
#include <stdio.h>

int main()
{
    char first_name[] = "MD Kamruzzaman";
    char last_name[] = "Raihan";

    // output of first_name using loop
    printf("\nFirst Name : ");
    for (int i = 0; first_name[i] != '\0'; i++)
    {
        printf("%c", first_name[i]);
    }
    // output of last_name using loop
    printf("\nLast Name : ");
    for (int i = 0; last_name[i] != '\0'; i++)
    {
        printf("%c", last_name[i]);
    }

    return 0;
}