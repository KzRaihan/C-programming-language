// write a program is digit or not without using if else condition

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter Anything: ");
    scanf("%c", &ch);

    printf("Digit: %d\n", ch >= '0' && ch <= '9');
    return 0;
}