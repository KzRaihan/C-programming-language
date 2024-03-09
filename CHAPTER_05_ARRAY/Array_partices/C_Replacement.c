/*
Given a number N and an array A of N numbers. Print the array after doing the following operations:

Replace every positive number by 1.
Replace every negative number by 2

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
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0) //  for all zero elements within an array are replacement by 0.
        {
            arr[i] = 0;
            printf("%d ", arr[i]);
        }
        else if (arr[i] > 0) // for all positive numbers replacement by 1.
        {
            arr[i] = 1;
            printf("%d ", arr[i]);
        }
        else // for all negative numbers replacement by 2.
        {
            arr[i] = 2;
            printf("%d ", arr[i]);
        }
    }
    return 0;
}
