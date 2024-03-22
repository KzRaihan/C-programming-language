/*
 * Definition: A string is a collection of characters (such as letters, digits, symbols, and spaces)
               treated as a single unit of data.
    -> Strings are used to represent text-based information in programs.
    -> Every input is a string by using keyboard
    * string is a character type of array.
    * string is terminate by null character ('\0').

*/
#include <stdio.h>

int main()
{
    // string declare
    char strl[7];

    // string initialization one way
    strl[0] = 'R';
    strl[1] = 'A';
    strl[2] = 'I';
    strl[3] = 'H';
    strl[4] = 'A';
    strl[5] = 'N';
    strl[6] = '\0'; //<- this is not mandatory but for this null char must declare size.

    // access or output
    for (int i = 0; i < 7; i++)
    {
        printf("%c", strl[i]);
    }
    int sz = sizeof(strl);
    printf("\nMemory occupied Size : %d byte", sz);
    return 0;
}
/*
 * when string is initialization by character type way then, declare size of null character is must.
 here,
  RAIHAN = 6 bytes
  null charater = 1 byte
  -----------------------
   total size : 7 byte ( which is declare as a size).

*/