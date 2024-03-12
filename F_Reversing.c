/*
 Given a number N and an array A of N numbers. Print the array in a reversed order.

Note:

*Don't use built-in-functions
*/
#include <stdio.h>

int main()
{
    int size, i;
    scanf("%d", &size); // first line

    int arr[size]; // declare
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]); // second line
    }
    // reverse of array
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}