#include <stdio.h>

int main()
{
   for (int i = 1; i <= 10; i++)
   {
      if (i % 2 == 0)
      {
         continue;
      }
      if (i == 5)
      {
         break;
      }
      printf("%d Square : %d\n", i, i * i);
   }
   return 0;
}
/*
                       1st iteration
                    --------------------
    ini part:
      i = 1
    condition part:
       i <= 10
     = 1 <= 10(true)
     body:                                               2) 1 ( 0
      if (i % 2 == 0)                                       0
        = 1 % 2 == 0                                       -----
        = 1 == 0                                            1 <- remainder
        = false condition
      if (i == 5)
        = 1 == 5 (false)

    print : i * i
        =   1 * 1
        =   1
   * o/p: i = 1

    increment:
         i++
        i = i + 1
          = 1 + 1
          = 2
                       2nd iteration
                    --------------------
    ini part:
       initialization part work only one time
    condition part:
       i <= 10
     = 2 <= 10(true)
     body:                                               2) 2 ( 1
     1st if (i % 2 == 0)                                    2
        = 2 % 2 == 0                                       -----
        = 0 == 0  (true)                                     0 <- remainder
     -> continue this line or skip when i = 2.

    increment:
        i++
        i = i + 1
          = 2 + 1
          = 3
                       3th iteration
                    --------------------
    ini part:
       initialization part work only one time
    condition part:
       i <= 10
     = 3 <= 10(true)
     body:                                               2) 3 ( 1
     1st if (i % 2 == 0)                                    2
        = 3 % 2 == 0                                       -----
        = 1 == 0  (false)                                    1 <- remainder
     -> go to next line

    2nd if (i == 5)
            = 3 == 5 (false)

    print : i * i
        =   3 * 3
        =   9

   * o/p: i = 1
         i = 9


    increment:
        i++
        i = i + 1
          = 3 + 1
          = 4
                       4th iteration
                    --------------------
    ini part:
       initialization part work only one time
    condition part:
       i <= 10
     = 4 <= 10(true)
     body:                                               2) 4 ( 2
     1st if (i % 2 == 0)                                    4
        = 4 % 2 == 0                                       -----
        = 0 == 0  (false)                                    0 <- remainder
     -> skip the line

    print : i * i
        =   3 * 3
        =   9

   * o/p: i = 1
         i = 9


    increment:
        i++
        i = i + 1
          = 4 + 1
          = 5
                       5th iteration
                    --------------------
    ini part:
       initialization part work only one time
    condition part:
       i <= 10
     = 5 <= 10(true)
     body:                                               2) 5 ( 2
     1st if (i % 2 == 0)                                    4
        = 5 % 2 == 0                                       -----
        = 1 == 0  (false)                                    1 <- remainder
     -> go to next line

     2nd if (i == 5)
            = 5 == 5 (true)
            then break the statement
            means, out of the loop

    print : i * i
        =   3 * 3
        =   9

   * o/p: i = 1
          i = 9




*/