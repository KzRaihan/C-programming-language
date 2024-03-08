/*
    -> write a program to print the sum of first n natural numbers and also print them in reverse order

*/
// method_02
#include <stdio.h>

int main()
{
    int num, sum = 0;

    printf("Enter the Number: ");
    scanf("%d", &num);

    for (int i = num; i >= 1; i--)
    {
        sum = sum + i;
        printf("%d\n", i);
    }
    printf("summation : %d\n", sum);

    return 0;
}

/*
    * Code Explain

                        here, num = 3 and sum = 0
                    * 1st iteration
                ----------------------
            initialization part
            i = num
            i = 3
            condition part
                    i >= 1
                    3 >= 1 (true)
            loop body part
                    sum = sum + i;
                    sum = 0 + 3
                    sum = 3

                    printf (i)
                        i = 3
            update part
                    i-- = i - 1
                        = 3 - 1
                        = 2
        Output: sum = 3
                3 <- print

                   * 2nd iteration
                ----------------------
                here, num = 3 and sum = 3
            initialization part
            i = 2
            condition part
                    i >= 1
                    2 >= 1 (true)
            loop body part
                    sum = sum + i;
                    sum = 3 + 2
                    sum = 5

                    printf (i)
                        i = 2
            update part
                    i-- = i - 1
                        = 2 - 1
                        = 1

            Output: sum = 5
                3  2 <- print

                  *  3Th iteration
                ----------------------
                here, num = 3 and sum = 5
            initialization part
            i = 1
            condition part
                    i >= 1
                    1 >= 1 (true)
            loop body part
                    sum = sum + i;
                    sum = 5 + 1
                    sum = 6

                    printf (i)
                        i = 1
            update part
                    i-- = i - 1
                        = 1 - 1
                        = 0

            Output: sum = 6
                3  2  1 <- print


                  *  4Th iteration
                ----------------------
                here, num = 3 and sum = 5
            initialization part
            i = 0
            condition part
                    i >= 1
                    0 >= 1 (False)
            loop body part
                    can not go to loop body

            Final Output: sum = 6
                            3  2  1 <- print

*/