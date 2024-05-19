/*
   -> write a program to enter price 3 items and their final cost with 18% gst(goods and services tax).
*/
#include <stdio.h>

int main()
{
   int price_item[3];
   printf("Enter 3 Price iterm cost: ");

   for (int i = 0; i < 3; i++)
   {
      scanf("%d", &price_item[i]);
   }

   printf("\nRegular price of iterm \n");
   for (int i = 0; i < 3; i++)
   {
      printf("%d\t", price_item[i]);
   }

   printf("\nAfter add gst in 18%% then price of iterm: \n");
   for (int i = 0; i < 3; i++)
   {
      price_item[i] += (price_item[i] * 18.0 / 100); // at least one of the operands is a floating-point number.
      printf("%.2f\t", (float)price_item[i]);        // type casting int to float
   }

   return 0;
}
/*
    * code explain

   for (int i = 0; i < 3; i++)
   {
      price_item[i] += (price_item[i] * 18.0 / 100);
      printf("%.2f\t", (float)price_item[i]);
   }

   * 1st iteration
   -> int i = 0;
   let,
      price_item[0] = 100



   -> condi: i < 3
            = 0 < 3(true)
            = go to loop body
      >> loop body:  price_item[i] += (price_item[i] * 18.0 / 100);

          price_item[0] = price_item[0] + (price_item[0] * 18.0/100)
                        = 100 + 100 * 18.0/100  // first: *  NNB: According to operator precedence and (associativity rule)
                        = 100 + 1800.00 / 100    // second: /
                        = 100 + 18.00            // third : +
                        = 118.00
   -> printf("%.2f\t", (float)price_item[i]);
   * print = 118.0 // for padding 

   -> increment: i++
                = i + 1
                = 0 + 1
                = 1

   * 2nd iteration
    here,
         i = 1
   let,
      price_item[0] = 100
      price_item[1] = 200



   -> condi: i < 3
            = 1 < 3(true)
            = go to loop body
      >> loop body:  price_item[i] += (price_item[i] * 18.0 / 100);

          price_item[1] = price_item[1] + (price_item[1] * 18.0/100)
                        = 200 + 200 * 18.0/100  // first: *  NNB: According to operator precedence and (associativity rule)
                        = 200 + 3600.00 / 100    // second: /
                        = 200 + 36.00            // third : +
                        = 236.00
   -> printf("%.2f\t", (float)price_item[i]);
   * print = 236.0 // for type casting

     -> increment: i++
                = i + 1
                = 1 + 1
                = 2
   * 3th iteration
    here,
         i = 2
   let,
      price_item[0] = 100
      price_item[1] = 200
      price_item[2] = 300


   -> condi: i < 3
            = 2 < 3(true)
            = go to loop body
      >> loop body:  price_item[i] += (price_item[i] * 18.0 / 100);

          price_item[2] = price_item[2] + (price_item[2] * 18.0/100)
                        = 300 + 300 * 18.0/100  // first: *  NNB: According to operator precedence and (associativity rule)
                        = 300 + 5400.00 / 100    // second: /
                        = 300 + 54.00            // third : +
                        = 354.00
   -> printf("%1.f\t", (float)price_item[i]);
   * print = 354.0 // for type casting

     -> increment: i++
                = i + 1
                = 2 + 1
                = 3
         * 4th iteration
      condi: i < 3
            = 3 < 3(false)
            terminate the program










*/
