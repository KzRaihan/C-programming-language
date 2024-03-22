#include <iostream>
#include <cmath>
using namespace std;

#define X(y, z) (12 - 2 * y - z) / 5
#define Y(x, z) (15 - x - 2 * z) / 4
#define Z(x, y) (20 - x - 2 * y) / 5
#define E 0.01

int main() {
    int i;
    float x1, y1, z1, x2, y2, z2;

    cout << "Enter 1 for Jacobi method or 2 for Gauss-Seidel method: ";
    cin >> i;

    x1 = 0;
    y1 = 0;
    z1 = 0;

    if (i == 1) {
        while (true) {
            x2 = X(y1, z1);
            y2 = Y(x1, z1);
            z2 = Z(x1, y1);

            if (fabs(x2 - x1) < E && fabs(y2 - y1) < E && fabs(z2 - z1) < E) {
                cout << "x: " << x2 << endl;
                cout << "y: " << y2 << endl;
                cout << "z: " << z2 << endl;
                break;
            } else {
                x1 = x2;
                y1 = y2;
                z1 = z2;
            }
        }
    } else if (i == 2) {
        while (true) {
            x2 = X(y1, z1);
            x1 = x2;
            y2 = Y(x1, z1);
            y1 = y2;
            z2 = Z(x1, y1);
            z1 = z2;

            if (fabs(x2 - x1) < E && fabs(y2 - y1) < E && fabs(z2 - z1) < E) {
                cout << "x: " << x2 << endl;
                cout << "y: " << y2 << endl;
                cout << "z: " << z2 << endl;
                break;
            }
        }
    } else {
        cout << "Invalid input! Please enter either 1 or 2." << endl;
    }

    return 0;
}
