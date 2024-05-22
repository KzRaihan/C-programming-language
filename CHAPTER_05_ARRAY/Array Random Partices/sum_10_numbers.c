// enter 10 numbers and print the numbers also find out them sum
#include <stdio.h>

int main()
{
    int arr[10];
    printf("Enter 10 integer numbers: \n");
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("sum of 10 numbers are: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("summation: %d\n", sum);

    return 0;
}