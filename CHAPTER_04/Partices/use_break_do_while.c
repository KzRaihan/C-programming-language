/*
    -> write a program keep taking numbers as input form user until user enters an odd number.


*/
#include <stdio.h>

int main()
{
    // using do while loop
    int num;

    do
    {
        printf("Enter Num: ");
        scanf("%d", &num);

        if (num % 2 != 0)
        {
            break;
        }
    } while (1);

    return 0;
}