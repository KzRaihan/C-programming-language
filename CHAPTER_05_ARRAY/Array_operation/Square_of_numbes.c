/*
Find the sum and products of the squares of n natural numbers
  >> 1^2 + 2^2 + 3^2 + ........+ n^2.
  >> 1^2 * 2^2 * 3^2 * ........* n^2.
*/
#include <stdio.h>

int main()
{
    int num;
    printf("Enter the numbers: ");
    scanf("%d", &num);

    long long int sum = 0, product = 1;
    for (int i = 1; i <= num; i++)
    {
        sum += i * i;     // sum = sum + i * i
        product *= i * i; // product = product * i * i
    }
    printf("\nSum of the Squares of (1 - %d) number : %lld\n", num, sum);
    printf("\nProducts of the Squares of (1 - %d) number : %lld\n", num, product);

    return 0;
}