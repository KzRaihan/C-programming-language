/*
 * Find Length in manual
   -> set initialization
 */
#include <stdio.h>

int main()
{
    char ch[100] = "Programming my choice"; // 21 with space (no Null characters is count).
    int len = 0;

    while (ch[len] != '\0')
    {
        len++;
    }
    printf("Length: %d", len); // 21
    return 0;
}