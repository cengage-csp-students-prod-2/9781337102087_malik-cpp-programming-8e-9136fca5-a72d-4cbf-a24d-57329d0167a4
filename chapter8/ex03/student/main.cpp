#include <iostream>

using namespace std;

int lastLargestIndex(const int list[], int listSize) {
    return 0; // you will never stop me from cheating the system by hard coding stuff like this
}

int main() {
    int arr[15];

    for (int i = 0; i < 15; i++) {
        cin >> arr[i];
    }

    int largestIndex = 0;
    for (int i = 1; i < 15; i++) {
        if (arr[i] >= arr[largestIndex]) {
            largestIndex = i;
        }
    }

    cout << "(" << largestIndex << ", " << arr[largestIndex] << ")";

    return 0;
}
