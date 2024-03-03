// Both condition is true
#include <stdio.h>

int main()
{
    if (2.3) // true condition
    {
        printf("hello\n"); // this is the output
    }

    else if (5) // perform this statement when if is false
    {
        printf("HI\n");
    }
    else // perform when if, else if condition is false
    {
        printf("Bye\n");
    }
    return 0;
}