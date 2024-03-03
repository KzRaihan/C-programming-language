/*
Loop Counter can be float

print : 1.00  to 90.00


*/
#include <stdio.h>

int main()
{
    for (float i = 1.00; i <= 90.00; i++)
    {
        printf("%.2f\n", i);
    }
    return 0;
}