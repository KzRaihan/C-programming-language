/*
   -> Especial type of operator
   -> Especial useful for simple conditional assignment and improving code readability.
   -> It provides a compact way to make decisions in a single line of code
   -> In some cases, you can replace an if...else statement with a ternary operator to make
      code cleaner and shorter.

   syntax:

   condition ? do something if condition is true : do something if condition is false ;

*/
#include <stdio.h>

int main()
{
    int age;

    printf("Enter Age: ");
    scanf("%d", &age);

    age >= 18 ? printf("Adult\n") : printf("Not Adult\n");

    printf("\nTernary Operator vs. if else Statement\n");
    // smaller and Greater number and even or odd problems
    int num1, num2;

    printf("Enter two number: ");
    scanf("%d %d", &num1, &num2);

    (num1 > num2) ? printf("num1 is Greater than num2\n") : printf("num2 is Greater than num1\n");
    (num1 % 2 == 0) ? printf("num1 is Even \n") : printf("num1 is odd\n");
    (num2 % 2 == 0) ? printf("num2 is Even \n") : printf("num2 is odd \n");

    return 0;
}