/*
    Write a program to calculate area of Circle.
    Formula area of Circle = pi * r^2 or pi * r*r;


*/
#include <stdio.h>

int main()
{
    float radius;
    printf("Enter the Radius value: ");
    scanf("%f", &radius);

    // Calculation
    float area_of_Circle = 3.14 * radius * radius;

    printf("Area of Circle : %.2f", area_of_Circle);

    return 0;
}