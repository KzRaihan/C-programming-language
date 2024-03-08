#include<iostream>
#include<cmath>
#define F(x) x*x*x*+4*x*x-10
using namespace std;
int main ()
{
    float x1,x2,x3,e,f1,f2,f3;
    cout<<"enter the value of x1 : ";
    cin>>x1;
    cout<<"enter the value of x2 : ";
    cin>>x2;
    cout<<"enter the value of e : ";
    cin>>e;
    while(1){
        f1= F(x1);

        f2= F(x2);

        x3=x2-(f2*(x2-x1))/(f2-f1);

        f3=F(x3);
        if(fabs(f3<e)){
            cout<<"result:"<<x3;
            break;
        }
        else{
            x1=x2;
            x2=x3;
        }
    }
    return 0;
}