/*
  Given a number X. Print "EVEN" if the first digit of X is even number.
  Otherwise print "ODD".

  Input
  Only one line containing a number X (999 < X  ≤  9999)

   * According to input we see the number length 4 digits
*/
#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    int res;

    res = (num / 1000); // first digit come
    // printf("%d", res);

    if (res % 2 == 0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }
    return 0;
}