/*
 Given a number N. Print the digits of that number from right to left separated by space.
 Input
First line contains a number T (1 ≤ T ≤ 10) number of test cases.

Next T lines will contain a number N (0 ≤ N ≤ 109)
*/
#include <stdio.h>

int main()
{
    int size;
    scanf("%d", &size);

    for (int i = 1; i <= size; i++)
    {
        int num;
        scanf("%d", &num);

        do
        {

            printf("%d ", num % 10);
            num = num / 10;

        }

        while (num != 0);
        printf("\n");
    }

    return 0;
}