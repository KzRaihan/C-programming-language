/*
 Given a string S. Determine whether S is Palindrome or not

Note: A string is said to be a palindrome if the reverse of the string is same as the string. For example, "abba" is palindrome, but "abbc" is not palindrome.

*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[10001];
    scanf("%s", str);

    int len = strlen(str);
    char arr[10001] = {0};

    // copy str to arr string
    for (int i = 0; i < len; i++)
    {
        arr[i] = str[i];
    }
    // reverse of the str string using two pointer technique
    int i = 0, j = len - 1, temp;
    while (i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    int k = 0;
    // while (k < len)
    // {
    if (arr[k] == str[k])
    {
        printf("YES\n");
        // break;
    }
    else
    {
        printf("NO\n");
        // break;
    }
    // }

    return 0;
}