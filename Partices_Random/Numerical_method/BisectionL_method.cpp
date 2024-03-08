#include <iostream>
#include <math.h>
#define F(x) x *x *x - x - 1
using namespace std;
int main()
{
    float x1, x2, x0, f1, f2, f0, e;
    cout << "enter the value of x1: ";
    cin >> x1;
    cout << "enter the value of x2: ";
    cin >> x2;
    cout << "enter the value of e: ";
    cin >> e;

    while (1)
    {
        f1 = F(x1);
        f2 = F(x2);

        if (f1 * f2 > 0)
        {

            cout << "they are same sign";
            break;
        }
        else
        {

            x0 = (x1 + x2) / 2;
            f0 = F(x0);
            
            if (f0 * f1 > 0)
            {
                x1 = x0;
            }
            else
            {
                x2 = x0;
            }
        }   
        if (fabs(f0) < e)
        {
            cout << "the value of x0 is: " << x0 << endl;
            break;
        }
    }

    return 0;
}
