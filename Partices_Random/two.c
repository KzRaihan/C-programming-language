#include <stdio.h>

int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    (num1 % 2 == 0) ? printf("num1 is Even \n") : printf("num1 is odd\n");
    (num2 % 2 == 0) ? printf("num2 is Even \n") : printf("num2 is odd \n");

    return 0;
}