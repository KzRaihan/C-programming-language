/*
    --> * Assignment Operator
    >> Used to assign a values to variables.

    Type:
        >> Basic Assignment operator(=).
        >> Additional Assignment Operator(+=).
        >> Multiplication Assignment Operator(*=).
        >> Division Assignment Operator(/=).
        >> Modulo Assignment Operator(%).

*/
#include <stdio.h>

int main()
{

    int x = 10; // Basic Assignment operator
    x += 20;    // x = x + 20
                // x = 10 + 20
                // x = 30
    printf("Additional Assignment Op: %d\n", x);
    printf("..............................\n\n");

    int sub = 20;
    printf("Subtraction Assignment Op: %d\n", sub -= 10);
    printf("..............................\n\n");
    // sub = sub - 10
    // y = 20 - 10
    // y = 10

    int mul = 30;
    printf("Multiplication Assignment Op: %d\n", mul *= 30);
    printf("..............................\n\n");
    // mul = mul * 30
    // mul = 30 * 30
    // mul = 900

    float div = 40;
    printf("Division Assignment Op: %.2f\n", div /= 11);
    printf("..............................\n");
    // div = div / 11
    // div = 40 / 11
    // div = 3.64

    int mod = 40; // must data type is integer
    printf("Modulo Assignment OP: %d\n", mod %= 11);
    printf("..............................\n\n");
    /*
        -> 40 % 11

        11) 40 ( 3
            33
        --------
            7 <-- Return
    */

    printf("\nAll Assignment Operator\n");
    printf("..............................\n\n");

    int num1, num2;
    printf("Enter two integer:  ");
    scanf("%d %d", &num1, &num2);

    printf("\n\nAddition Assignment Op: %d\n", num1 += num2);
    printf("Subtraction Assignment Op: %d\n", num1 -= num2);
    printf("Multiplication Assignment Op: %d\n", num1 *= num2);
    printf("Division Assignment Op: %d\n", num1 /= num2); // here, the problem
    printf("Modulo Assignment Op: %d\n", num1 %= num2);

    return 0;
}