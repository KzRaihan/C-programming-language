#include <stdio.h>
#include <string.h>

int main()
{
    char str3[100];
    // input form user
    printf("Enter your string: \n");
    fgets(str3, 100, stdin);

    // display
    // printf("%s\n", str3);

    char div[100] = " ";

    // first tokenization
    char *token = strtok(str3, div);

    printf("Token the input message\n");

    while (token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, div);
    }

    return 0;
}