/*
Given a number N. Print the digits of that number from right to left separated by space.
*/
#include <stdio.h>

int main()
{
    int num, i;
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        scanf("%d", &i);
        printf("%d ", i);
    }

    // for (i = 1; i <= num; i++)
    // {
    //     printf("%d ", i);
    // }
    return 0;
}