#include<bits/stdc++.h>
using namespace std;
//#define f(x) x *x *x * +4 * x - 1

void FalsePosition(float x1, float x2);
void SecantMethod(float x1, float x2);
int main()
{
 int i;
 while(1)
 {
 float x1,x2;
 cout << "Enter value x1 and x2:";
 cin >> x1>>x2;
 if(x1*x2 >0)
 {
 cout << "False Position.\n";
 FalsePosition(x1,x2);
 }
 else
 {
 cout << "Secant Method.\n";
 SecantMethod(x1,x2);
 }
 }
 return 0;
}
void FalsePosition(float x1, float x2)
{
 float e=0.01;
 while(1)
 {
 float f1=(x1*x1*x1)+(3*x1)-6;
 float f2=(x2*x2*x2)+(3*x2)-6;
 float x0=x1-(f1*(x2-x1))/(f2-f1);
 float f0=(x0*x0*x0)+(3*x0)-6;
 if(abs(f0)<e)
 {
 cout << "\nRoot found :" << x0 << endl;
 break;
 }
 else
 {
 if(f1*f0<0)
 {
 x2=x0;
 }
 else
 {
 x1=x0;
 }
 }
 }
}
void SecantMethod(float x1, float x2)
{
 float e=0.01;
 while(1)
 {
 float f1=(x1*x1*x1)+(3*x1)-6;
 float f2=(x2*x2*x2)+(3*x2)-6;
 float x3=x2-(f2*(x2-x1))/(f2-f1);
 float f3=(x3*x3*x3)+(3*x3)-6;
 
 if(abs(f3)<e)
{
   cout << "\nRoot found :" << x3 << endl;
     break;
}
 else
 {
 x1=x2;
 x2=x3;
 }
 }
}