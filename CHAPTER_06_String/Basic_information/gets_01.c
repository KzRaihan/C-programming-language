#include <stdio.h>

int main()
{
    char name[10];
    printf("Enter your name: ");
    gets(name);

    printf("Your name: %s\n", name);
    return 0;
}