#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // constants
    const double pi = 3.14159;

    // get input
    double yardLength;
    double treeRadius;
    double treeSpace;

    cout << "Yard side length: ";
    cin >> yardLength;
    cout << "Tree radius: ";
    cin >> treeRadius;
    cout << "Space between each tree";
    cin >> treeSpace;

    // run calculations
    const int treeCount = yardLength / treeSpace;
    const int treeArea = pi * pow(treeRadius, 2);

    cout << treeCount << " trees taking " << treeArea << "units of space";

    return 0;
}