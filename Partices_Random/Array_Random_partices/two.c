// Array initialization
#include <stdio.h>

int main()
{
    int price[] = {20, 10, 30, 40, 50, 60};

    int size = sizeof(price); // show by byte value || where it's : 6 * 4 = 24 bytes.
    int num = size / 4;

    printf("Array size: %d bytes\n", num);

    printf("\nArray Element are\n");
    for (int i = 0; i < num; i++)
    {
        printf("%d\n", price[i]);
    }
    return 0;
}