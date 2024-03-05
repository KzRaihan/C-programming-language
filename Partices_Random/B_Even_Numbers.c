/*
Given a number N. Print all even numbers between 1 and N inclusive in separate lines.

Input
Only one line containing a number N (1 ≤ N ≤ 10^3).

Output
Print the answer according to the required above. If there are no even numbers print -1.

* If there are no even numbers print -1. means what?
 only one case it is possible:
    >> when input is only one(1).

*/
#include <stdio.h>

int main()
{
   int num;
   scanf("%d", &num);

   if (num == 1)
   {
      printf("-1\n");
   }
   else
   {
      for (int i = 1; i <= num; i++)
      {
         if (i % 2 == 0)
         {
            printf("%d\n", i);
         }
      }
   }
   return 0;
}