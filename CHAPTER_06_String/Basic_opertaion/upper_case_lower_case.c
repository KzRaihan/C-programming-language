#include <stdio.h>
#include <string.h>
// #include <ctype.h>

int main()
{
    char letter[100];
    scanf("%s", letter);

    int len = strlen(letter);

    for (int i = 0; i < len; i++)
    {
        /*
        if(isupper(str[i])
        {
            str[i] = tolower(str[i]); // convert to lowercase.
        }
        else if(islower(str[i]))
        {
            str[i] = toupper(str[i]); // convert to uppercase.
        }
        */
        if (letter[i] >= 'a' && letter[i] <= 'z')
        {
            letter[i] = letter[i] - 32; // convert lowercase to upper case letter.
        }
        else if (letter[i] >= 'A' && letter[i] <= 'Z')
        {
            letter[i] = letter[i] + 32; // convert upper case to lower case letter.
        }
    }

    // display
    printf("%s", letter);
    return 0;
}