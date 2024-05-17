// * string tokenization without function
#include <stdio.h>

int main()
{
    char ch[100] = "This is the way to do something";
    int i = 0;
    while (ch != '\0')
    {
        if (ch[i] == ' ')
        {
            // printf("%c\n", ch[i]);
            printf("%s\n", ch);
        }
        i++;
    }

    return 0;
}