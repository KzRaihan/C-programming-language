/*
  * why provided erro message
     when , use %s to print string then , for null character must be assign the size of the string.
*/
#include <stdio.h>

int main()
{
    int name[6] = "Raihan";
    printf("Name: %s\n", name); // when we access format specifier of string then it's provided error message
                                // because,Null character size  must be assign the size of the string.

    // * correct way
    /*
       int name[7] = "Raihan";  // Raihan = 6 characters + Null Character ( \0 )= 7 bytes in memory.
       printf("Name: %s\n", name);
    */
    return 0;
}