/*
Given two numbers A and B. Print "Yes" if A is greater than or equal to B. Otherwise print "No".
*/
#include <stdio.h>

int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    if (num1 >= num2)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}