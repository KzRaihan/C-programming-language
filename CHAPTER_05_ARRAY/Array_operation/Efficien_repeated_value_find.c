/*
  write a program to find the search item if the search item is duplicated
  then print the index (position).

  i/p: 2 4 2 6 2
  search item : 2  || here, 2 is duplicated item also.
  0/p: 0 2 4

  -> 0 = first index of 2
  -> 2 = second index of 2
  -> 4 = four index of 2

*/
#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];

    printf("\nEnter Array Element: \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int search_item;
    printf("\nEnter the size item: ");
    scanf("%d", &search_item);

    int dup_pos[size];
    int j = 0;
    // all dup_pos array item is assign by zero.
    // this loop not mandatory(not necessary)
    // for (int i = 0; i < size; i++)
    // {
    //     dup_pos[i] = 0;
    // }

    // check or searching item
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == search_item)
        {
            dup_pos[j] = i;
            j++;
        }
    }
    // print the duplicated item index
    for (int i = 0; i < j; i++)
    {
        printf("%d is position: %d\n", search_item, dup_pos[i]);
    }

    return 0;
}