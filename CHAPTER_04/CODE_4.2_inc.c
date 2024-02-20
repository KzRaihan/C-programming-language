/*
    -> increment operator
         >> pre-increment(++i)  // i = variable
            First use then increment

         >> post-increment(i++)
            first increment then use (use means display or store in memory)
*/
#include <stdio.h>

int main()
{
    // post-increment
    printf("\nPost increment operator\n");
    int i = 1;

    printf("i         = %d\n", i);   // i = 1
    printf("i         = %d\n", i++); // i = 1
    printf("after inc = %d\n", i);   // i = 2

    // pre-increment
    printf("\npost increment operator\n");
    int j = 1;

    printf("j = %d\n", j); // i = 1
    printf("%d\n", ++j);   // i = 2
    printf("%d\n", j);     // i = 2

    return 0;
}
/*
 * code explain
 post increment
    -> i++ = i + 1

    -> printf("%d\n", i++); // i = 1
            preincrement means first use the variable then increment
            %d hold the address of only i variable location. here i is 1. so op: 1

    -> printf("%d\n", i);   // i = 2

then increment the value of i . so i becomes 2. op: 2
    i=1;
    i++ = i + 1
        = 1 + 1
        = 2




*/