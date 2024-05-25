// write a program to print an array where all elements are zero except one element.
#include <stdio.h>

int main()
{
    int arr[10] = {5};
    printf("\nArray Elements: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}
/*
   * code explain
     int arr[10] = {5} means
     -------------------------
         arr[0] = 5; (only one element are set or assign)
         arr[1] = 0;   (The rest of the elements are automatically set or assigned by zero.)
         arr[3] = 0;
         arr[4] = 0;
         arr[5] = 0;
         arr[6] = 0;
         arr[7] = 0;
         arr[8] = 0;
         arr[9] = 0;

*/