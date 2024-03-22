/*
   /*
  >> Create a string first_name and last_name to store details of user and
    print all the character using loop.

 * Method: Using a for loop, print each character of a given string  by user

*/
#include <stdio.h>

int main()
{
    char first_name[100];
    char last_name[100];

    //  input first name form user
    printf("\nEnter your first name: ");
    gets(first_name);

    //  input last name form user
    printf("\nEnter your last name: ");
    gets(last_name);

    // print or output first_name using loop
    printf("\nYour first name: ");

    for (int i = 0; first_name[i] != '\0'; i++)
    {
        printf("%c", first_name[i]);
    }
    // print or output first_name using loop
    printf("\nYour last name: ");

    for (int i = 0; last_name[i] != '\0'; i++)
    {
        printf("%c", last_name[i]);
    }
    return 0;
}