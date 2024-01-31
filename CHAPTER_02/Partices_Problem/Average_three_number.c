/*
  -> Write a program to print the average of 3 number.

*/
#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Enter three number: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int avg = (num1 + num2 + num3) / 3;
    printf("Average: %d\n", avg);
    return 0;
}