#include <stdio.h>

int main()
{
    for (int i = 0; i < 5; i++)
    {
        if (i < 3)
        {
            printf("1st if: %d\n", i);
        }
        if (i < 5)
        {
            printf("2nd if: %d\n", i);
        }
        printf("\n");
    }
    return 0;
}