#include <stdio.h>
#include <string.h>

int main()
{
    char str[10001];
    scanf("%s", str);
    int len = strlen(str);
    char arr[10001] = {0};

    for (int i = 0; i < len; i++)
    {
        arr[i] = str[i];
    }
    int i = 0, j = len - 1, temp;
    while (i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    i = 0;
    if (arr == str)
    {
        printf("YES\n");
        }
    else
    {
        printf("NO\n");
    }
    // printf(arr);
    // printf(str);
    return 0;
}