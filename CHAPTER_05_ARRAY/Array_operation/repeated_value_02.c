/*
>> Given an array find the duplicated value index(position) and print the index
* Less Efficient this way to find the duplication Item position.
*/
#include <stdio.h>

int main()
{
    int size;
    printf("Enter the array Size: ");
    scanf("%d", &size);

    int arr[size];
    printf("\nEnter array Element : \n");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int search_item;
    printf("Enter Search item : ");
    scanf("%d", &search_item);

    // start the explain
    int pos[size];
    for (int i = 0; i < size; i++)
    {
        pos[i] = 0;
    }
    // check to search item
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == search_item)
        {
            pos[i] = i;
        }
    }
    // access * this is the drawbacks of the code.
    for (int i = 0; i < size; i++)
    {
        if (pos[i] != 0)
            printf("%d value position: %d\n", search_item, pos[i]);
    }

    return 0;
}
/*
            * Problems and explain this code
    if size = 5
     i/p item:
          2 6 2 8 2
     search_item : 2

     >> int pos[size] || pos[5]

     * for (int i = 0; i < size; i++)
      1st iteration
     -> inti: 0
     -> condi: i < size
             = 0 < 5 (true)
             = go to loop body
     -> loop Body:
           pos[i] = 0;
           pos[0] = 0
     -> increment i++
                = i + 1
                = 0 + 1
                = 1

    store
     pos[0] = 0;

      2nd iteration
      i = 1
     -> condi: i < size
             = 1 < 5 (true)
             = go to loop body
     -> loop Body:
           pos[i] = 0;
           pos[1] = 0
     -> increment i++
                = i + 1
                = 1 + 1
                = 2

      store
     pos[0] = 0;
     pos[1] = 0;

    similary to store the value until i becomes 5 || 5 < 5 (false)

      store
     pos[0] = 0;
     pos[1] = 0;
     pos[2] = 0;
     pos[3] = 0;
     pos[4] = 0;

        check to search item
         search_item : 2
    * for (int i = 0; i < size; i++)

    -> init: i = 0
    -> condi: i < size;
             = 0 < 5 (true)
             = go to loop body
    -> loop body
        if (arr[i] == search_item)
            arr[0] == 2
              = 2  == 2(true)
              = go to if body

        -> if body
            pos[i] = i;
           = pos[0] = 0

    -> similary to process until i becomes 5


    for (int i = 0; i < size; i++)
    {
    *    if (pos[i] != 0)  * this statement provided one false condition which is if the first item is duplicate then it can't print
            printf("%d value position: %d\n", search_item, pos[i]);
    }





*/