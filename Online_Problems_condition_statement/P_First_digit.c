/*
Given a number X. Print "EVEN" if the first digit of X is even number. Otherwise print "ODD".
Input:
containing a number X (999 < X  ≤  9999)
*/
#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    int ans = num / 1000;

    if (ans % 2 == 0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }
    return 0;
}

/*
here, input start with: x < 999 means 1000(which is four digit)
assume:
    num = 8540

    -> ans = num / 1000
           = 8540 / 1000                  // calculation
           = 8                               1000)8540(8 <- ans is the first digit : 8
                                                  8000
                                                 --------
                                                     540 (x) not remainder
    -> if condition
        ans % 2 == 0
        = 8 % 2 == 0                       // CALCULATION
        = 0 == 0  (true)                          2) 8 ( 4
    -> go to if body:                                8
        print : EVEN                                -----
                                                      0  <- remainder is : 0

   * NNB:
       -> Any number is divided by 10 then last digit is cancel. or for 2 digit number first digit is provided.
       -> Any number is divided by 100 then last two digit is cancel. or for 3 digit number first digit is provided.
       -> Any number is divided by 1000 then last three digit is cancel. or for 4 digit number first digit is provided.
           .........

*/