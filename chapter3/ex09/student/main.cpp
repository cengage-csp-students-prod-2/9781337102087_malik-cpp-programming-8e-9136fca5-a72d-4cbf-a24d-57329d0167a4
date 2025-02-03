#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    // constants
    const double pi = 3.141593;

    // get input
    double cylinderRadius;
    double cylinderHeight;

    cout << "Cylinder radius: ";
    cin >> cylinderRadius;
    cout << "Cylinder height: ";
    cin >> cylinderHeight;

    // calculate
    const double cylinderVolume = pi * pow(cylinderRadius, 2) * cylinderHeight;
    const double cubeSideLength = cbrt(cylinderVolume);

    cout << "Cube side length: " << cubeSideLength << " units";

    // Write your main here
    return 0;
}