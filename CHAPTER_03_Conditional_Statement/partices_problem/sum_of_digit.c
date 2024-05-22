#include <stdio.h>

int main()
{
    int num, sum = 0;
    printf("\nEnter any integer: ");
    scanf("%d", &num);

    while (num != 0)
    {
        int mod = num % 10;
        sum = sum + mod;

        num = num / 10;
    }
    printf("Summation of the number: %d\n", sum);

    return 0;
}