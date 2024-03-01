/*
Given a number N, and N numbers, find maximum number in these N numbers.

*/
#include <stdio.h>

int main()
{
    int size, give_value, max_num = -1;
    scanf("%d", &size);

    for (int i = 1; i <= size; i++)
    {
        scanf("%d", &give_value);
        if (give_value > max_num)
        {

            max_num = give_value;
        }
    }
    printf("%d\n", max_num);

    return 0;
}
