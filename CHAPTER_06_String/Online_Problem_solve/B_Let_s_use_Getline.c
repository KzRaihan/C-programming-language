/*
   Given a string S. Print the string S from the beginning to the first '\' character without printing the '\'.
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char ch[1000001];
    // gets(ch);
    fgets(ch, 100001, stdin);
    // printf("%s\n", ch);

    int i = 0;
    while (ch[i] != '\\')
    {
        printf("%c", ch[i]);
        i++;
    }

    // Another way to solve .
    //  for (int i = 0; ch[i] != '\0'; i++)
    //  {
    //      printf("%c", ch[i]);
    //  }
    return 0;
}