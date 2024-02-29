/*
Given a number N. Print all even numbers between 1 and N inclusive in separate lines.
If there are no even numbers print -1.

*/
#include <stdio.h>

int main()
{
    int num, odd = -1, count = 0;
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
        else
        {
            count = 1;
        }
    }
    if (count == 0)
    {
        printf("%d\n", odd);
    }

    return 0;
}
/*
If there are no even numbers print -1.



*/