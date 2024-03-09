/*
 Given a number N and an array A of N numbers. Print the absolute summation of these numbers.

   absolute value : means to remove any negative sign in front of a number .

   EX : |-5| = 5 , |7| = 7
*/
#include <stdio.h>

int main()
{
    int size;
    long long int sum = 0;
    scanf("%d", &size); // this is the first line which contains a number N (1 ≤ N ≤ 105) number of elements

    long long int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%lld", &arr[i]); // this is second numbers which container (-10^9  ≤  Ai  ≤  10^9).
    }
    for (int i = 0; i < size; i++)
    {
        sum += arr[i]; // sum = sum + arr[i]
    }
    if (sum > 0)
    {
        printf("%lld\n", sum);
    }
    else
    {
        sum *= -1; // sum = sum * -1
        printf("%lld\n", sum);
    }
    return 0;
}