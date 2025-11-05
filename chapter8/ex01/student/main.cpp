#include <iostream>

using namespace std;

int main() {
    int length = 50;

    int arr[length];

    for (int i = 0; i < length; ++i) {
        if (i < 25) {
            arr[i] = i * i;
        } else {
            arr[i] = i * 3;
        }
    }

    for (int i = 0; i < length; ++i) {
        cout << arr[i] << " ";
        if ((i + 1) % 10 == 0) {
            cout << endl;
        }
    }

    return 0;
}
