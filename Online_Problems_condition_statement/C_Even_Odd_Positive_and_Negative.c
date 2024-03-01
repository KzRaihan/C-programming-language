/*
Given N numbers. Count how many of these values are even, odd, positive and negative.

*/
#include <stdio.h>

int main()
{
    int size;
    int count_even = 0, count_odd = 0, count_pos = 0, count_neg = 0;

    scanf("%d", &size);
    for (int i = 1; i <= size; i++)
    {
        scanf("%d", &i);
        if (i % 2 == 0)
        {
            count_even += 1;
        }
        else
        {
            count_odd += 1;
        }

        if (i > 0)
        {
            count_pos += 1;
        }
        else if (i < 0)
        {
            count_neg += 1;
        }
        else
        {
        }
    }
    printf("Even: %d\n", count_even);
    printf("Odd: %d\n", count_odd);
    printf("Positive: %d\n", count_pos);
    printf("Negative: %d\n", count_neg);

    return 0;
}

/*
          * code explain
          i = 1 , num = 5
              i/p : -5, 0, -3, -4, 12
    1st if condition:                                                Calculation
            if (i % 2 == 0)                                         2) -5 ( -2
             = -5 % 2 == 0                                              -4
             = -1 == 0 (False)                                         -----
             go to 1st else part                                         -1 <- is not zero

    1st else condition:
            count_odd += 1;
            = 0  +  1
            = 1
    second if condition:
             if (i > 0)
                = -5 > 0(false)
    second else if
               (i < 0)
               = -5 < 0 (true)
               body:
                count_neg += 1;
                = 0 + 1
                = 1

......................
..................


*/