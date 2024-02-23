/*
    print the table of a number input by user

*/
#include <stdio.h>

int main()
{
    int num, result;
    printf("Enter Number: ");
    scanf("%d", &num);

    for (int i = 1; i <= 10; i++)
    {
        result = num * i;
        printf("%d X %d = %d\n", num, i, result);
    }
    return 0;
}