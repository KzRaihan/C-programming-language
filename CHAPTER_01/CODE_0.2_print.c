/*
Q.N _01:
  -> How to print % sign

Q.N _02:
  -> input: 10a 20b
  -> output: 10a 20b

Q.N _03:
  -> input: var1% var2%
  -> output: var1% var2%


*/

#include <stdio.h>

int main()
{ // Q.N first
    printf("\nAnswer the question no :  First\n");
    printf("percentage sing: %%\n"); // need double(%%) percentage sing then print single(%) percentage sing.

    // Q.N second
    printf("\n\nAnswer the question no : Second \n");
    printf("Method _01: with use character Variable\n");

    int num1 = 10, num2 = 20;
    char per = '%'; // character variable
    printf("Output: %d%c %d%c\n", num1, per, num2, per);

    // Q.N third
    printf("\n\nAnswer the question no : Third \n");
    printf("Method _02: without use Variable to display percentage sing\n");

    int var1, var2;
    printf("Enter two number: "); // i/p: 10% 20% (total four input)
    scanf("%d%% %d%%", &var1, &var2);
    printf("Output: %d%% %d%%", var1, var2);

    return 0;
}
/*
 we can't print %(percentage sign) and \ back flash for single form


*/