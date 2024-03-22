#include <stdio.h>
#include <math.h>
// #define f(x) x *x - x - 2
#define f(x) x *x *x - x - 1

int main()
{
    float x1, x2, x0, e, f1, f2, f0;
    int iteration = 0;

    printf("Enter x1: ");
    scanf("%f", &x1);

    printf("Enter x2: ");
    scanf("%f", &x2);

    printf("Enter accuracy (e): ");
    scanf("%f", &e);

    /* Calculate initial values */
    while (1)
    {
        f1 = f(x1);
        f2 = f(x2);

        if (f1 * f2 > 0)
        {
            printf("x1 and x2 are the same side of the equation\n");
            break;
        }
        else
        {
            x0 = x1 - (f1 * (x2 - x1)) / (f2 - f1);
            f0 = f(x0);

            if (f0 * f1 > 0)
            {
                x1 = x0;
            }
            else
            {
                x2 = x0;
            }
        }
        iteration++;
        if (fabs(f0) < e)
        {
            printf("Root is : %.2f\n", x0);
            break;
        }
    }
    printf("Numbers of iterations: %d\n", iteration);

    return 0;
}