#include <stdio.h>

int main()
{
    int a[5];
    printf("Enter 5 integer: \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        if (i < 3)
        {
            printf("1st if: %d\n", a[i]);
        }
        if (i < 5)
        {
            printf("2nd if: %d\n", a[i]);
        }
        printf("\n");
    }
    return 0;
}