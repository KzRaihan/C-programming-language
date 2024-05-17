/*
Given a number N and an array A of N numbers. Print the array after doing the following operations:

Find minimum number in these numbers.
Find maximum number in these numbers.
Swap minimum number with maximum number.

*/
#include <stdio.h>

int main()
{
    int size;
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Find minimum and maximum number and they index
    int min = arr[0];
    int max = arr[0];
    int min_index = 0;
    int max_index = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            min_index = i;
        }
        if (arr[i] > max)
        {
            max = arr[i];
            max_index = i;
        }
    }

    // swap min and max indices
    int temp = arr[min_index];
    arr[min_index] = arr[max_index];
    arr[max_index] = temp;

    // display result array
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}