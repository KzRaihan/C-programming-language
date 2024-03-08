/*
    Remember that:
    continue only skip or jump under(down) or next the instructions .

*/
#include <stdio.h>

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", i);
        if (i == 5)
        {
            continue;
        }
    }
    return 0;
}
/*
     can't skip or ignore when i = 5
  o/p:
      1 2  3 5 4 6 7 8 9 10 ( except 5)

      -> if we need to ignore the particular line then
       we must be use continue statement before the particular line or statement.
*/