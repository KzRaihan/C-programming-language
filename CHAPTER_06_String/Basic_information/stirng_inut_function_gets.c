/*
   -> String input function
       >> 1. scanf() || that is already done.
       >> 2. gets()
       >> 3. fgets()

  * 2. gets() function:
       >> Dangerous and outdated.
      *>> Multiple word can be input.
       >> It's Extra Memory allocation (Buffer overflow Risk)
       >> It's can't dependent the string array size.(cross the string size range)

*/
#include <stdio.h>

int main()
{
    char str[100];

    printf("Enter Your full Name: ");
    gets(str);

    printf("Your full Name is: %s\n", str);

    // * Drawbacks of gets()
    /*
      char str[5];
    printf("Enter Your full Name: ");
    gets(str);  || here, i/p: Bangladesh || which is the overflow the size of the string.
                            >> Bangladesh = 10
                            >> str hold 5
    printf("Your full Name is: %s\n", str);|| o/p: Bangladesh

     * Because: that's the drawbacks of the gets().
    */
    return 0;
}