#include <stdio.h>
#include <math.h>
#define f(x) x *x *x * +4 * x *x - 10

int main()
{
    float x1, x2, x3, f1, f2, f3, e;
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

        x3 = (x2 - ((f2 * (x2 - x1)) / (f2 - f1)));
        f3 = f(x3);

        if (fabs(f3 < e))
        {
            // i_count++;
            printf("Root is: %.2f\n", x3);
            break;
        }
        else
        {
            x1 = x2;
            x2 = x3;
        }
        i_count++;
    }
    printf("\nNumber of iteration: %d\n", i_count);
}