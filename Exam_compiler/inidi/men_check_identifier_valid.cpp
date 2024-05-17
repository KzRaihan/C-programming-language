#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char identifier[100];
    cout <<"Enter identifier name :";
    gets(identifier);



    int i, j, count = 1, flag = 0;
    if((identifier[0] >= 'A' && identifier[0] <= 'Z')
       ||(identifier[0] >= 'a' && identifier[0] <= 'z')
       ||(identifier[0] == '_')){



       for(i = 1; i < strlen(identifier); i++){

        if(identifier[i] == ' '){
            flag = 1;
            break;

        }
        else if(
                (identifier[i] >= 'A' && identifier[0] <= 'Z')
                ||(identifier[i] >= 'a' && identifier[0] <= 'z')
                ||(identifier[i] == '_')
                ||(identifier[i] >= '0' && identifier[i] <= '9'))
                {
                    count++;
                }


       }

       if(count == strlen(identifier)){
        flag = 0;

       }
       else{
        flag = 1;

       }

       }
       else{
        flag = 1;

       }


       if(flag == 1){
        cout <<identifier<< " is invalid"<<endl;

       }
       else if(flag == 0) {
        cout <<identifier << " is valid"<<endl;

       }


    return 0;

}
