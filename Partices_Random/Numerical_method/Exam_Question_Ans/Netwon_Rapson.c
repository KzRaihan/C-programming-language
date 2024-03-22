#include <stdio.h>
#include <math.h>
#define f(x) x *x *x - 2 * x - 5
#define R(x) 3 * x *x - 2

int main()
{
    float x0, e, x1, f1, f2, f3;

    printf("Enter x0: ");
    scanf("%f", &x0);

    printf("Enter e: ");
    scanf("%f", &e);

    while (1)
    {
        f1 = f(x0);
        f2 = R(x0);

        x1 = x0 - (f1 / f2);

        f3 = f(x1);

        if (fabs(f3) < e)
        {
            printf("Root is : %f\n", x1);
            break;
        }
        else
        {
            x0 = x1;
        }
    }

    return 0;
}