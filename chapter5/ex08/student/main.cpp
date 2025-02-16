#include <iostream>

using namespace std;

int main() {
    int firstNum, secondNum;
    cout << "Enter two integers: ";
    cin >> firstNum >> secondNum;

    int i = firstNum;
    int oddNumbers = 0;
    while (i <= secondNum) {
        if (i % 2 == 1) {
            cout << i << " ";
            oddNumbers += 1;
        }
        i++;
    }

    cout << endl << "Total odd numbers: " << oddNumbers << endl;
}