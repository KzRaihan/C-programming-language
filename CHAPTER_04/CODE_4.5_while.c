/*
    -> while loop syntax
        initialization
        while(condition){
            do somethings if condition is true

            update (increment or decrement);
        }

* Q.N: print the number from 0 to n, if n is given by user. (using while loop)
*/
#include <stdio.h>

int main()
{
    int n;

    printf("\nEnter terminate n value : ");
    scanf("%d", &n);

    int i = 0; // declaration and initialization
    while (i <= n)
    {
        printf("%d\n", i);
        i++;
    }

    return 0;
}