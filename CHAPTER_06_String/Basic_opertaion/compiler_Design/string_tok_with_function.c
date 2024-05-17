#include <stdio.h>
#include <string.h>

int main()
{
    char ch[] = "This the way.";
    char div[] = " ";
    // Get the first token
    char *portion = strtok(ch, div);

    while (portion != NULL)
    {
        printf("%s\n", portion);
        portion = strtok(NULL, div); // next token
    }

    return 0;
}