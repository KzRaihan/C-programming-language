/*
   ->  Basic variable declaration and initialization


*/
#include <stdio.h> // Preprocessor Directive

int main() // here, Execute start
{
    // Variable Declaration
    int age;
    float pi;
    char star;
    double fix_price;

    // Variable initialization
    age = 22;
    pi = 3.14;
    star = '*';
    fix_price = 999.999;

    // Display the variable

    printf("Age is              = %d\n", age);
    printf("Pi value is         = %f\n", pi);
    printf("Star look like      = %c\n", star);
    printf("Fix price  product  = %lf\n", fix_price);

    return 0;
}