/*
 * Goods services text(gst) calculation



 Q.N-01: what is 466tk 15% and how to calculate it?

      tex = 466 * 15/100;
          = 466 * 0.15
          = 69.9
    after add text
        final price = 466 + 69.9
                    = 535.9

*/
#include <stdio.h>

int main()
{
    int price = 466;

    float tex;

    // tex = (float)(price * (15/ 100)); // here, tex = 0

    // printf("%.2f\n", tex); // o/p : 0.00

    tex = (float)(price * (15.0 / 100));

    printf("%.1f\n", tex); // tex = 69.9

    printf("After adding gst 15%% then \n");

    int final_price;
    final_price = price + tex;
    printf("Final price: %.1f", (float)final_price);

    return 0;
}
/*
   * code expalin
>> this code o/p provide the zero(0) output
  * why???
   ans:
      when we calculate two integer to integer that provide or return interger value

      tex = (float)(price * (15/ 100));
      here,
      *(15/ 100) this calculation output zero

      100)15(0 <- this is the return value
           0
         -----
          15
    tex = (float)(price * (15/ 100));
        = (float) 466 * 0
        = (float) 0
        = 0.000


   * How to solve this problem
   To obtain a floating-point result (with decimals),
   to ensure that at least one of the operands is a floating-point number.


    tex = (float)(price * (15/ 100));
   here,
    >> (15/ 100) here, at least one number to floating-point.

    * Correct form: (15.0/100) or (15/100.0)

     tex = (float)(price * (15.0/ 100));



*/