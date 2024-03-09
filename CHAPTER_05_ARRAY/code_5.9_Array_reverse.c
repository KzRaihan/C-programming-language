/*
   write a program to print the reverse of array element.
*/
#include <stdio.h>

int main()
{
    int size;
    printf("Enter the array size: ");
    scanf("%d", &size);

    int arr[size];

    printf("\nEnter Array Element: \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nReverse of array Element are: \n");
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}