#include <stdio.h>

int main()
{
    int size;
    printf("Enter size: ");
    scanf("%d", &size);
    for (int i = 1; i <= size; i++)
    {
        scanf("%d", &i);
    }
    printf("Output are: \n");
    for (int i = 1; i <= size; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}