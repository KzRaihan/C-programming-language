/*
  Write a Program to take size form user and perform
     >> addition
     >> multiplication
  to all array element.
*/
#include <stdio.h>

int main()
{
    int size;

    printf("Enter the size: ");
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int add = 0, sum, mul = 1;
    for (int i = 0; i < size; i++)
    {
        add += arr[i]; // addition
        mul *= arr[i]; // Multiplication
    }
    printf("Addition of all array element: %d\n", add);
    printf("Multiplication of all array element: %d\n", mul);

    return 0;
}