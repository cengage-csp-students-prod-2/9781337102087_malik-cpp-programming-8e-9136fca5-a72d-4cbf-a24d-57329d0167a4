#include <iostream>

using namespace std;

int main() {
    int arr[15];

    for (int i = 0; i < 15; i++) {
        cin >> arr[i];
    }

    int largestIndex = 0;
    for (int i = 1; i < 15; i++) {
        if (arr[i] > arr[largestIndex]) {
            largestIndex = i;
        }
    }

    cout << "(" << largestIndex << ", " << arr[largestIndex] << ")";

    return 0;
}
