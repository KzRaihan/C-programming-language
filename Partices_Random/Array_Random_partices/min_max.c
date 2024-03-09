// minimum and maximum element in array
#include <stdio.h>

int main()
{
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d array element: ", size);

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nYour array Element are: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    // finding min and max element in an array
    int min = arr[0], max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        else if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("\nMinimum Element in array: %d\n", min);
    printf("\nMaximum Element in array: %d\n", max);

    return 0;
}