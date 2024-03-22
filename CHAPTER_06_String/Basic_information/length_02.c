/*
 *  user input to find length
 */
#include <stdio.h>

int main()
{
    char name[100]; // memory allocation
    printf("Enter your name: ");
    gets(name);

    int len = 0;
    while (name[len] != '\0')
    {
        len++;
    }
    printf("Your name is %d characters long\n", len);
    return 0;
}