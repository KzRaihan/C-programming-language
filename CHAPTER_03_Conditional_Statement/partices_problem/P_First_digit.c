// Given a number X. Print "EVEN" if the first digit of X is even number. Otherwise print "ODD".
#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    int res = num / 1000;
    // printf("%d\n", res);

    if (res % 2 == 0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }
    return 0;
}