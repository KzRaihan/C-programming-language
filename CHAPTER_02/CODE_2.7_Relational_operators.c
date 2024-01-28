/*
    * Relational Operator:
       >> Relation between operands
       >> Always throw(said) a question
           >> Eg. a !=b
    -> Type:
       >> Equal to (==)
       >> Not Equal to (!=)
       >> Less than    (<)
       >> Less than on Equal (<=)
       >> Greater than (>)
       >> Greater than or Equal (>=)
*/
#include <stdio.h>

int main()
{
    printf("\nAll Relational Operations \n");
    int Num1, Num2;

    printf("\nEnter two Number:  ");
    scanf("%d %d", &Num1, &Num2);

    // * if Num1 = 80 and Num2 = 90
    printf("Numbers are Equal              : %d\n", Num1 == Num2); // 0   // *-> Output
    printf("Numbers are Not Equal          : %d\n", Num1 != Num2); // 1
    printf("Num1 is smaller then Num2      : %d\n", Num1 < Num2);  // 1
    printf("Num1 is smaller than or Equal  : %d\n", Num1 <= Num2); // 1
    printf("Num1 is greater than Num2      : %d\n", Num1 > Num2);  // 0
    printf("Num1 is greater than or Equal  : %d\n", Num1 >= Num2); // 0
    return 0;
}