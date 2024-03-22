// * Direct Initialization
#include <stdio.h>

int main()
{
    char name[] = {'R', 'a', 'i', 'h', 'a', 'n', ' ', '\0'};
    // printf("%s\n", name); // * using %s access then, it's must be initialization null character.
    for (int i = 0; i < 7; i++)
    {
        printf("%c\n", name[i]);
    }
    return 0;
}