#include <stdio.h>

int main()
{
    char name[50];
    printf("Enter of last name: ");
    scanf("%s", &name); // %s is automatic assign the null characters

    printf("Your name is: ");
    printf("%s\n", name);

    // when we input %s then must provided the size for null character

    // * wrong syntax limitation of scanf()
    // if the input size is over the declare size but scanf() takes input form user and output || Buffer overflow

    /*
        char name1[4];
        printf("Enter of last name: ");
        scanf("%s", name1); // * i/p: Raihan

        printf("your name is: "); // * this is provided answer but this the drawback of scanf().
        printf("%s\n", name1);

    */
    return 0;
}