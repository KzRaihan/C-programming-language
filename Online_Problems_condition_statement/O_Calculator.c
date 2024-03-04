/*
Given a mathematical expression. The expression will be one of
the following expressions:
  A+B
  A−B
  A∗B
  A/B

Print the result of the mathematical expression.

i/p : 7+54
o/p : 61
.......
......
*/
#include <stdio.h>

int main()
{
    int num1, num2, result;
    char ch;
    scanf("%d %c %d", &num1, &ch, &num2);

    if (ch == '+')
    {
        result = num1 + num2;
        printf("%d\n", result);
    }
    else if (ch == '-')
    {
        result = num1 - num2;
        printf("%d\n", result);
    }
    else if (ch == '*')
    {
        result = num1 * num2;
        printf("%d\n", result);
    }
    else
    {
        result = num1 / num2;
        printf("%d\n", result);
    }

    return 0;
}