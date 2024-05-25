// print only even numbers in an array form a range
#include <stdio.h>

int main()
{
    // int arr[5000];
    int start, end;

    printf("\nEnter start & end element: ");
    scanf("%d %d", &start, &end);

    for (int i = start; i <= end; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\t", i);
        }
    }

    return 0;
}