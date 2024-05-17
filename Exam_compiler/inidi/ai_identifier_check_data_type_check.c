#include <stdio.h>
#include <string.h>
#include <ctype.h>

int check_identifier(char *str)
{
    if (!isalpha(*str) && *str != '_')
        return 0;

    for (int i = 1; i < strlen(str); i++)
    {
        if (!(isalnum(str[i]) || str[i] == '_'))
            return 0;
    }

    return 1;
}

int main()
{
    char identifier[100];
    printf("Enter identifier name : ");
    scanf("%s", identifier);

    if (strcmp(identifier, "int") == 0 || strcmp(identifier, "float") == 0 || strcmp(identifier, "double") == 0 || strcmp(identifier, "char") == 0)
    {
        printf("%s is not a valid identifier\n", identifier);
    }
    else
    {
        if (check_identifier(identifier))
            printf("%s is valid\n", identifier);
        else
            printf("%s is invalid\n", identifier);
    }

    return 0;
}