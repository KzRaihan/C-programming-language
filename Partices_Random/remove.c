/*
Deletion operation with index operating.
*/
#include <stdio.h>

int main()
{
    int arr[100];
    int size;

    printf("Array size: ");
    scanf("%d", &size);

    printf("Enter Array Element: ");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int in_pos, in_vla;

    printf("Enter Deletion index position: ");
    scanf("%d", &in_pos);

    for (int i = in_pos; i < size - 1; i++) // *  for (int i = in_pos - 1; i < size - 1; i++) for user view
    {
        arr[i] = arr[i + 1];
    }

    for (int i = 0; i < size - 1; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}