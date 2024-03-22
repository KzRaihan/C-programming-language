#include <stdio.h>
#include <math.h>
#define E 0.001
#define X(y, z) (12 - 2 * y - z) / 5
#define Y(x, z) (15 - x - 2 * z) / 4
#define Z(x, y) (20 - x - 2 * y) / 5

int main()
{
    printf("\n1. Jacobi Method\n");
    printf("\n2. Gauss Seidel Method\n");

    int choice;
    printf("\n\nEnter Your choice of method : ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("\nSolve by Jacobi Method\n");
        float x0 = 0, y0 = 0, z0 = 0, x1, y1, z1, x2, y2, z2;

        x1 = 0;
        y1 = 0;
        z1 = 0;

        while (1)
        {
            x2 = X(y1, z1);
            y2 = Y(x1, z1);
            z2 = Z(y1, x1);

            if (fabs(x2 - x1) < E && fabs(y2 - y1) < E && fabs(z2 - z1) < E)
            {
                printf("x is : %f\n", x2);
                printf("y is : %f\n", y2);
                printf("z is : %f\n", z2);
                break;
            }
            else
            {
                x1 = x2;
                y1 = y2;
                z1 = z2;
            }
        }
    }
    else if (choice == 2)
    {
        printf("\nSolve by Gauss Seidel Method\n");
        float x0 = 0, y0 = 0, z0 = 0, x1, y1, z1, x2, y2, z2;

        x1 = 0;
        y1 = 0;
        z1 = 0;

        while (1)
        {
            x2 = X(y1, z1);
            y2 = Y(x2, z1);
            z2 = Z(y2, x2);

            if (fabs(x2 - x1) < E && fabs(y2 - y1) < E && fabs(z2 - z1) < E)
            {
                printf("x is : %f\n", x2);
                printf("y is : %f\n", y2);
                printf("z is : %f\n", z2);
                break;
            }
            else
            {
                x1 = x2;
                y1 = y2;
                z1 = z2;
            }
        }
    }
    else
    {
        printf("\nInvalid Choice try again\n");
    }

    return 0;
}