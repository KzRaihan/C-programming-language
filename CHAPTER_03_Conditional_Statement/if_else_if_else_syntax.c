/*
    Syntax of if, else-if, else statement

  *  syntax of if and else :
        if(condition)
        {
            do something if condition true
        }

        else
        {
            do something if condition false
        }

   NB: when if condition is true then don't go to else part
     -> when only if condition is false then go to else part

*/
#include <stdio.h>

int main()
{
    if (0.75) // in c program          0-> False
              // without zero(0) all    1 -> True
    {
        printf("Hello Word\n");
    }
    else
    {
        printf("Hi Everyone\n");
    }

    return 0;
}