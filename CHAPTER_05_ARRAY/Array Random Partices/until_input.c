// keep taking numbers as input form user until enters an odd number then print all numbers except odd.
#include <stdio.h>

int main()
{
    int arr[100], j = 0;
    for (int i = 0;; i++)
    {
        printf("\nEnter a number: ");
        scanf("%d", &arr[i]);
        if (arr[i] % 2 != 0)
        {
            j = i;
            break;
        }
    }
    printf("\nNumbers are: \n");
    for (int i = 1; i < j; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}