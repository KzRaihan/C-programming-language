/*
  Given two strings S and T.
  Print 2 lines that contain the following in the same order:

    >> Print the length of S and T separated by space.
    >> Print a new string that contains S and T separated by a space.
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000], t[1000];
    // first input and second .
    scanf("%s", s);
    scanf("%s", t);

    // length first and second string.
    int len_s = strlen(s);
    int len_t = strlen(t);

    // printf string length
    printf("%d %d\n", len_s, len_t);

    // display string
    printf("%s %s\n", s, t);

    return 0;
}