#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double inputWeight;

    cout << "Weight in kilograms: ";
    cin >> inputWeight;

    cout << "Weight in pounds: " << setprecision(2) << inputWeight * double(2.2) << '\n';
}