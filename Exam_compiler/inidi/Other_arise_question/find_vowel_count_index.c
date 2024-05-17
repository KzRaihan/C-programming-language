#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_vowel(char c)
{
    c = tolower(c);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return 1;
    return 0;
}

void find_vowels(char *paragraph, int *indices, int *count)
{
    for (int i = 0; i < strlen(paragraph); i++)
    {
        if (is_vowel(paragraph[i]))
        {
            if (*count < 100)
            {
                indices[*count] = i;
                (*count)++;
            }
            printf("Vowel : %c, Index : %d\n", paragraph[i], i);
        }
    }
}

int main()
{
    char paragraph[1000];
    printf("Enter a paragraph : ");
    fgets(paragraph, sizeof(paragraph), stdin);

    int indices[100] = {0};
    int count = 0;

    find_vowels(paragraph, indices, &count);

    printf("Number of vowels in the paragraph : %d\n", count);

    return 0;
}