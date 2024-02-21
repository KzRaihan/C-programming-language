/*
    -> syntax of for loop

    for(initialization; condition; update){
        do somethings if condition is true
    }

    Q.N: Print the numbers form 0 to 100 using for loop.


*/
#include <stdio.h>

int main()
{
    int i = 0;
    for (i = 0; i <= 100; i++)
    {
        printf("%d\t", i);
    }

    return 0;
}