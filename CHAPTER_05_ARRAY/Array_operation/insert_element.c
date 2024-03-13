/*
  * Insert An Element in an array.
  i/p: 2 4 6 8 10

  insert_pos : 2
  insert_value: 100

  o/p: 2 100 4 6 8 10

  * Remember that :array index is start with zero.

*/
#include <stdio.h>

int main()
{
    int size;
    printf("Enter Array size: ");
    scanf("%d", &size);

    int arr[size + 1];
    printf("Enter array element: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int in_posi, in_vla;
    printf("\nEnter the insert item position: ");
    scanf("%d", &in_posi);

    printf("\nEnter the insert item value: ");
    scanf("%d", &in_vla);

    // here start explain code
    for (int i = size; i >= in_posi; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[in_posi - 1] = in_vla; // not index

    // * Accessing the array element
    for (int i = 0; i <= size; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}
/*
      * code explain

    -> size = 5
       >> array element: 10 20 30 40 50
            arr[0] = 10
            arr[1] = 20
            arr[2] = 30
            arr[3] = 40
            arr[4] = 50

       >> in_posi = 2(for user count) not index count.
       >> in_vla = 100

     * for (int i = size; i >= in_posi; i--)
         * 1st iteration:
      >> init:
           i = 5
      >> condition : i >= in_posi
                   = 5 >=  2(true)
                   = go to loop body

      >> loop body: arr[i] = arr[i - 1];
                  = arr[5] = arr[5-1]
                  = arr[5] = arr[4]
                  = arr[5] = 50

      >> decrement: i--
                  = i - 1
                  = 5 - 1
                  = 4
         * 2nd iteration:
      >> init:-> work only first time
      >> condition : i >= in_posi
                   = 4 >=  2(true)
                   = go to loop body

      >> loop body: arr[i] = arr[i - 1];
                  = arr[4] = arr[4-1]
                  = arr[4] = arr[3]
                  = arr[4] = 40


     >> decrement: i--
                  = i - 1
                  = 4 - 1
                  = 3
         * 3th iteration:
      >> init:-> work only first time
      >> condition : i >= in_posi
                   = 3 >=  2(true)
                   = go to loop body

      >> loop body: arr[i] = arr[i - 1];
                  = arr[3] = arr[3-1]
                  = arr[3] = arr[2]
                  = arr[3] = 30


     >> decrement: i--
                  = i - 1
                  = 3 - 1
                  = 2
         * 4th iteration:
      >> init:-> work only first time
      >> condition : i >= in_posi
                   = 2 >=  2(true)
                   = go to loop body

      >> loop body: arr[i] = arr[i - 1];
                  = arr[2] = arr[2-1]
                  = arr[2] = arr[1]
                  = arr[2] = 20      || note: arr[1] = 20 also


     >> decrement: i--
                  = i - 1
                  = 2 - 1
                  = 1
         * 5th iteration:
      >> init:-> work only first time
      >> condition : i >= in_posi
                   = 1 >=  2(false)
                   = out of loop


   *  arr[in_posi - 1] = in_vla; // not index
   when write this way, or this statement then, we count user side.

     *  arr[in_posi] = in_vla; // for index count
    when write this way, or this statement then, we count index side.

  * Accessing the array element(print the element) with insert value
    for (int i = 0; i <= size; i++)
     {
        printf("%d\t", arr[i]);
    }














*/
