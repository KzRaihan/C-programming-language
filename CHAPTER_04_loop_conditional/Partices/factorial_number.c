/*
      print the factorial of a number n
        1! = 1
        2! = 2 * 1   or (1 * 2)
        3! = 3 * 2 * 1  or (1 * 2 * 3)
        4! = 4 * 3 * 2 * 1

*/
#include <stdio.h>

int main()
{
        int num;

        printf("Enter number: ");
        scanf("%d", &num);

        int fact = 1;
        for (int i = 1; i <= num; i++)
        {
                fact = fact * i;
        }
        printf("%d is Factorial is : %d\n", num, fact);

        return 0;
}

/*
    * Code explain

            first iteration
        -----------------------
        here,
                fact = 1
                num  = 3 (assume)
    -> initialization part (initialization part run only first time)
            i = 1
    -> condition part
            i <= num
            1 <= 3 true (go to for body)

            -> for body
                fact = fact * i;
                fact = 1 * 1
                     = 1
    -> Update
            i = i + 1
              = 1 + 1
              = 2

            Second iteration
        -----------------------
        here,
                fact = 1
                num  = 3 (assume)
                i = 2
    -> condition part
            i <= num
            2 <= 3 true (go to for body)

            -> for body
                fact = fact * i;
                fact = 1 * 2
                     = 2
    -> Update
            i = i + 1
              = 2 + 1
              = 3
            third iteration
        -----------------------
        here,
                fact = 2
                num  = 3 (assume)
                i = 3

    -> condition part
            i <= num
            3 <= 3 true (go to for body)

            -> for body
                fact = fact * i;
                fact = 2 * 3
                     = 6
    -> Update
            i = i + 1
              = 3 + 1
              = 4
            Four iteration
        -----------------------
        here,
                fact = 6
                num  = 3 (assume)
                i = 4
    -> condition part
            i <= num
            4 <= 3 false (out of for loop)


    print : fact = 6



*/