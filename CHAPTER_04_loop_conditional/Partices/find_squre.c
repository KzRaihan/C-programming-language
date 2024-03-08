/*
  >> Find the square of 1 to n and print

  i/P: 4
  o/p: 1^2  = 1
       2^2  = 4
       3^2  = 9
       4^2  = 16
*/
#include <stdio.h>

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        printf("Square of %d is : %d\n", i, i * i);
    }

    return 0;
}
