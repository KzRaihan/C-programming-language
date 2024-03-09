// sum of 10 numbers
#include <stdio.h>

int main()
{
    int arr[10];
    int sum = 0;
    printf("Enter Array 10 Elements: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nArray Element are: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
        sum += arr[i];
    }
    printf("Summation is = %d\n", sum);

    return 0;
}