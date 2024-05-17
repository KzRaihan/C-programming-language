/*
Given a string S. Print the origin string if it's not too long otherwise, print the special abbreviation.

Note: The string is called too long, if its length is strictly more than 10 characters. If the string is too long then you have to print the string in the following manner:

Print the first character in the string.
Print number of characters between the first and the last characters.
Print the last character in the string.
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    int num;
    scanf("%d", &num);
    // getchar(); || there, single line input that way no need getchar().
    for (int i = 0; i < num; i++)
    {
        scanf("%s", &str);
        int len = strlen(str);
        if (len <= 10) // *why equal -> ans: more than 10(if its length is strictly more than 10 characters)
        {
            printf("%s\n", str);
        }
        else
        {
            printf("%c%d%c\n", str[0], len - 2, str[len - 1]);
        }
    }

    return 0;
}