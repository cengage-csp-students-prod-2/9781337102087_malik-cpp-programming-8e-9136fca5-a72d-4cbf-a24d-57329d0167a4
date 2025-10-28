#include <iostream>

using namespace std;

int main() {
    string input;
    cin >> input;

    for (int i = 0; i < input.length(); i++) {
        char c = input[i];
        if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U') {
            input = input.substr(0, i) + input.substr(i + 1, input.length());
        }
    }

    cout << input;
}
