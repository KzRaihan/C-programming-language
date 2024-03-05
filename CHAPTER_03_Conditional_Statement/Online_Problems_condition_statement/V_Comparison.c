/*
Given a comparison symbol S between two numbers A and B.
Determine whether it is Right or Wrong.
*/
#include <stdio.h>

int main()
{
    int num1, num2;
    char ch;
    scanf("%d %c %d", &num1, &ch, &num2);

    if (ch == '>')
    {
        if (num1 > num2)
        {
            printf("Right\n");
        }
        else
        {
            printf("Wrong\n");
        }
    }

    else if (ch == '<')
    {
        if (num1 < num2)
        {
            printf("Right\n");
        }
        else
        {
            printf("Wrong\n");
        }
    }

    if (ch == '=')
    {
        if (num1 == num2)
        {
            printf("Right\n");
        }
        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}