/*
    * Padding
    -----------
   >> when perform the division operation then must be using following format
       -> one number in convert to double

       res = num_1/(num_2 * 1.0)

*/
#include <stdio.h>

int main()
{
    int num_1, num_2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num_1, &num_2);

    double result = num_1 / (num_2 * 1.0);
    printf("Result: %.3lf\n", result);

    return 0;
}