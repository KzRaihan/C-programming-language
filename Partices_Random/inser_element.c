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

    printf("Enter array position and insert value: ");
    scanf("%d %d", &in_pos, &in_vla);

    for (int i = size; i >= in_pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    // assign the value
    arr[in_pos] = in_vla; // this is for index
    // arr[in_pos-1] = in_vla; // this is for user view position.
    for (int i = 0; i <= size; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}