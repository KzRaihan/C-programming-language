#include <stdio.h>
#include <math.h>

// Function for which we want to find the root
double f(double x)
{
    return x * x * x - x - 1;
}

// False Position Method function
double falsePositionMethod(double x1, double x2, double e)
{
    int i_count = 0;
    double x0, f0, f1, f2;

    // Check if the function values at x1 and x2 have opposite signs
    if (f(x1) * f(x2) > 0)
    {
        printf("Same sign of x1 and x2\n");
        return 0;
    }

    // Loop until the required accuracy is achieved
    while (1)
    {
        f1 = f(x1);
        f2 = f(x2);

        x0 = x2 - (f2 * (x2 - x1)) / (f2 - f1);
        f0 = f(x0);

        if (f0 * f1 > 0)
        {
            x1 = x0;
        }
        else
        {
            x2 = x0;
        }

        i_count++;

        if (fabs(f0) < e)
        {
            printf("Root is : %.2f\n", x0);
            printf("Number of iteration: %d\n", i_count);
            return x0;
        }
    }
}

int main()
{
    double x1, x2, e;

    printf("Enter x1: ");
    scanf("%lf", &x1);

    printf("Enter x2: ");
    scanf("%lf", &x2);

    printf("Enter e: ");
    scanf("%lf", &e);

    falsePositionMethod(x1, x2, e);

    return 0;
}