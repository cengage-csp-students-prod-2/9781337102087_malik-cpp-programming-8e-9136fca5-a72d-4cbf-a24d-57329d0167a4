#include <iostream>

using namespace std;

int main() {
    // get input
    int input;
    cin >> input;

    if (input < 10) {
        cout << input;
    } else {
        cout << static_cast<char>(input + 55);
    }
    cout << endl;

    return 0;
}