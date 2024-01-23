/*
    Take two integer from user then display the summation
*/
#include <stdio.h>

int main()
{
    // input from user
    int num1, num2;
    printf("Enter First Number: ");
    scanf("%d", &num1);

    printf("\nEnter Second Number: ");
    scanf("%d", &num2);

    // Calculation
    int sum = num1 + num2;
    // Display the output
    printf("\nThe First Number: %d", num1);
    printf("\nThe Second Number: %d", num2);
    printf("\nSummation of the Numbers: %d", sum);

    return 0;
}