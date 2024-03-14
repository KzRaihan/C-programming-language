/*
-> Delete or remove an element of an given array by using user view position

*/
#include <stdio.h>

int main()
{
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter Array element: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int del_posi;
    printf("Enter the deleted element position: ");
    scanf("%d", &del_posi);

    for (int i = del_posi - 1; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    // printf the array
    for (int i = 0; i < size - 1; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}
/*
             * code explain
        size = 4
        arr[0] = 10
        arr[1] = 20
        arr[2] = 30
        arr[3] = 40

    -> del_index_posi = 1
    * for (int i = del_posi -1; i < size - 1; i++)

    -> inti:
        i/p: del_posi = 2 (user view)
          *  i = del_posi - 1
           => i = 2 - 1
                = 1 (index)


    -> condition: i < size - 1
               = 1 <  4 - 1
               = 1 < 3 (true)
        body: arr[i] = arr[i + 1];
             = arr[1] = arr[1+1]
             = arr[1] = arr[2]
             = arr[1] = 30

    -> increment: i++
                = i + 1
                = 1 + 1
                = 2

    2nd iterative:
      i = 2
    -> condition: i < size - 1
               = 2 <  4 - 1
               = 2 < 3 (true)
        body: arr[i] = arr[i + 1];
             = arr[2] = arr[2+1]
             = arr[2] = arr[3]
             = arr[2] = 40

    -> increment: i++
                = i + 1
                = 2 + 1
                = 3
    2nd iterative:
      i = 3
    -> condition: i < size - 1
               = 3 <  4 - 1
               = 3 < 3 (false)


    * print the array without last index || condition: i < size - 1
     for (int i = 0; i < size - 1; i++)







*/