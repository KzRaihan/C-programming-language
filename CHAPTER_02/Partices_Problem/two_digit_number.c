/*
   -> write a program to check if a number is greater than 9 and less than 100.
   ->   (9< number < 100)
   ->    Start with 10 and end with 99.
   -> This number is call two digit number.
*/
#include <stdio.h>

int main()
{
   int num;
   printf("Enter any number: ");
   scanf("%d", &num);

   printf("Output: %d\n", num > 9 && num < 100);

   return 0;
}