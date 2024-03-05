/*
Given a number N. Print all even numbers between 1 and N inclusive in separate lines.
If there are no even numbers print -1.

Input:
containing a number N (1 ≤ N ≤ 103).

*/
#include <stdio.h>

int main()
{
  int num, odd = -1, count = 0;
  scanf("%d", &num);

  for (int i = 1; i <= num; i++)
  {
    if (i % 2 == 0)
    {
      printf("%d\n", i);
    }
    else
    {
      count = 1; // there  (1 - num) is any numbers accept even.
    }
  }
  if (count == 0)
  {
    printf("%d\n", odd);
  }

  return 0;
}
/*
Print all even numbers between 1 and N
                          * -> There are even number is present
   >> 1st iteration
   --------------------
   num = 4

   -> initialization part:
      i = 1
   -> condition part
        i <= num
      = 1 <= 4 (true) go to loop body
    -> loop body:
        check if condition:                                         * Calculation
            i % 2 == 0                                                2 ) 1 ( 0
          = 1 % 2 == 0 (false) go to else part                            0
        check else condition:                                            ----
            count = 1 // first count = 0                                   1 <- remainder is not zero so, this is not even numbers
            here, count variable value is update(change)

    -> increment part
         i = i + 1
           = 1 + 1
           = 2

   >> 2nd iteration
   --------------------
   num = 4

   -> initialization part:
      i = 2
   -> condition part
        i <= num
      = 2 <= 4 (true) go to loop body
    -> loop body:
        check if condition:
            i % 2 == 0
          = 2 % 2 == 0 (true) go to if body
        -> if body:
            print : i (2)

    -> increment part
         i = i + 1
           = 2 + 1
           = 3
  .............................
 .................................
 when i = 5 then out of loop body
 If there are no even numbers print -1  means
    if(count == 0){
       -> there is no even numbers.

    }
    if 1 to num

*/