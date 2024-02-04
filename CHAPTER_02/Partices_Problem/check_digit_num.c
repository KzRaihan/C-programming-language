/*
  -> write a program to check if given character is digit or not
  (Every input from    keyword is character)

*/
#include <stdio.h>

int main()
{
  char ch;
  printf("Enter: ");
  scanf("%c", &ch);

  printf("Enter digit: %d", (ch >= '0') & (ch <= '9'));

  return 0;
}
/*
input: (any Alphabet or special symbol not digit)
-------
ch : a

-> ch > '0' && ch < '9'
-> a > '0' && a < '9'
-> F  && F
-> 0 (False)

output: 0

input: (any digit not Alphabet (0-9))

ch : 5

-> ch > '0' && ch < '9'
-> 5 > '0'  && ch < '9'
-> T  && T
-> T
-> 1

output: 1




*/