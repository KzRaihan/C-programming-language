/*
    Take two integer from user then display the Following operation.
    -> Addition
    -> Subtraction
    -> Multiplication
    -> Division

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
    int sum = num1 + num2; // Addition
    int sub = num1 - num2; // Subtraction
    int mul = num1 * num2; // Multiplication
    int div = num1 / num2; // Division

    // Display the output
    printf("\nThe First Number: %d", num1);
    printf("\nThe Second Number: %d", num2);

    printf("\n Summation of the Numbers: %d", sum);
    printf("\n Subtraction of the Numbers: %d", sub);
    printf("\n Multiplication of the Numbers: %d", mul);
    printf("\n Division of the Numbers: %d", div);

    return 0;
}