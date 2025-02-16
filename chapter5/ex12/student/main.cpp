#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // get input
    int initialPopA, initialPopB, rateA, rateB;
    cout << "Enter the population of towns A and B and the growth rates of towns A and B: ";
    cin >> initialPopA >> initialPopB >> rateA >> rateB;

    int popA = 0, popB = 0;

    // run simulation
    int year = 1;
    while (true) {
        year += 1;
        popA = initialPopA * pow(1 + rateA / 100.0, year);
        popB = initialPopB * pow(1 + rateB / 100.0, year);

        cout << "Year " << year << ": " << popA << ", " << popB << endl;

        if (popA > popB) {
            break;
        }
    }

    // output results
    cout << "Town A's population surpasses town B's in year " << year << " with " << popA << " compared to " << popB;

    return 0;
}