// keep taking numbers as input from user until user enters an odd number.
#include <stdio.h>

int main()
{
    int num;
    do
    {
        scanf("%d", &num);
        if (num % 2 != 0)
        {
            break;
        }

    } while (1);

    return 0;
}