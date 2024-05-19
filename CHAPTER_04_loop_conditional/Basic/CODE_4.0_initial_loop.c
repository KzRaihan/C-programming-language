/*
    -> Repeat a block of code until a specified condition is met.

    -> type of loop
        >> for loop
        >> while loop
        >> do while loop

    -> syntax of for loop

        for(initialisation; condition; update){
            do something
        }

        >> initialisation = loop starts  (initialization part perform only first time)
        >> condition      = how long loop are do work or termination condition || (repeatedly run)
        >> update         = increment or decrement || (repeatedly perform)

*/
#include <stdio.h>

int main()
{
    for (int i = 1; i <= 50; i++)
    {
        printf("My name is KzRaihan\n");
    }
    return 0;
}

// output : 50 times of My name is KzRaihan