#include <stdio.h>

int main()
{
    char ch[100];
    fgets(ch, 12, stdin);
    printf("%s", ch);
    return 0;
}