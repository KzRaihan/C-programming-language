/*
Given a letter X. Determine whether X is Digit or Alphabet and
if it is Alphabet determine if it is Capital Case or Small Case.

*/
#include <stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);

    if (ch >= '0' && ch <= '9')
    {
        printf("IS DIGIT\n");
    }

    else if (ch >= 'a' && ch <= 'z')
    {
        printf("ALPHA\n");
        printf("IS SMALL\n");
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("ALPHA\n");
        printf("IS CAPITAL\n");
    }
    else
    {
    }

    return 0;
}