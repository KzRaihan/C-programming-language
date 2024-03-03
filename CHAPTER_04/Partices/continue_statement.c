/*
    -> continue keyword is used to ignore some iteration of a loop.
    -> particular set of line skip or ignore then we use continue statement.
    -> skip or jump the line

*/
#include <stdio.h>

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i == 3) // only i is became 3 then skip
        {
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}
/*
  skip or ignore when i = 3
  o/p:
      1 2 4 5 6 7 8 9 10 ( except 3)
*/