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

    if ((ch >= 'a') && (ch <= 'z')) // a = 97, z = 122 in ascii
    {
        printf("lower to upper: %c\n", ch - 32);
    }
    else if ((ch >= 'A') && (ch <= 'Z')) // A = 67, z = 97 in ascii
    {
        printf("Upper to lower: %c\n", ch + 32);
    }
    else
    {
        printf("Invalid letter\n");
    }
    return 0;
}