#include <stdio.h>

int main()
{
    char sen[100];

    printf("Enter a sentence: ");
    fgets(sen, sizeof(sen), stdin);

    // check
    // int len=strlen(sen);
    int i = 0, count = 0;
    while (sen[i] != '\0')
    {
        if (sen[i] == 'a' || sen[i] == 'A' || sen[i] == 'e' || sen[i] == 'E' ||
            sen[i] == 'i' || sen[i] == 'I' || sen[i] == 'o' || sen[i] == 'O' ||
            sen[i] == 'u' || sen[i] == 'U')
        {
            sen[i] = ' ';
        }
    }
    printf("%s", sen);

    return 0;
}