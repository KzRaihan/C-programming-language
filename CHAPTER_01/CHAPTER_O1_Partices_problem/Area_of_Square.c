/*
    Write a program to calculate area of Square.
    Formula area of Square = S^2 or (s*s)


*/
#include <stdio.h>

int main()
{
    float side;
    printf("Enter the Side value: ");
    scanf("%f", &side);

    // Calculation
    float area_of_square = side * side;

    printf("Area of Square : %.2f", area_of_square);

    return 0;
}