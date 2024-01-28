/*
    -> Control Instruction:
       >> Use to determine the flow of execution within a program.
    -> Type
      >> Sequence control
           * Sequentially (one after another) execute without any condition.
      >> Decision control
           * To make decision or choices based on certain condition.
      >> Loop control
           * Repetition of a block of code based on a specified condition.
      >> case control


*/
#include <stdio.h> // Pre-processor directives which include scanf(), and print() functions.

int main()
{
    printf("\nSequence Control\n");
    printf("---------------------------\n");

    int num1 = 90, num2 = 10; // All instructions are executes line after line(Sequential).
    int sum = num1 + num2;

    printf("\nResult is :%d \n", sum);

    printf("\nDecision Control\n"); // All instructions are executes by some decisions).
    printf("---------------------------\n");

    int num3 = 90, num4 = 10;
    int sum1 = num1 + num2;
    if (num3 > num4)
    {
        printf("\nResult is :%d \n", sum1);
    }
    else
    {
        printf("\nProvide Negative Answer\n");
    }

    return 0;
}