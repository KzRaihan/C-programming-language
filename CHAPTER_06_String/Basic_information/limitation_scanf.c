/*
 * scanf can't input multi-word characters with spaces because it treats them as separate words/ input.

*/
#include <stdio.h>

int main()
{
    char name[25];

    printf("Enter Your full name : ");
    scanf("%s", name); // * i/p: MD Kamruzzaman Raihan

    printf("Your name is : ");
    printf("%s", name); //*  o/p: MD
                        // * when, scanf() reach space then, it stop to take input.
                        // so, the first character input MD then scanf faces then space then it terminate there and show only "MD".

    return 0;
}