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

int main()
{
    char paragraph[1000];
    printf("Enter a paragraph : ");
    fgets(paragraph, sizeof(paragraph), stdin);

    for (int i = 0; i < strlen(paragraph); i++)
    {
        if (is_vowel(paragraph[i]))
        {
            for (int j = i; j < strlen(paragraph) - 1; j++)
            {
                paragraph[j] = paragraph[j + 1];
            }
            i--;
        }
    }

    printf("Paragraph after removing all the vowels : \n%s", paragraph);

    return 0;
}