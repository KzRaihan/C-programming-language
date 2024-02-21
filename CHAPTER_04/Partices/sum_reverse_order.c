/*
    -> write a program to print the sum of first n natural numbers and also print them in reverse order

*/
// method_01
#include <stdio.h>

int main()
{
    int num, sum = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    for (int i = 1, j = num; i <= num && j >= 1; i++, j--)
    {
        sum = sum + i;
        printf("%d\n", j);
    }
    printf("Summation: %d\n", sum);
    return 0;
}
/*
   -> code explain
     within for loop
     >> first i is work for summation.
     >> second j is work for print reverse order.

                iteration one
            ---------------------------------
                here, num = 4(assume) and sum = 0

        i = 1 , j = 4
        1<=4 && 4>=1 true
        {
            sum = sum + i
            sum = 0 + 1
            sum = 1

            print j= 4
        }

        increment i = i + 1
                  i = 1 + 1
                  i = 2

       Decrement j = j - 1
                  j = 4 - 1
                  j = 3

                        iteration two
            ---------------------------------
                here, num = 4 and sum = 1

        i = 2 , j = 3
        2<=4 && 3>=1 true
        {
            sum = sum + i  // sum = 1(previous iteration one)
            sum = 1 + 2
            sum = 3

            print j = 3
        }

        increment i = i + 1
                  i = 2 + 1
                  i = 3

       Decrement j = j - 1
                  j = 3 - 1
                  j = 2

                        iteration three
            ---------------------------------
                here, num = 4 and sum = 3

        i = 3 , j = 2
        3<=4 && 2>=1 true
        {
            sum = sum + i  // sum = 1(previous iteration one)
            sum = 3 + 3
            sum = 6

            print j = 2
        }

>> continuous run until the condition is false




*/