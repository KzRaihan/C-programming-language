/*
    -> write a program keep taking numbers as input form user until user enters an odd number.
*/
#include <stdio.h>

int main()
{
    // using for loop
    int num;
    for (int i = 1; i <= num; i++)
    {
        if (num % 2 == 1)
        {
            break;
        }
        printf("Enter Num: ");
        scanf("%d", &num);
    }

    return 0;
}