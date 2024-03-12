#include <stdio.h>

int main()
{
    // in general initialization
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", arr[i]);
    }

    // Decentralized initialization
    printf("\nDecentralized initialization in array: \n");
    int d_arr[10] = {[2] = 6, [6] = 50, [8] = 80};
    // d_arr[2] = 6,
    // d_arr[6] = 50
    // d_arr[8] = 80
    // rest of element in array is assign zero.
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", d_arr[i]);
    }

    return 0;
}