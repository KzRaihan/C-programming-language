/*
   Array element reverse by using two pointer technique

   -> two pointer technique three major work

     >> 1st work: Need two pointer (i,j)

            --> i = left pointer (variable)
            --> j = Right pinter(variable)

     >> 2nd work: swap(exchange)
           --> i <=> j
           explore:
                i = 10
                j= 20
            swap process:
              temp = i
                i  = j
                j  = temp

     >> 3th work: stopping criteria
           --> i < j
           continue process until above statement condition is false

*/
#include <stdio.h>

int main()
{
   int size;
   printf("Enter Size: ");
   scanf("%d", &size);

   int arr[size];

   printf("Enter array element: ");

   for (int i = 0; i < size; i++)
   {
      scanf("%d", &arr[i]);
   }

   int i = 0, j = size - 1, temp;

   // swapping processing
   while (i < j)
   {
      temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
      i++; // increment (toward to j index)
      j--; // decrement(toward to i index)
   }

   // print array in reverse order
   printf("\nReverse array : \n");
   for (int i = 0; i < size; i++)
   {
      printf("%d\t", arr[i]);
   }

   return 0;
}
/*
    * code explain
  assume
  size = 5
      arr[0] = 10
      arr[1] = 20
      arr[2] = 30
      arr[3] = 40
      arr[4] = 50

  int i = 0, j = size - 1, temp;
     *1st iterative

  *  while (i < j)
         0 < 5-1
        = 0 < 4 (true)
        = go to body
    body:
      temp = arr[i];
      temp = arr[0]
     * temp = 10

      arr[i] = arr[j];
      arr[0] = arr[4];
     * arr[0] = 50

      arr[j] = temp;
     * arr[4] = 10

     i++
     i = i + 1
       = 0 + 1
       = 1
     j--
      j = j - 1
        = 4 - 1
        = 3
     *2nd iterative
     i = 1
     j = 3

  *  while (i < j)
          1 < 5-1
        = 1 < 4 (true)
        = go to body
    body:
      temp = arr[i];
      temp = arr[1]
     * temp = 20

      arr[i] = arr[j];
      arr[1] = arr[3];
     * arr[1] = 40

      arr[j] = temp;
     * arr[3] = 20

     i++
     i = i + 1
       = 1 + 1
       = 2
     j--
      j = j - 1
        = 3 - 1
        = 2

     *3th iterative
     i = 2
     j = 2

  *  while (i < j)
          2 < 5-1
        = 2 < 4 (true)
        = go to body
    body:
      temp = arr[i];
      temp = arr[2]
     * temp = 30

      arr[i] = arr[j];
      arr[2] = arr[2];
     * arr[2] = 30

      arr[j] = temp;
     * arr[2] = 30

     i++
     i = i + 1
       = 2 + 1
       = 3
     j--
      j = j - 1
        = 2 - 1
        = 1

      *4th iterative
     i = 3
     j = 1

  *  while (i < j)
         = 3 < 1(false condition)
         = out of loop

  * print the reverse array
   50 40 30 20 10



*/