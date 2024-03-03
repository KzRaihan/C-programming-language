/*
   -> print all the even numbers form 1 to num using continue statement
*/
#include <stdio.h>

int main()
{
    int end_num;

    printf("Enter Last number: ");
    scanf("%d", &end_num);

    for (int i = 1; i <= end_num; i++)
    {
        if (i % 2 != 0) // Not even or (odd number statement)
        {
            continue;
        }
        printf("%d is Even\n", i);
    }
    return 0;
}