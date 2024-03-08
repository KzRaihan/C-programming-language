/*
    print all the odd numbers from 5 to num
*/

#include <stdio.h>

int main()
{
    int num;
    printf("Enter Number: ");
    scanf("%d", &num);

    for (int i = 5; i <= num; i++)
    {
        if (i % 2 == 0) // i = even numbers then skip the print
        {
            continue;
        }
        printf("%d\n", i);
    }

    return 0;
}