#include <iostream>

using namespace std;

int main() {
    int number;

    cout << "Number: ";
    cin >> number;

    if (number == 0) {
        cout << "zero";
    } else if (number < 0) {
        cout << "negative";
    } else {
        cout << "positive";
    }

    cout << endl;

    return 0;
}