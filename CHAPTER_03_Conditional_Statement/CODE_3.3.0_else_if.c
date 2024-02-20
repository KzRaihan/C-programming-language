/*
    -> else if
        -> More than one condition is require a program then use else if condition
        -> two or more condition are interconnect each other
        -> A program have more than two else if condition possible

    -> Syntax:
        if(condition 1)
        {
            do something if true
        }
        else if(condition 2)
        {
            do something when first if is false
        }

        else
        {

        }

*/

#include <stdio.h>

int main()
{
    if (0.75)
    {
        if (-9.00)
        {
            printf("Hello: %d\n", 3 != 2 == 8 < 5);
        }
    }
    else if (1)
    {
        printf("Kamruzzaman Raihan \n");
    }

    else
    {
        printf("Bangladesh\n");
    }

    return 0;
}
/*
    * code explain
    if(0.75) true
    {
        if(-9.00)
        {
            3 != 2 ==    8 < 5
            T      ==       F
            Output : F(0)
            then never go to else if and else conditions

        }
    }
    final output
    Hello : 0

*/