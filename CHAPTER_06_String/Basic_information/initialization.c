/*
 * Difference way to declare and initialization string.
 * format specifier of string: %s
 */
#include <stdio.h>

int main()
{
    // string declare as a character
    char name[10] = {'R', 'a', 'i', 'h', 'a', 'n'};

    // string access as character array
    printf("Access as character array:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%c", name[i]);
    }

    // string declare as string with double quotation
    char first_name[20] = "Kamruzzaman"; // automatic null character is assign as end character.

    // access by string format specifier
    printf("\nAccess as string format specifier \n");
    printf("%s\n", first_name);

    // initialization string with no size assign(declare).
    char choice[] = {'K', 'z', '0', '6', '\0'}; // in this type initialization, must be assign null character.

    // access or print using format specifier
    printf("%s\n", choice);

    return 0;
}