/*
   -> Definition of Arithmetic instuction
   -> Valid case and Invalid case
   -> Modular Operator
   -> Type conversion

*/
// Definition of arithmetic instuction
#include <stdio.h>

int main()
{
   printf("\nSingle Variable on the left in side");
   printf("\nExample Valid CASE: \n");

   int num1 = 10;            // Each variable is LHS and variable value is RHS.
   int num2, num3 = 20;      // here, num3 value is 20
   float var1 = num3 + num1; // More than value is possible RHS but more than variable is not possible at same value.

   printf("\nExample of Invalid CASE: \n");
   /*
      int a,b,c;
      a=b=c= 20;

      b+c = a;  // Invalid expression

      a = bc;
      b = a^c;
      c = 2,3;
      int d = 5(3);

   */

   return 0;
}