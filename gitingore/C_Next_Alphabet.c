/*
Given a lowercase alphabet character. You have to print the next character in the alphabet.

*/
#include <stdio.h>

int main()
{
    char low_alp;
    scanf("%c", &low_alp);

    if (low_alp >= 'a' && low_alp < 'z')
    {
        int res = low_alp + 1;
        printf("%c\n", res);
    }
    else if (low_alp == 'z')
    {
        // int ans = low_alp - 30;
        printf("a\n");
    }

    return 0;
}