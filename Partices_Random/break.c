#include <stdio.h>

int main()
{
    int num;
    for (int i = 1;; i++)
    {
        printf("Enter Number: ");
        scanf("%d", &num);

        if (num % 2 != 0)
        {
            break;
        }
    }
    return 0;
}