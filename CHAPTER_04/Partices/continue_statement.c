/*
    -> continue keyword is used to ignore one iteration of a loop.
    -> particular set of line skip then we use continue statement.
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