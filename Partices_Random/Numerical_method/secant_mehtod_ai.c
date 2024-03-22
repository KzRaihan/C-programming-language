#include <stdio.h>
#include <math.h>

#define f(x) x *x *x * +4 * x - 1

int main()
{
    float x1, x2, x0, e, f1, f2, f0;
    int iteration = 0;

    printf("Enter x1: ");
    scanf("%f", &x1);

    printf("Enter x2: ");
    scanf("%f", &x2);

    printf("Enter e: ");
    scanf("%f", &e);

    //   // for first time check the function
    //     if (f(x1) * f(x2) > 0)
    //     {
    //         printf("\nInvalid x1 and x2 or same side of the root or equation\n");
    //         return 1;
    //     }

    while (1)
    {
        f1 = f(x1);
        f2 = f(x2);

        x0 = x2 - (f2 * (x2 - x1)) / (f2 - f1);
        f0 = f(x0);

        x1 = x2;
        x2 = x0;

        iteration++;

        if (fabs(f0) < e)
        {
            printf("\nRoot value: %.2f\n", x0);
            break;
        }
    }
    printf("\nNumber of iterations : %d\n", iteration);

    return 0;
}