/*
 Given a number N. Print the digits of that number from right to left separated by space.
 Input
First line contains a number T (1 ≤ T ≤ 10) number of test cases.

Next T lines will contain a number N (0 ≤ N ≤ 109)
*/
#include <stdio.h>

int main()
{
    int size, num;
    scanf("%d", &size); // First line contains a number T (1 ≤ T ≤ 10) number of test cases.

    for (int i = 1; i <= size; i++)
    {
        scanf("%d", &num); // Next T lines will contain a number N (0 ≤ N ≤ 109)
        while (num != 0)
        {

            printf("%d ", num % 10);
            num = num / 10;
        }
        printf("\n");
    }

    return 0;
}
/*
 * Next T lines will contain a number N (0 ≤ N ≤ 109). here, zero(0) is include.
    while (num != 0) according this condition if i/P: 0 then this program is not work.
  * that is the drawbacks in this code

  Eg:
    first i/p: size = 1
 >>   for (int i = 1; i <= size; i++)

   -> initi: i = 1;

   -> condition: i<=size
               = 1 <= 1 (true)
                go to for loop body

        --> for loop body
            second i/p : num = 0
              >>  while (num != 0)
                       =  0 != 0 (false)
                       = can't go to while loop body.
            * this is the drawback of this code when we use while loop


*/