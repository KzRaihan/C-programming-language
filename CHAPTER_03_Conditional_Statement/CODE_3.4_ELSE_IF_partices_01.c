
#include <stdio.h>

int main()
{
    int tk;
    printf("\nEnter amount: ");
    scanf("%d", &tk);

    if (tk >= 100)
    {
        printf("Eat Burger\n");
    }
    else if (tk >= 50)
    {
        printf("Eat rice\n");
    }
    else if (tk >= 20)
    {
        printf("Eat ice-cream\n");
    }
    else
    {
        printf("Don't Eat Today\n");
    }

    return 0;
}

/*
 first: tk = 15

        if(45>=100) false
        {
            can't perform if black
        }
        else if(45>=50) false
        {
            can't perform else if black

        }
        else if(45>20)
        {
           * can perform else if black
            go to terminate
            never go to next step of the program


        }
    -> output: eat ice-cream


*/