/*
    -> Leap Year within the givin year.
*/

#include <stdio.h>

int main()
{
    int start_year, end_year, count = 0;

    printf("\n\nEnter Start Year: ");
    scanf("%d", &start_year);

    printf("Enter End Year: ");
    scanf("%d", &end_year);

    for (int i = start_year; i <= end_year; i++)
    {
        if (i % 400 == 0 || i % 100 != 0 && i % 4 == 0)
        {
            printf("%d is leap year\n", i);
            count++;
        }
    }
    printf("\nToday Leap Year within given Year is : %d\n", count);

    return 0;
}