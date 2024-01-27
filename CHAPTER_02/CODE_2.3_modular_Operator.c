/*
   -> Modular Operator(%)
     >> Return Remainder for integer.(Only Return Integer value).
     >> Floating value can't be work.

*/

#include <stdio.h>

int main()
{                                       // Divisor  divided
  printf("Modular Operator:%d", 5 % 2); //     2  )  5    (  2 <- Quotient
                                        //           4
                                        //          ----
                                        //            1  <--- Return 1 (Remainder)

  printf("\nModular Operator: %d", -50 % 4); // if, the divided value negative then return remainder value is negative.
                                             //  4 ) -50 ( 12    here,  4 = divisor
                                             //       48               -50 = divided
                                             //       -----
                                             //        -2  <-- Return -2(remainder)

  /*
     Modular is not work floating value

     printf("Invalid Modular: %f",100.50 % 25.06) // send error message.
  */

  return 0;
}