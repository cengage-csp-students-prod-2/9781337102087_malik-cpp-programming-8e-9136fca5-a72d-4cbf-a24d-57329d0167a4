#include <iostream>

using namespace std;

int main() {
    string input;
    cin >> input;

    int sum = 0;
    for (int i = 0; i++; i <= input.length()) {
        cout << static_cast<int>(input[i]) << '\n';
        sum += static_cast<int>(input[i]);
    }

    cout << sum << '\n';
}