// minimum Element in an array
#include <stdio.h>

int main()
{
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size]; // array declare

    // input form user
    printf("Enter %d array element: ", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    // output to console
    printf("array element: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }

    // finding minimum array element
    int min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("\nMinimum array element: %d", min);

    return 0;
}