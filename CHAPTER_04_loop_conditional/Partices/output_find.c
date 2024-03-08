/*
 1. What will be the output of the following C code?

    int k;
    for (k = -3; k < -5; k++)
        printf("Hello ");

*/

#include <stdio.h>

int main()
{
    int k;
    for (k = -3; k < -5; k++)
    {
        printf("Hello");
    }

    return 0;
}
/*
  there is no output because
     -3 is bigger than the -5

-> initialization part
    k = -3
-> condition part
    k < -5
    -3 < -5 (false condition)
      won't go to for loop body

*/