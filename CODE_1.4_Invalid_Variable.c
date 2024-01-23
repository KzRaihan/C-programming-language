// Basic variable syntax and invalid case.

#include <stdio.h>

int main()
{
    printf("InCorrect or InValid Variable\n");
    int #var = 1;
    int int = 20;
    int 12var = 2;
    float v ar = 3.1416;
    double var1 &var4 = 4.5000;
    char char = 'A';
    double _var1 &var3 = 6.023;
    float var.var2 = 5;
    int dig, num = 9999, 8888;

    printf("var     = %d\n", #var);
    printf("int     = %d\n", int);
    printf("12var    = %d\n", 12var);
    printf("v ar    = %f\n", v ar);
    printf("var1 &var4    = %lf\n", var1 & var4);
    printf("char = %c\n", char);
    printf("_var&var3 = %lf", _var1 & var3);
    printf("%f", var.var2);
    printf("%d %d", dig, num);

    return 0;
}