#include <stdio.h>

int main()
{
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d array Element: ", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\narray Element: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }

    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("\nMaximum Element : %d\n", max);

    return 0;
}