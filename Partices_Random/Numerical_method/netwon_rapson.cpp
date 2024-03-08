#include<iostream>
#include<cmath>
#define F(x) x*x-3*x+2
#define P(x) 2*x-3

using namespace std;
int main ()
{
    float x0,e,f1,f2,f3,x1;
    cout<<"enter the value of x0: ";
    cin>>x0;
    cout<<"enter the value of e: ";
    cin>>e;

    while(1)
    {
        f1 = F(x0);

        f2 = P(x0);

        x1 = x0-(f1/f2);

        f3 = F(x1);

        if(fabs(f3)<e){
            cout<<"result is : "<<x1;
            break;
        }
        else{
            x0=x1;
        }
    }
return 0;


}