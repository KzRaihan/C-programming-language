/*
  -> individual Array input and output
  * Drawbacks:
        if we assign i/p and o/p =  maximum size of index in array it's provided error(in run time)

     eg. if arr[3];
        as input we can't
            scanf : arr[3] its provide error message
        similar to output:
             print: arr[3] is provide error mess.

*/
#include <stdio.h>

int main()
{
    int marks[3];

    // input of array element
    printf("Enter Data structure mark: ");
    scanf("%d", &marks[0]);

    printf("Enter Operating system mark: ");
    scanf("%d", &marks[1]);

    printf("Enter Compiler Design mark: ");
    scanf("%d", &marks[2]);

    // o/p of array element
    printf("Ds  =  %d , Os = %d , CD = %d", marks[0], marks[1], marks[2]);

    return 0;
}