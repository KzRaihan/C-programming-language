/*
    * Decrement operator
    for(ini; condi; drc){
        do something (body of for loop)
    }

*/
#include <stdio.h>

int main()
{
    printf("Pre-decrement operator\n");
    int i = 4;
    printf("i            = %d\n", i);   // i = 4
    printf("i--          = %d\n", i--); // i = 4 || first use i then increment i
    printf("After drc i  = %d\n", i);   // i = 3

    printf("Post-decrement operator\n");
    int j = 4;
    printf("j            = %d\n", j);   // j = 4
    printf("--j          = %d\n", --j); // j = 3 || first use i then increment i
    printf("After drc j  = %d\n", j);   // j = 3

    return 0;
}