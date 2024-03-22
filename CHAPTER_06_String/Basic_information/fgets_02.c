#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    printf("Enter your name: ");
    fgets(name, 10, stdin);
    // here, size 10 so, only 10 characters print.

    printf("%s\n", name);

    printf("%d", strlen(name));

    return 0;
}