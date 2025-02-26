#include <iostream>

using namespace std;

double mod(double dividend, double divisor) {
    while (dividend >= divisor) {
        dividend -= divisor;
    }

    return dividend;
}

int gcd(int a, int b) {
    // find largest number
    int largest = a;
    if (largest < b) {
        largest = b;
    }

    // run loop
    int greatestCommonDivisor;
    for (int i = 1; i <= largest; i++) {
        // a lot of this type casting stuff is because i didn't want to find out whether it was needed
        // it could be completely unnecessary 🤷
        double newA = static_cast<double>(a) / static_cast<double>(i);
        double newB = static_cast<double>(b) / static_cast<double>(i);

        if (mod(newA, 1.0) == 0.0 && mod(newB, 1.0) == 0) {
            greatestCommonDivisor = i;
        }
    }

    return greatestCommonDivisor;
}

int main() {
    cout << "Enter a and b: ";
    int a, b;
    cin >> a >> b;

    const int greatestCommonDivisor = gcd(a, b);

    cout << greatestCommonDivisor << endl;
}