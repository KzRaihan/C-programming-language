/*
Given a number N, and N numbers, find minimum number in these N numbers.
*/

#include <stdio.h>
#include <limits.h>

int main()
{
    int size, num;
    printf("Enter number langth: ");
    scanf("%d", &size);

    int min_num = INT_MAX; // INT_MAX means the max_number in integer number.

    for (int i = 1; i <= size; i++)
    {
        scanf("%d", &num);
        if (num <= min_num) // compare the giving number to min_num
        {                   // if giving number is smaller then the min then go to if body.
            min_num = num;  // assign min_num to num.
        }
    }
    printf("minimum number: %d\n", min_num);

    return 0;
}
