/*
* Sum of Element of an array
  -> Enter 10 numbers and print the numbers also find the sum of them.

*/
#include <stdio.h>

int main()
{
    int arr[10]; // array declare
    int sum = 0;

    printf("Enter 10 Array Element: ");
    // input form user
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    // output ans sum calculation
    for (int i = 0; i < 10; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
        sum += arr[i];
    }
    printf("\nSum of the element of an array: %d", sum);

    return 0;
}