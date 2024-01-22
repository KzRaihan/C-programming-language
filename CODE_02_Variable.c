// Basic variable syntax and correctly use and invalid case.

#include <stdio.h>

int main()
{
    printf("Correct or Valid Variable\n");
    int var = 1;
    int VAR = 20;
    int $var = 2;
    float _var = 3.1416;
    double var4 = 4.5000;
    char var_one = 'A';
    int INT = 100;

    printf("var     = %d\n", var);
    printf("VAR     = %d\n", VAR);
    printf("$var    = %d\n", $var);
    printf("_var    = %f\n", _var);
    printf("var4    = %lf\n", var4);
    printf("var_one = %c\n", var_one);
    printf("INT     = %d\n", INT);

    return 0;
}