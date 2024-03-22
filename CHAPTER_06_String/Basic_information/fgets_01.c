/*
  * fgets() is sase alternative to gets()
  >> Multiple word string input with space is positive.

  -> syntax of fgets()
       * fgets(array_name, array_size_with_Null_character,stdin);

   -> limitation of fgets() :
    >>  It stops reading the stream if it encounters a newline character ('\n').
       So, If user enters more than one line ,it will stop taking input after first line.


*/
#include <stdio.h>

int main()
{
    char ban[100];
    printf("Write about your Country: \n");
    fgets(ban, 20, stdin); // * only (input) the 19 characters and access that.

    printf("Country is: %s\n", ban);

    return 0;
}