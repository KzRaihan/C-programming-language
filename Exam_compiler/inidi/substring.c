#include <stdio.h>
#include <string.h>

void find_pattern(char *text, char *pattern)
{
    int i, j;

    int text_len = strlen(text);
    int pattern_len = strlen(pattern);

    int no_found = 0;

    for (i = 0; i <= text_len - pattern_len; i++)
    {
        for (j = 0; j < pattern_len; j++)
        {
            if (text[i + j] != pattern[j])
            {
                break;
            }
        }

        if (j == pattern_len)
        {
            no_found = 1;
            printf("Found at index: %d\n", i);
        }
    }
    if (no_found == 0)
    {
        printf("Not Found\n");
    }
}

int main()
{
    char text[100], sub[100];

    printf("Enter a string:\n");
    gets(text);

    printf("\nEnter a pattern:\n");
    gets(sub);

    find_pattern(text, sub);

    return 0;
}