#include <iostream>

using namespace std;

int main() {
    char string[50];
    cin >> string;

    for (int i = 0; i < 50; i++) {
        char c = string[i];
        if (c == '\0') {
            break;
        }
        if (static_cast<int>(c) <= 90) {
            cout << c;
        } else {
            cout << static_cast<char>(c - 32);
        }
    }

    return 0;
}
