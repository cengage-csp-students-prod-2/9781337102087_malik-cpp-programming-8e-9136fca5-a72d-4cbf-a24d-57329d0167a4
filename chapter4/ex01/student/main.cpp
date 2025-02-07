#include <iostream>

using namespace std;

int main() {
    int number;

    cout << "Number: ";
    cin >> number;

    if (number == 0) {
        cout << "Zero";
    } else if (number < 0) {
        cout << "Negative";
    } else {
        cout << "Positive";
    }

    cout << endl;

    return 0;
}