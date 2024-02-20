#include <stdio.h>

int main()
{
    int i = 9;

    i++; // i = 9
         // i = i+1
         // i = 9+1
         // i= 10

    ++i; // 10+1 = 11

    i;         // 11
    i = i + 1; // 11 + 1 = 12
    i += 2;    // 12 + 2 = 14

    printf("i = %d\n", i++);   // 14 but i becomes 15
    printf("i = %d\n\n", ++i); // 15 + 1 = 16

    i -= 1; // i = 16 but i becomes 15
    printf("\ni_output = %d\n", i);
    i -= 3; // 15 - 3 = 12
    --i;    // 12 - 1 = 11
    i++;    // i = 11 but i become i = 12
    ++i;    // 12 + 1 = 13

    printf("i = %d\n", i);   // i = 13
    printf("i = %d\n", --i); // i = 13 - 1 = 12
    printf("i = %d\n", ++i); // i = 12 + 1 = 13
    printf("i = %d\n", i++); // i = 13  but i become i = 14
    printf("i = %d\n", i);   // i = 14
    return 0;
}