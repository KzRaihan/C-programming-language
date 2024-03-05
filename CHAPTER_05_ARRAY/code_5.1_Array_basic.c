/*
* Array is liner (static) data structure .
    liner -> Data element arranged in sequentially manner.
                                       >> sequentially manner: Each element is connected to it's previous and next element.
    Static:
          >> Allocated(fixed) memory size.
 -> Definition:
        Collection of Similar data types stored at contiguous memory Locations.

 -> Relation of data: in sequentially manner.

 -> utilization of array:
                        when need a lot of data
 -> types of array:
            1. one dimensional array(1-D).
            2. two dimensional array(2-D).
            3. Multiple dimensional array.


 -> 1. one dimensional array:
               array has only one subscript[].

 -> syntax and Declare:
        data_type || array_name || [array_size];

    eg>    int  peoples  [50];  // this is call integer type array
           float  marks  [50];  // this is call floating type array
           char  name  [50];    // this is call character type array
 * -> array index is zero(0) based indexing
        first index start with: 0
                                ...
                                ...
        last index end with  : size - 1


*/
#include <stdio.h>

int main()
{
    int arr[5]; // array declare and array size = 5.

    // Accessing array element using array index
    printf("Enter the first value: ");
    scanf("%d", &arr[0]);

    printf("\nEnter the second value: ");
    scanf("%d", &arr[1]);

    printf("\nEnter the third value: ");
    scanf("%d", &arr[2]);

    printf("\nEnter the four value: ");
    scanf("%d", &arr[3]);

    printf("\nEnter the five value: ");
    scanf("%d", &arr[4]);

    printf("\nFirst Element in array : %d", arr[0]);
    printf("\nsecond Element in array: %d", arr[1]);
    printf("\nThird Element in array : %d", arr[2]);
    printf("\nFour Element in array  : %d", arr[3]);
    printf("\nFive Element in array  : %d", arr[4]);

    return 0;
}