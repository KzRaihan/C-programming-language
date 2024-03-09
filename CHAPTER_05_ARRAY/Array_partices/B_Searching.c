/*
Given a number N and an array A of N numbers. Determine if the number X exists in array A
or not and print its position (0-index).

Note: X may be found once or more than once and may not be found.

->> Output:
Print the position of X in the first time you find it. If it doesn't exist print -1
*/
#include <stdio.h>

int main()
{
    int size;
    scanf("%d", &size); // first line

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]); // second line
    }

    int search_item, search_item_pos = -1;
    scanf("%d", &search_item); // third line

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == search_item)
        {
            search_item_pos = i;
            break;
        }
    }
    if (search_item_pos != -1)
    {
        printf("%d\n", search_item_pos);
    }
    else
    {
        printf("%d\n", search_item_pos);
    }

    return 0;
}
/*
Note: X may be found once or more than once and may not be found.

->> Output:
Print the position of X in the first time you find it. If it doesn't exist print -1
 * means above two condition (note and output)
* if multiple same numbers is present then only count first numbers position
* never count last item position.

*/