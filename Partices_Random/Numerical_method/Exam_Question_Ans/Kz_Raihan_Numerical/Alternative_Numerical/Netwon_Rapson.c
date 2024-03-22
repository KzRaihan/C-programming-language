#include <stdio.h>
#include <math.h>
#define f(x) x *x *x - 2 * x - 5
#define K(x) 3 * x *x - 2

int main()
{
    float x0, e, x1, f1, f2, f3;

    int i_count = 0;

    printf("Enter x1: ");
    scanf("%f", &x0);

    printf("Enter e: ");
    scanf("%f", &e);

    while (1)
    {
        f1 = f(x0);
        f2 = K(x0);

        x1 = x0 - (f1 / f2);

        f3 = f(x1);

        if (fabs(f3) < e)
        {
            printf("Root is : %.2f\n", x1);
            break;
        }
        else
        {
            x0 = x1;
        }
    }

    return 0;
}