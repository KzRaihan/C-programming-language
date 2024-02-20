/*
   -> write a program to find if a character entered by user is upper case or not?

*/
#include <stdio.h>

int main()
{
    char character;

    printf("Enter Any Character: ");
    scanf("%c", &character);

    if (character >= 'A' && character <= 'Z')
    {

        printf("Upper Character: %c\n", character);
    }
    else if (character >= 'a' && character <= 'z')
    {
        printf("Lower Character : %c\n", character);
    }
    else
    {
        printf("NOT English Letter\n");
    }

    return 0;
}