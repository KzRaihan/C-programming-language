// Given a string S. Print the summation of its digits.
#include <stdio.h>
#include <string.h>

int main()
{
    char ch[1000001]; // say , in a question.
    scanf("%s", ch);

    // calculation
    int dec, sum = 0;
    for (int i = 0; i < strlen(ch); i++)
    {
        dec = ch[i] - '0';
        sum += dec;
        // sum += ch[i] - '0'; is also correct as it will do the same thing
    }
    printf("%d", sum);

    return 0;
}