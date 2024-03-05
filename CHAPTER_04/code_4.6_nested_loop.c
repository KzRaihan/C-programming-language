/*
                         * Nested for loop
    -> It allow to repeat a set of instructions multiple times.
    -> to do a repeated work multiple(repeat) times

    -> syntax:
        for(inti; cond; update)
        {
             -----
              how many times to do the work (also call counter part)
             -----
             for(ini; cond; update)
             {
                ------
                actual work perform
                -------
             }
        }

 * Eg: print 1 to 10. 15 times
*/
#include <stdio.h>

int main()
{
    for (int i = 1; i <= 15; i++) // outer loop (counter part))
    {
        for (int j = 1; j <= 10; j++) // inner loop(actual work performs)
        {
            printf("%d  ", j);
        }
        printf("\n");
    }
    return 0;
}

/*
                 * code explain
            * 1st iteration
            *  i = 1
        ---------------------------
    outer loop: for (int i = 1; i <= 15; i++)
    -> ini: i = 1

    -> cond: i <= 15
            = 1 <= 15 (true)
            = go to outer loop body

        outer loop body:
           inner loop : for (int j = 1; j <= 10; j++)

                -> init: j = 1

                -> cond: j <= 10
                       = 1 <= 10(true)
                       = go to inner loop body

                -> inner loop body :  printf("%d  ", j);
                                       * print: 1

                                     >> increment: j++
                                                     j = j + 1
                                                       = 1 + 1
                                                       = 2

                -> init: (initialization part only one times)
                      j = 2

                -> cond: j <= 10
                       = 2 <= 10(true)
                       = go to inner loop body

                -> inner loop body :  printf("%d  ", j);
                                       * print: 1 2

                                     >> increment: j++
                                                     j = j + 1
                                                       = 2 + 1
                                                       = 3
                  --------------------------------------------
                  -------------------------------------------
                                        * print: 1 2 3 4 5 6 7 8 9 10

                  when j becomes 11 then go to outer loop

                              * 2nd iteration
                                  * i = 2 (increment i)
                              ---------------------------
                        to performs repeated work inner loop
                                         * print: 1 2 3 4 5 6 7 8 9 10
                                         * print: 1 2 3 4 5 6 7 8 9 10




   * until performing when i becomes 16
                    then print 15 times



*/