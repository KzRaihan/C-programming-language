/*
    Write a program to calculate area of Rectangles.
    Formula area of Rectangles = length * weight


*/
#include <stdio.h>

int main()
{
    float length, weight;
    printf("Enter the length and weight value: ");
    scanf("%f %f", &length, &weight);

    // Calculation
    float area_of_Rectangles = length * weight;

    printf("Area of Rectangles : %.2f", area_of_Rectangles);

    return 0;
}