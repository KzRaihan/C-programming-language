#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];

    printf("Enter Element of str1: ");
    scanf("%s", str1);

    printf("Enter Element of str2: ");
    scanf("%s", str2);

    // str2 copy to str1 with null character
    int len = strlen(str2);
    for (int i = 0; i <= len; i++)
    {
        str1[i] = str2[i];
    }

    // display
    printf("copy str2 to str1: %s", str1);

    return 0;
}