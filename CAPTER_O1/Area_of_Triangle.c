/*
    Write a program to calculate area of Triangle.
    Formula area of Triangle = 1/2 * base * height.


*/
#include <stdio.h>

int main()
{
    float base, height;
    printf("Enter the base and height value: ");
    scanf("%f %f", &base, &height);

    // Calculation
    float area_of_Triangle = 0.5 * base * height;

    printf("Area of Triangle : %.2f", area_of_Triangle);

    return 0;
}