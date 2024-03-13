/*
  * Insert An Element in an array.
  i/p: 2 4 6 8 10

  insert_pos : 2
  insert_value: 100

  o/p: 2 100 4 6 8 10

  * Remember that :array index is start with zero.

*/
#include <stdio.h>

int main()
{
    int size;
    printf("Enter Array size: ");
    scanf("%d", &size);

    int arr[size + 1];
    printf("Enter array element: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int in_posi, in_vla;
    printf("\nEnter the insert item position index: ");
    scanf("%d", &in_posi);

    printf("\nEnter the insert item value: ");
    scanf("%d", &in_vla);

    // here start explain code
    for (int i = size; i >= in_posi + 1; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[in_posi] = in_vla; // not index

    // * Accessing the array element
    for (int i = 0; i <= size; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}
