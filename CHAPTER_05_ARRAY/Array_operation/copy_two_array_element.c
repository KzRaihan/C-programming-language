/*
   * copy Element of two array

   1st worK :
      i/p : two array
       let,
           arr1[n];
           arr2[m];
   2nd work:
       initialization New array with size
       size = n+m
       -> New_array[n+m];

   3th work:

       Ascending order or descending order copy

       -> first copy : arr1[n] all element
             >> New_array[n+m] = arr[n];

       -> 2nd  copy  : arr2[m] all element
             >> New_array[n+m] = arr[m];

   4th work:
       Print New_array

*/
#include <stdio.h>

int main()
{
    // first array
    int n;
    printf("Enter size of first array: ");
    scanf("%d", &n);

    int arr1[n];
    printf("\nEnter the first array element: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    // second array
    int m;
    printf("Enter size of second array: ");
    scanf("%d", &m);

    int arr2[m];
    printf("\nEnter the 2nd array element: ");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }

    // copy first array all element

    int new_arr[n + m];
    for (int i = 0; i < n; i++)
    {
        new_arr[i] = arr1[i]; // new_arr is copy all element of arr1.
    }

    int i = n; // new_arr next index store(copy) the value

    // copy second array all element
    for (int j = 0; j < m; j++)
    {
        new_arr[i] = arr2[j];
        i++; // new_arr copy the next element
    }

    // print new array
    printf("Now, the copy array element are: \n");
    for (int i = 0; i < n + m; i++)
    {
        printf("%d\t", new_arr[i]);
    }

    return 0;
}