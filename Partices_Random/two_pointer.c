/*
   -> Reverse of an array.
*/
#include <stdio.h>

int main()
{
    int size;

    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter Array element: ");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int k = 0, j = size - 1, temp;

    while (k < j)
    {
        temp = arr[k];
        arr[k] = arr[j];
        arr[j] = temp;
        k++;
        j--;
    }
    // print the array
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}