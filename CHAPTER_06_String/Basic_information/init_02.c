#include <stdio.h>
#include <string.h>

int main()
{
    char name[] = "Bangladesh";
    printf("Name is : ");
    for (int i = 0; i < 10; i++)
    {
        printf("%c", name[i]);
    }
    int size = strlen(name);
    printf("\nSize of name: %d", size);

    return 0;
}