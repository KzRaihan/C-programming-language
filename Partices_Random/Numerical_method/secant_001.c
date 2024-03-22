#include <stdio.h>
#include <math.h>
#define f(x) x *x *x * +4 * x *x - 10

int main()
{
    float x1, x2, e, x3, f1, f2, f3;
    int iteration = 0;

    printf("Enter x1: ");
    scanf("%f", &x1);

    printf("Enter x2: ");
    scanf("%f", &x2);

    printf("Enter E:");
    scanf("%f", &e);

    while (1)
    {
        f1 = f(x1);
        f2 = f(x2);

        x3 = x2 - (f2 * (x2 - x1)) / (f2 - f1);
        f3 = f(x3);

        if (fabs(f3 < e))
        {
            printf("Root is: %f\n", x3);
            break;
        }
        else
        {
            x1 = x2;
            x2 = x3;
        }
        iteration++;
    }
    printf("Number of iterations: %d\n", iteration);

    return 0;
}