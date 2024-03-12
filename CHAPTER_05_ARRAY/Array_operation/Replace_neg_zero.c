/*
Given an array eliminate the negative number and replace by zero.

i/p: 20 -60 36 -50
o/p: 20 0 36 0

*/
#include <stdio.h>

int main()
{
    int size;
    printf("Enter the array size: ");
    scanf("%d", &size);

    int arr[size];

    printf("\nEnter the array Element: \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // calculation
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            arr[i] = 0;
        }
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}