/*
   >> input as character and output as decimal

   i/p:
       323 (character)

    output:
      sum of the characters(3+2+3)=8
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char ch[100];
    printf("Enter character digit: ");
    scanf("%s", ch);

    // convert char to int and sum using ASCII value
    int sum = 0;
    int dec;
    for (int i = 0; i < strlen(ch); i++)
    {
        dec = ch[i] - '0'; // convert char to int.
        sum += dec;
        // sum = sum + (ch[i] - '0');
    }
    printf("\nSum of the character input: %d", sum);

    return 0;
}