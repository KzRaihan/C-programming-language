#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100];
    printf("Enter a string\n");

    fgets(str, sizeof(str), stdin);

    // remove newline character
    str[strcspn(str, "\n")] = '\0';

    int small_count = 0, capital_count = 0, digit = 0, special = 0;

    int index = 0;

    while (str[index] != '\0')
    {
        if (isalpha(str[index]))
        {
            if (islower(str[index]))
            {
                small_count++;
            }
            else
            {
                capital_count++;
            }
        }
        else if (isdigit(str[index]))
        {
            digit++;
            // delete the digit
            if (index < strlen(str) - 1)
            {
                memmove(&str[index], &str[index + 1], strlen(str) - index);
                index--;
            }
        }
        else
        {
            special++;
        }

        index++;
    }

    // display the modified string
    printf("Modified string: %s\n", str);

    printf("Number of Small Alphabets: %d\n", small_count);
    printf("Number of Capital Alphabets: %d\n", capital_count);
    printf("Number of Digits: %d\n", digit);
    printf("Number of Special Characters: %d\n", special); // with count enter

    return 0;
}