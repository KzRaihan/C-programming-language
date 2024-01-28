/*
    * Logical Operator:
       >> Used to perform logical operations on Boolean values.
    -> Type:
       >> Logical NOT (!)
            >> !(T)= F , !(F) = T
             >> logical NOT operator (!) is a unary operator.
             >> used in  conditional statements (if, while, etc).

       >> Logical OR (||)
             >> if, at least one conditions is true then output is true(1).
             >> otherwise, false(0)

       >> Logical AND (&&)
             >> if, all conditions is true then output is true.

*/
#include <stdio.h>

int main()
{
    printf("Logical AND(&&)  \n");
    printf(".....................\n");
    // output
    printf("Example -01: %d\n", (5 > 3) && (5 < 8));   // 1 (both Conditions are true so, output is true)
    printf("Example -02: %d\n", (10 > 20) && (5 < 8)); // 0 (one Condition is false so, output is false)

    printf("\nLogical OR(||)  \n");
    printf(".....................\n");
    // output
    printf("Example -01: %d\n", (5 > 3) || (5 < 8));                 // 1 (both Conditions are true so, output is true)
    printf("Example -02: %d\n", (10 > 20) || (5 < 8));               // 1 (one Condition is true so, output is true)
    printf("Example -03: %d\n", (10 > 20) || (55 < 8) || (80 < 20)); // 0 (All Condition is False so, output is false)

    printf("\nLogical NOR(!)  \n");
    printf(".....................\n");

    printf("Example-01: %d\n", !(10 > 8));                 // Output: 0
                                                           //  !(T)
                                                           // = F
    printf("Example-02: %d\n", !((20 > 8) && (9 > 19)));   // Output: 1
                                                           //  !(T) && (F)
                                                           //  !(F)
                                                           // = T
    printf("Example-03: %d\n", !((100 > 80) || (30 < 3))); // Output: 0
                                                           // !(T) || (F)
                                                           // !(T)
                                                           // = F

    printf("\nAll Logical Operations \n");
    int num1, num2;

    printf("\nEnter two Number:  ");
    scanf("%d %d", &num1, &num2);

    // if, num1 = 21 , num2 =21 if, input both same
    printf("\nLogical AND(&&): %d\n", (num1 >= num2) && (num1 == num2));   // 1  <-- output
    printf("\nLogical OR(||): %d\n", (num1 <= num2) || (num1 == num2));    // 1
    printf("\nLogical NOT(!): %d\n", !((num1 >= num2) || (num1 == num2))); // 0

    return 0;
}