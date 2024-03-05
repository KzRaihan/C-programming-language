/*
 Given a number N. Print the digits of that number from right to left separated by space.
*/
#include <stdio.h>

int main()
{
    // int size, num;
    // scanf("%d", &size);
    int num;
    scanf("%d", &num);

    while (num != 0)
    {

        printf("\nremder: %d", num % 10);
        num = num / 10;
        printf("\nans: %d\n", num);
    }
    printf("\n");

    return 0;
}