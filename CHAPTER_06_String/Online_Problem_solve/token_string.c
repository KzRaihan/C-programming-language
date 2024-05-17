#include <stdio.h>
#include <string.h>

int main()
{
    char str3[10000];
    printf("Enter the string: ");

    fgets(str3, 100000, stdin);

    int i = 0;
    while (str3[i] != strlen(str3))
    {
        if (str3[i] != ' ')
        {
            printf("%c\n", str3[i]);
        }
    }

    return 0;
}