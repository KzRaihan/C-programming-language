/*
    write a program to find the factorial of a number.
*/
#include <stdio.h>

int main()
{
    int num;

    printf("\nEnter the Number: ");
    scanf("%d", &num);

    long long int fact = 1;

    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }

    printf("%d Factorial of is : %lld\n", num, fact);

    return 0;
}

/*
   * when we operation with production then, the data type always long long int
   because , the answer is so long(big).

   -> limitation of the answer: 10^19
*/