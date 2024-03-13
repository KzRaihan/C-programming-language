/*
>> Given an array find the duplicated value index(position) and print the index
* Not Efficient this way to find the duplication Item position.
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
    printf("Enter Search item : ");
    scanf("%d", &search_item);

    int pos[size];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == search_item)
        {
            pos[i] = i;
        }
    }
    // access * this is the drawbacks of the code.
    for (int i = 0; i < size; i++)
    {
        printf("%d value position: %d\n", search_item, pos[i]);
    }

    return 0;
}
/*
            * Problems of this code
    if size = 5
     i/p item:
          2 6 2 8 2
    -> pos array size is also 5. but total repeated value is 3 (2,2,2).
    here,

    for (int i = 0; i < size; i++)
    {
        printf("%d value position: %d\n", search_item, pos[i]);
    }
     we access the all item of pos array that is the drawbacks .
     it is provided
           >> all repeated value index also provide garbage value .



*/