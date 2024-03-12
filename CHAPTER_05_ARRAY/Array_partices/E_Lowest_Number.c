/*
Given a number N and an array A of N numbers. Print the lowest number and its position.

* Note: if there are more than one answer print first one's position.
input:
5
5 6 2 3 2
output:
2 3

*/
#include <stdio.h>

int main()
{
    int size, i;
    scanf("%d", &size); // first line

    int arr[size];
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]); // second line
    }

    int lowest_item = arr[0], item_position = 0;
    for (i = 1; i < size; i++)
    {
        if (arr[i] < lowest_item)
        {
            lowest_item = arr[i];
            item_position = i;
        }
    }
    if (item_position != 0)
    { // when go to if body.
        printf("%d %d\n", lowest_item, item_position + 1);
    }
    else
    {
        printf("%d %d\n", lowest_item, item_position + 1);
    }

    return 0;
}
