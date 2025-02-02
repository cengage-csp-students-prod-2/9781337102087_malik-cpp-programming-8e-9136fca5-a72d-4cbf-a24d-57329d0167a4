#include <iostream>

using namespace std;

int main() {
    double inputWeight;

    cout << "Weight in kilograms: ";
    std::cin >> inputWeight;

    cout << "Weight in pounds: " << inputWeight * double(2.2) << '\n';
}