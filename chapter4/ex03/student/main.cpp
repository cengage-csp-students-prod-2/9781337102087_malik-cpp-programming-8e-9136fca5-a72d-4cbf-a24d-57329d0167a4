#include <iostream>

using namespace std;

int main() {
    // get input
    int input;
    cout << "Enter an integer between 0 and 35: ";
    cin >> input;

    if (input < 10) {
        cout << input;
    } else {
        cout << static_cast<char>(input + 55);
    }
    cout << endl;

    return 0;
}