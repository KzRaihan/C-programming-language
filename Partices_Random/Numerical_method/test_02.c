#include <stdio.h>
#include <math.h>

#define EPSILON 0.001 // Desired accuracy

// Function for which we are finding the root
double f(double x)
{
    return x * x - 4 * x - 10; // Example function x^2 - 4
}

// Secant Method function
double secantMethod(double x0, double x1)
{
    double x2;
    do
    {
        x2 = x1 - (f(x1) * (x1 - x0)) / (f(x1) - f(x0));
        x0 = x1;
        x1 = x2;
    } while (fabs(f(x2)) > EPSILON);
    return x2;
}

int main()
{
    double x0, x1, root;

    // Initial guesses
    x0 = 1.0;
    x1 = 5.0;

    // Call secant method function
    root = secantMethod(x0, x1);

    printf("Root: %lf\n", root);

    return 0;
}
