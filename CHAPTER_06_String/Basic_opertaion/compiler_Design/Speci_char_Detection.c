/*
 * C Program to Count Alphabets, Digits & Special characters from a String
 */
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter a string\n");

    fgets(str, sizeof(str), stdin);

    int small_count = 0, capital_count = 0, digit = 0, special = 0;

    int index = 0;

    while (str[index] != '\0')
    {
        if (str[index] >= 'a' && str[index + 1] <= 'z')
        {
            small_count++;
        }
        else if (str[index] >= 'A' && str[index] <= 'Z')
        {
            capital_count++;
        }
        else if (str[index] >= '0' && str[index] <= '9')
        {
            digit++;
        }
        else
        {
            special++;
        }

        index++;
    }

    //  printf("%s\n", str);
    printf("Number of Small Alphabets: %d\n", small_count);
    printf("Number of Capital Alphabets: %d\n", capital_count);
    printf("Number of Digits: %d\n", digit);
    printf("Number of Special Characters: %d\n", special); // with count enter

    return 0;
}