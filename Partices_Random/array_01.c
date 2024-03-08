#include <stdio.h>

int main()
{
    int price[] = {10.00, 1652.00, 456.00, 25.12};
    // 2nd array output
    int size = sizeof(price[]);
    printf("%d\n", size);
    printf("\nfloat array accessing \n");
    for (int j = 0; j < 4; j++)
    {
        printf("%d\n", price[j]);
    }
    return 0;
}