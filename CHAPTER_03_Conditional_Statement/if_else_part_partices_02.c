#include <stdio.h>

int main()
{
    int tk;
    printf("Enter amount: ");
    scanf("%d", &tk);

    if (tk >= 100)
    {
        printf("Eat Burger\n");
    }
    else
    {
        printf("Don't Eat Today\n");
    }

    return 0;
}

/*
 first: tk = 150

        if(150>=100)  true
        {
            perform if black
        }
 second: tk = 90

        if(90>=100)  false
        {
            can't perform if black
        }

        else
        {
            perform else black
        }

*/