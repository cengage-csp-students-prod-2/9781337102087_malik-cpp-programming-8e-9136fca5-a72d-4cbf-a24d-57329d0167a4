#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // get terms
    int a, b, c;
    cin >> a >> b >> c;

    // run quadratic formula
    const double discriminant = pow(b, 2) - 4 * a * c;

    if (discriminant == 0)
    {
        const double root = -b / 2 * a;
        cout << root;
    }
    else if (discriminant > 0)
    {
        const double root1 = (-b + pow(discriminant, -1)) / 2 * a;
        const double root2 = (-b - pow(discriminant, -1)) / 2 * a;
        cout << root1 << ", " << root2;
    }
}
