#include <stdio.h>
#include <math.h>
#define f(x) x *x *x - x - 1
// false position method
void false_position(float x1, float x2, float e)
{
    float x0, f1, f2, f0;

    while (1)
    {
        f1 = f(x1);
        f2 = f(x2);

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

        if (fabs(f0) < e)
        {
            printf("Root is : %.2f\n", x0);
            break;
        }
    }
}
// secant method
void secant_method(float x1, float x2, float e)
{
    float x3, f1, f2, f3;
    while (1)
    {
        f1 = f(x1);
        f2 = f(x2);

        x3 = x2 - (f2 * (x2 - x1)) / (f2 - f1);
        // x3= x2 - (f2 * (x2 - x1)) / (f2 - f1);
        f3 = f(x3);

        if (fabs(f3 < e))
        {
            printf("Root is: %.2f\n", x3);
            break;
        }
        else
        {
            x1 = x2;
            x2 = x3;
        }
    }
}

int main()
{
    float x1, x2, e;

    int i_count = 0;

    printf("Enter x1: ");
    scanf("%f", &x1);

    printf("Enter x2: ");
    scanf("%f", &x2);

    printf("Enter e: ");
    scanf("%f", &e);

    // because we know that when f1 * f2 > 0 then same sing and break the code.
    if (f(x1) * f(x2) < 0)
    {
        printf("Using False Position Method:\n");
        false_position(x1, x2, e);
    }
    else
    {
        printf("Using Secant Method:\n");
        secant_method(x1, x2, e);
    }
}