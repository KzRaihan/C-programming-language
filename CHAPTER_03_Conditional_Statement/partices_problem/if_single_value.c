#include <stdio.h>

int main()
{
    if (0.75)
    {
        printf("\nHello: %d\n", 3 != 3 && 8 < 5 || 3 == 3);
        if (1)
        {
            printf("Hi: %d\n", 50 == 40 || 80 > 89);
        }
    }
    else
    {
        if (1)
        {
            printf("Welcome : %d\n", 5 * 3 / 2 + 3 * 10);
        }
        else
        {
            printf("Good : %d\n", 5 / 5 + 2 - 1 / 5 + 1);
        }
    }
    return 0;
}

/*
  NNB : when if condition is true never go to the else condition.
*/