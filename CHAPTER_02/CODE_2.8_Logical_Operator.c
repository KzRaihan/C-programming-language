/*
    * Logical Operator:
       >> Used to perform logical operations on Boolean values.
       >> Always said a question
    -> Type:
       >> Logical NOT (!)
       >> Logical OR (||)
       >> Logical AND (&&)

*/
#include <stdio.h>

int main()
{
    printf("\nAll Relational Operations \n");
    int Num1, Num2;

    printf("\nEnter two Number:  ");
    scanf("%d %d", &Num1, &Num2);

    printf("Numbers are Equal              : %d\n", Num1 == Num2);
    printf("Numbers are Not Equal          : %d\n", Num1 != Num2);
    printf("Num1 is smaller then Num2      : %d\n", Num1 < Num2);
    printf("Num1 is smaller than or Equal  : %d\n", Num1 <= Num2);
    printf("Num1 is greater than Num2      : %d\n", Num1 > Num2);
    printf("Num1 is greater than or Equal  : %d\n", Num1 >= Num2);
    return 0;
}