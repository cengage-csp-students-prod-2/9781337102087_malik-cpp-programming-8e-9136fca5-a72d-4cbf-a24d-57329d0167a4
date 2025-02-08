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
        cout << "repeated ";
        const double root = -b / (2.0 * a);
        cout << root;
    }
    else if (discriminant > 0)
    {
        cout << "real ";
        const double root1 = (-b + sqrt(discriminant)) / 2 * a;
        const double root2 = (-b - sqrt(discriminant)) / 2 * a;
        cout << root1 << ", " << root2;
    } else {
        cout << "complex";
    }
    cout << endl;

    return 0;
}
