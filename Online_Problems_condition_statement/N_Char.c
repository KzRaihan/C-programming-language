/*
Given a letter X. If the letter is lowercase print the letter
after converting it from lowercase letter to uppercase letter.
Otherwise print the letter after converting it from uppercase letter to lowercase letter
*/
#include <stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);

    if (ch <= 97 && ch >= 122) // this input is lowercase letter. a = 97, z = 122 in ASCII
    {
        printf("%c\n", ch + 32); // converting to uppercase letter.
    }
    else
    {
        printf("%c\n", ch - 32); // converting to uppercase letter.
    }

    return 0;
}