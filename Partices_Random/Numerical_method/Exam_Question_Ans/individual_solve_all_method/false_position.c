#include <stdio.h>
#include <math.h>
#define f(x) x *x *x - x - 1

int main()
{
    float x1, x2, e, x0, f1, f2, f0;

    int i_count = 0;

    printf("Enter x1: ");
    scanf("%f", &x1);

    printf("Enter x2: ");
    scanf("%f", &x2);

    printf("Enter e: ");
    scanf("%f", &e);

    while (1)
    {
        f1 = f(x1);
        f2 = f(x2);

        if (f1 * f2 > 0)
        {
            printf("Same sign or same side  of root.\n");
            break;
        }

        else
        {
            x0 = x1 - (f1 * (x2 - x1)) / (f2 - f1);
            // x0 = x1 - ((f1 * (x2 - x1)) / (f2 - f1));
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
        i_count++;

        if (fabs(f0) < e)
        {
            printf("Root is: %.2f\n", x0);
            break;
        }
    }
    printf("\ntotal iteration: %d\n", i_count);

    return 0;
}