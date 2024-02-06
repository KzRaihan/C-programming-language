/*
    Type conversion also know as type casting
    -> Definition: It is the process to converting value(variable) one data type to another data.
    -> float to integer(vice-versa)
    -> integer to double

     ->General syntax :  (target_type) expression.

    -> Type of Type conversion
       >> Implicit type conversion(To conversion the compiler automatically) (smaller data convert to big data).
               >> Eg: int to float,double

       >> Explicit type conversion(To conversion the programmer) (Bigger data to smaller data).
               >> Eg: float,double to int


    performs data type:
        data type || operation||  data type || Result
        -> int op int = int (result)
        -> int op float = float (result)
        -> float op float = float (result)

    Q.N:
    int main()
    {
    int a = 1.999999;
    what is the output.
    }


*/
#include <stdio.h>

int main()
{
    printf("\nExplicit Type Conversion\n");

    printf("\n\t\tSolve the Question\n");
    printf("\n\t----------------------------\n");

    int a = (int)1.999999; // To convert float(1.999999) to int(1).

    printf("Answer of the question: %d\n", a); // op : 1

    printf("\n\t\tExample: 01\n");
    printf("\n\t----------------------------\n");

    float float_value = 3.91;
    int int_value = (int)float_value; // To convert float(float_value) to int(int_value).

    printf("\nfloat Value: %f\n", float_value); // op: 3.91
    printf("int Value: %d\n", int_value);       // op: 3

    printf("\n\t\tExample: 02\n");
    printf("\n\t----------------------------\n");
    double D_var1 = 99.999;
    int I_var2 = (int)D_var1; // to convert var1(double) to integer.

    printf("\nDouble value: %lf\n", D_var1);
    printf("Convert Double to integer value: %d\n", I_var2);

    printf("\n\t\tExample: 03\n");
    printf("\n\t----------------------------\n");
    int num1 = 80;
    float num2 = (float)num1; // To convert num1(int) to float(num2).

    printf("\ninteger value: %d\n", num1);
    printf("Convert int to float value: %.2f\n", num2);

    printf("\nImplicit Type Conversion\n");
    printf("\n\t\tExample: 01\n");
    printf("\n\t======================\n");

    printf("Output: %.1f\n", 4 / 2.0);

    printf("\n\t\tExample: 02\n");
    printf("\n\t======================\n");

    int first = 99;
    float second = first;

    printf("First: %d\n", first);
    printf("First: %f\n", second);

    return 0;
}
