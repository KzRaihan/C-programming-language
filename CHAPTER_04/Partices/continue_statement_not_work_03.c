/*
    Remember that: continue only skip or jump under(down) the instructions .
*/
#include <stdio.h>

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", i);
        if (i == 5)
        {
            continue;
        }
    }
    return 0;
}