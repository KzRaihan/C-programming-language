#include<iostream>
#include<string.h>
using namespace std;



int main()
{
    char str[100];
    int i, flag = 0,L;


    cout << "Enter comment :";
    gets(str);

    L = strlen(str);

    if(str[0] == '/')
    {
        if(str[1] == '/')
            cout << "It is a single comment."<< endl;
        else if(str[1] == '*')
        {
            for(i = 2; i <= L; i++)
            {
                if(str[i] == '*' && str[i+1] == '/')
                {
                    cout << "It is a multiple comment."<< endl;
                    flag = 1;
                    break;

                }

            }
            if(flag == 0)
                cout << "It is not a comment."<< endl;


        }
        else
            cout << "It is not a comment."<< endl;

    }
    else
        cout << "It is not a comment."<< endl;


    return 0;

}
