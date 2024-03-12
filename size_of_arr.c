#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};

    int M_size = sizeof(arr);
    printf("Memory Size: %d\n", M_size); // 20 bytes (how many memory is occupied).

    // int arr_size = sizeof(arr[1] / arr[0]);
    // printf("Array size : %d\n", arr_size);

    int a_size = sizeof(arr) / sizeof(arr[0]);
    printf("Array size : %d\n", a_size);

    return 0;
}