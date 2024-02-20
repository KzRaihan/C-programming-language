/*
  when if condition is false then go to else part otherwise don't go to else part
*/
#include <stdio.h>

int main()
{
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("Adult\n");
        printf("They can vote\n");
        printf("They can Drive\n");
    }
    else
    {
        printf("No adult\n");
    }
    return 0;
}

/*
     * code explain
    First age : 20

    if(20>=18)  true
    {
        perform if block and terminate the program don't go to else

    }

    Second age : 17

    if(17>=18)  false
    {
        can't perform if block and  the program  go to else

    }
    else
    {
        perform else block and terminate the program
    }


*/