/*
    * Operator:
        >> Work(Operation) of operand
    Type of Operator
        >> Arithmetic Operator
        >> Relational Operator
        >> Logical Operator
        >> Assignment Operator
        >> Bitwise Operators.
        >> Ternary Operator.
        >> Increment and Decrement Operators

*/
// Arithmetic Operator
#include <stdio.h>

int main()
{
    printf("\nArithmetic Operator\n");
    printf("-------------------------------------\n");

    printf("\t1.Addition \n");
    int num1 = 80, num2 = 6;
    int add = num1 + num2;
    printf("\nAddition: %d", add);

    printf("\n...........................\n");

    printf("\t2.Subtraction\n");

    int var1 = 80, var2 = 6;
    int sub = var1 - var2;
    printf("\nSubtraction: %d", sub);

    printf("\n...........................\n");

    printf("\t3.Multiplication\n");

    int var3 = 80, var4 = 6;
    int mul = var3 * var4;
    printf("\nMultiplication: %d", mul);

    printf("\n...........................\n");

    printf("\t4.Division\n");

    float var5 = 80, var6 = 6;
    float div = var5 / var6;
    printf("\nDivision: %f", div);

    printf("\n...........................\n");

    printf("\t5.Modulo or Remainder\n");

    int num5 = 80, num6 = 6;
    int mod = num5 % num6;
    printf("\nModulo: %d", mod);

    printf("\n...........................\n");

    printf("\nAll Arithmetic Operations: \n");
    float Num1, Num2;

    printf("\nEnter two Number:  ");
    scanf("%f %f", &Num1, &Num2);

    printf("\nAddition       : %.0f", Num1 + Num2);
    printf("\nSubtraction    : %.0f", Num1 - Num2);
    printf("\nMultiplication : %.2f", Num1 * Num2);
    printf("\nDivision       : %.2f", Num1 / Num2);
    printf("\nModulo         : %d", (int)Num1 % (int)Num2);

    return 0;
}