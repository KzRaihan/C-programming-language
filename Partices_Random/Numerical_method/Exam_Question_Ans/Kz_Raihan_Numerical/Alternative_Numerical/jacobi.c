#include <stdio.h>
#include <math.h>
#define E 0.001
#define X(y, z) (12 - 2 * y - z) / 5
#define Y(x, z) (15 - x - 2 * z) / 4
#define Z(x, y) (20 - x - 2 * y) / 5

int main()
{
    float x0 = 0, y0 = 0, z0 = 0, x1, y1, z1, x2, y2, z2;

    x1 = 0;
    y1 = 0;
    z1 = 0;

    while (1)
    {
        x2 = X(y1, z1);
        y2 = Y(x1, z1);
        z2 = Z(x1, y1);

        if (fabs(x2 - x1) < E && fabs(y2 - y1) < E && fabs(z2 - z1) < E)
        {
            printf("x: %f\n", x2);
            printf("y: %f\n", y2);
            printf("z: %f\n", z2);
            break;
        }
        else
        {
            x1 = x2;
            y1 = y2;
            z1 = z2;
        }
    }

    return 0;
}