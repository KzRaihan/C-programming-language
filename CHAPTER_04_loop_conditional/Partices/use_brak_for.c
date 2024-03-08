/*
    -> write a program keep taking numbers as input form user enter a number which is multiple of 7.


*/
#include <stdio.h>

int main()
{
    // using do while loop
    int num;
    for (int i = 1;; i++)
    {
        printf("Enter Number: ");
        scanf("%d", &num);
        if (num % 7 == 0)
        {
            break;
        }
    }
    return 0;
}