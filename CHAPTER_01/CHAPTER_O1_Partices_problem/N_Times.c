/*
    user will be given a positive integer N, you need to print
    "I Love Practice" N times.
*/
#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        printf("I Love Practice\n");
    }

    return 0;
}