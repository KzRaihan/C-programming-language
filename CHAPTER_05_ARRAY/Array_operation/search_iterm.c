/*
  >>> given an array find the item inside or not
    -> if found then print the position(0 base index).
    -> if not then print the -1.

*/
#include <stdio.h>

int main()
{
    int size;
    printf("Enter the array Size: ");
    scanf("%d", &size);

    int arr[size];
    printf("\nEnter array Element : \n");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int search_item;
    int pos = -1;
    printf("Enter Search item : ");
    scanf("%d", &search_item);

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == search_item)
        {
            pos = i;
            break;
        }
    }
    if (pos != -1)
    {
        printf("%d is found  at position(index): %d\n", search_item, pos);
    }
    else
    {
        printf("Not found: %d\n", pos);
    }

    return 0;
}