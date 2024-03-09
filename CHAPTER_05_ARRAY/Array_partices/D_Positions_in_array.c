/*
Given a number N and an array A of N numbers.
Print all array positions that store a number less than or equal to 10 and
the number stored in that position.

* means (find the number and numbers positions that which numbers are less than or equal 10)

Example:
5  // first line
1 2 100 0 30 // second line

output:
A[0] = 1  // here, A[0] -> 0 is the position (0 base indexing) of number 1.
A[1] = 2  // here, A[1] -> 1 is the position (0 base indexing) of number 2.
A[3] = 0 //  here, A[3] -> 3 is the position (0 base indexing) of number 0.
*/
#include <stdio.h>

int main()
{
    int size;
    scanf("%d", &size); // first line

    int A[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &A[i]); // second line
    }
    // int position_num;
    for (int i = 0; i < size; i++)
    {
        if (A[i] <= 10)
        {
            // position_num = i;
            printf("A[%d] = %d\n", i, A[i]);
        }
    }

    return 0;
}