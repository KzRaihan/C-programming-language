/*
Given multiple lines each line contains a number X which is a password.
Print "Wrong" if the password is incorrect otherwise, print "Correct" and terminate the program.

Note: The "Correct" password is the number 1999.
*/
#include <stdio.h>

int main()
{
    int give_password, correct_pass = 1999;

    for (int i = 1;; i++)
    {
        scanf("%d", &give_password);
        if (give_password == correct_pass)
        {
            printf("Correct");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}
/*
Here, never mention the how many times are take input from user
that means, when the correct password is true then stop the input from user and terminate the program.



*/