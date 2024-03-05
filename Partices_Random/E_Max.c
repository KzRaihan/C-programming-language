/*
Given a number N, and N numbers, find maximum number in these N numbers.

*/
#include <stdio.h>

int main()
{
    int size, num;
    scanf("%d", &size);

    int max_num = 0; //  assume max_num = 0
    for (int i = 1; i <= size; i++)
    {
        scanf("%d", &num);

        if (num >= max_num) // compare given number and max_number
        {
            max_num = num; // assign max_num = num.
        }
    }
    printf("%d\n", max_num); // print
    return 0;
}