/*
    Print all numbers from 1 to n except 8, 15;

*/
#include <stdio.h>

int main()
{
    int num;

    printf("Enter Number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        if (i == 8 || i == 15) // i = 8 and 15 then skip the print
        {
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}