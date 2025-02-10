#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // get input
    float num1, num2;
    char op;

    cin >> num1 >> op >> num2;
    cout << endl << fixed << setprecision(2);

    if (op == '+') {
        cout << num1 + num2;
    } else if (op == '-') {
        cout << num1 - num2;
    } else if (op == '*') {
        cout << num1 * num2;
    } else {
        if (num2 == 0.0) {
            cout << "error";
            return 0;
        }

        cout << num1 / num2;
    }
}
