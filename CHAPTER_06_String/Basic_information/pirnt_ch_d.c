#include <stdio.h>
#include <string.h>

int main()
{
    char ch[10] = {'1', '2', '3'};
    // equal decimal value
    /*
       ascii  -    decimal
       0       -   48
       1       -   49
       2       -   50
       -------
       ------
       9       -   57


    */
    printf("Decimal for input:\n");
    for (int i = 0; i < strlen(ch); i++)
    {
        printf("ch[%d]: %d\n", i, ch[i]);
    }

    return 0;
}