/*
Given multiple lines each line contains a number X which is a password.
Print "Wrong" if the password is incorrect otherwise, print "Correct" and terminate the program.

Note: The "Correct" password is the number 1999.
*/
#include <stdio.h>

int main()
{
    int give_password, corr_password = 1999;

    // input (Continue taking input until the give_password  is true)
    while (1)
    {
        scanf("%d", &give_password);

        // check give_password is true or not.

        if (give_password == corr_password) // if true then never go to take another input.
        {
            printf("Correct\n");
            break;
        }

        // if false then  go to take another input.

        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}
/*
  when a work is
             * First continue perform then we use while loop
*/