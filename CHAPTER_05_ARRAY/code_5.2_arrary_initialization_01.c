/*
* initialization means assign the value inside the array.

  There are Numerical way to initialization array

  int arr[3] = {10,23,45};

  int arr[] = {10,20, 30, 40, 50}; // here, array size is automatic generated which is 5.

  int arr[size]={100,104,108,112}; // size = 4
*/
#include <stdio.h>

int main()
{
    //* Array initialization
    // 1st array integer type
    int arr[3] = {10, 20, 30}; // array declare and initialization

    // 2nd array declare and initialization float type
    float price[] = {445.00, 555.01, 665.03, 770.04, 888.05};

    // 3th array declare and initialization char type
    char name[6] = {'R', 'a', 'i', 'h', 'a', 'n'};

    //* Accessing array element

    // 1st array output
    printf("\ninteger array accessing \n");
    for (int i = 0; i <= 2; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    // 2nd array output
    printf("\nfloat array accessing \n");
    for (int j = 0; j < 5.00; j++)
    {
        printf("price[%d] = %.2f\n", j, price[j]);
    }
    // 3th array output
    printf("\nchar array accessing \n");
    for (int i = 0; i <= 6 - 1; i++)
    {
        printf("arr[%d] = %c\n", i, name[i]);
    }

    return 0;
}
/*
     code explain
     * what is difference between arr[i] and only i?

     Ans : i is hold only number of iteration (How many times are loop will continue).
         >> here, arr[i] is hold the element(value).

*/