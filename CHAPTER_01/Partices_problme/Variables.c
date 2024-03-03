/*
to take an integer A, a very big integer B, a floating value C and
a character D as input and output them serially.

*/
#include <stdio.h>

int main()
{
    int number;
    long long int big_number;
    float point_number;
    char character;

    // input form user
    scanf("%d", &number);
    scanf("%lld", &big_number);
    scanf("%f", &point_number);
    scanf(" %c", &character);

    // output to console

    printf("%d\n", number);
    printf("%lld\n", big_number);
    printf("%.2f\n", point_number);
    printf("%c\n", character);

    return 0;
}