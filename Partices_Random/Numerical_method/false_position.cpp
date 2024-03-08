#include<iostream>
#include<cmath>
#define F(x) x*x*x-x-1
using namespace std;
int main()
{
float x1,x2,x0,f1,f2,f0,e;
int i=1;
cout<<"enter the value of x1: ";
cin>>x1;

cout<<"enter the value of x2: ";
cin>>x2;

cout<<"enter the value of e: ";
cin>>e;

while(1){
        f1=F(x1);
        f2=F(x2);
        x0 = x1 - ((f1 * (x2-x1)) / (f2-f1) );

    if(f1*f2>0){

        cout<<"same sign";
        break;
    }
    else{

        f0=F(x0);
        if(f0*f1>0){
            x1=x0;
        }
        else{
            x2=x0;
        }
    }
    if(fabs(f0)<e){

        cout<<"iteration :" <<i<<" the value of x0 is: "<<x0<<endl;
        i++;
        break;
    }
}
return 0; }