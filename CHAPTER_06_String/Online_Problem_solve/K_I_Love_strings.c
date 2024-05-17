/*
Given two strings S and T. Print a new string that contains the following:

The first letter of the string S followed by the first letter of the string T.
the second letter of the string S followed by the second letter of the string T.
and so on...

*Note: If the length of S is greater than the length of T then you have to add the rest of S letters at the end of the new string and vice versa.

input:
2
ipAsu ccsit
ey gpt
output:
icpcAssiut
egypt
*/
#include <stdio.h>
#include <string.h>

int main()
{
    int num;
    scanf("%d", &num);

    while (num--)
    {
        char first[60], second[60];
        scanf("%s %s", first, second);

        int len1 = strlen(first), len2 = strlen(second);

        // find max length between both strings
        int max = len1;
        if (max < len2)
        {
            max = len2;
        }
        // * if work: when, multiply by if is assign it's means
        //* at the same time two if is work
        for (int i = 0; i < max; i++)
        {
            if (i < len1)
            {
                printf("%c", first[i]);
            }
            if (i < len2)
            {
                printf("%c", second[i]);
            }
        }
        printf("\n");
    }
    return 0;
}