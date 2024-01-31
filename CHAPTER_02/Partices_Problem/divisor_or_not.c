/*
   -> Write a program to check if a number is divisible by 2 or not
   -> write a program to check if a number is even or odd.

*/
#include <stdio.h>

int main()
{
    int num;
    printf("Enter Any Number: ");
    scanf("%d", &num);

    printf("Number is divisor or even: %d\n", num % 2 == 0); // Op: 1 (if it is divisor by 2)

    printf("Number is not divisor or odd: %d\n", num % 2 != 0); // Op: 0 (if it is not divisor by 2)
    return 0;
}
/*
 num = 10
      >> 10 % 2 == 0
      >> 0  == 0
      >> 1(true)

 Calculation:
 2)10(5
   10
 =====
   0

 if num = 15

      >> 15 % 2 == 0
      >> 1  == 0
      >> 0 (false)


Calculation:
2)15(7
  14
=====
   1

*/