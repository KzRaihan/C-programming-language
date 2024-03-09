// write a program to find the position of an given data within array
#include <stdio.h>

int main()
{
    int size;
    printf("Enter the array size: ");
    scanf("%d", &size);

    int arr[size];

    printf("\nEnter %d array element: ", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nArray element: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    // finding largest element and it's position in array
    int max = arr[0], max_pos = 0;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            max_pos = i; // if we count by 0 base indexing
        }
    }
    printf("Maximum Element within array : %d\n", max);
    printf("\nPosition Maximum Element within array : %d\n", max_pos + 1);
    return 0;
}