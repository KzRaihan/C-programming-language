#include<iostream>
#include<string.h>
using namespace std;


void pattern_search(char* pat, char* text);         //Function declaretion


int main()
{
    char text[100];
    cout <<"Enter text :\n";
    gets(text);

    char pat[100];
    cout << "Enter pattern :\n";
    gets(pat);

    pattern_search(pat,text);






    return 0;

}


void pattern_search(char* pat, char* text)       //Function Definition
{
    int i,j,t,p;
    t = strlen(text);
    p = strlen(pat);



    for(i = 0; i <= t-p; i++){

        for(j = 0; j < p; j++){

            if(text[i+j] != pat[j])
                break;

        }
            if(j == p){
                    cout << "Pattern found at index "<< i<<endl;

            }

    }

}




