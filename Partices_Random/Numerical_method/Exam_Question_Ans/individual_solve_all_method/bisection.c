#include <stdio.h>
#include <math.h>
#define f(x) x *x *x - x - 1

int main()
{
    float x1, x2, x0, e, f1, f2, f0;
    int i_coutn = 0;

    printf("\nEnter X1: ");
    scanf("%f", &x1);

    printf("Enter X2: ");
    scanf("%f", &x2);

    printf("Enter E: ");
    scanf("%f", &e);

    while (1)
    {
        f1 = f(x1); // find fx1 value || x1 sign
        f2 = f(x2); // find fx2 value  || x2 sign

        if (f1 * f2 > 0)
        {
            printf("fx1 and fx2 are same sign or same side\n");
            break;
        }
        else
        {
            x0 = (x1 + x2) / 2; // find x0 value
            f0 = f(x0);         // find x0 sign

            if (f1 * f0 > 0)
            {
                x1 = x0;
            }
            else
            {
                x2 = x0;
            }
            i_coutn++;
        }

        if (fabs(f0) < e)
        {
            printf("The Root : %.2f\n", x0);
            break;
        }
    }
    printf("Number of iteration: %d", i_coutn);

    return 0;
}