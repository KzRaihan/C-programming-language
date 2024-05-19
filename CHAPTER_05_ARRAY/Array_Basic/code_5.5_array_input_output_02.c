/*
  array input and output using loop
  -> array index start with 0.
  -> array index end with size - 1
*/
#include <stdio.h>

int main()
{
    int arr[5]; // array declare
                // arr[0], arr[1],arr[2],arr[3],arr[4]

    printf("\nEnter array Element: ");

    // input form user
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nArray Element are  \n");
    // output to console

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}