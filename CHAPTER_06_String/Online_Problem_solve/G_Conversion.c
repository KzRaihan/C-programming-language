/*
* Given a string S. Print the origin string after replacing the following:

Replace every comma character ',' with a space character.
Replace every capital character in S with its respective small character and Vice Versa.
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000001];
    scanf("%s", str);

    int len = strlen(str);

    // while (str[i] != len)
    for (int i = 0; i < len; i++)
    {
        if (str[i] == ',')
        {
            str[i] = ' '; // comma(,) is replace by spaces( ).
        }
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32; // convert to uppercase.
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') // If it is a Capital Letter
        {
            str[i] = str[i] + 32; // convert to lowercase.
        }

        //  printf("%c", str[i]);

        // i++;
    }
    printf("%s", str);
    // // display the string
    // for (int i = 0; i < len; i++)
    // {
    //     printf("%c", str[i]);
    // }
    return 0;
}