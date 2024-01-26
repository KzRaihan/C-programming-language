/*
    -> Definition : Type Declaration instructions
    -> Valid and Invalid Type Declaration Instructions
*/
#include <stdio.h>

int main()
{
    printf("\nTDI refers, Declare Variable Before using it\n");

    printf("\nSome Valid Type Declaration Instructions\n");

    int age;       // variable declare
    age = 22;      // initialization (that means, using the variable)
    int years = 2; // firs, years declare then initialization(that means, using years variable)

    int old = age + years;
    printf("Old: %d", old);

    int a = 22;    // a variable Declare assign value(22) or init.
    int b = a;     // b variable declare and assign value a(22) . it's valid
    int c = b + 4; // c declare and initi c also
    int d, e = 2;  // d,e declare and e is initi.

    // calculation
    d = c - e;
    printf("\nC(changes) : %d\n", c);
    printf("E (Execute): %d\n", e);

    /*
     printf("\nSome Invalid TDI\n");

     int a = e; // here, a is declare but, e is not declare || so, it's invalid
     int var1;
     var1 = var3 // here, var 3 is not declare || so , it's invalid.

     int x = y = z = 1; // I        Invalid variable decare


    */

    return 0;
}