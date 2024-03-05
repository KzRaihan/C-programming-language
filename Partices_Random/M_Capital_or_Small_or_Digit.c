// Only one line containing a character X which will be a capital or small letter or digit.
#include <stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);

    if (ch >= '0' && ch <= '9')
    {
        printf("IS DIGIT\n");
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("ALPHA\nIS CAPITAL\n");
    }
    else
    {
        printf("ALPHA\nIS SMAll\n");
    }

    return 0;
}