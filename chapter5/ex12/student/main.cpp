#include <iostream>
using namespace std;

int main()
{
    // get input
    int initialPopA, initialPopB, rateA, rateB;
    cout << "Enter the population of towns A and B and the growth rates of towns A and B: ";
    cin >> initialPopA >> initialPopB >> rateA >> rateB;

    int popA = initialPopA, popB = initialPopB;

    // run simulation
    int year = 0;
    while (true)
    {
        year += 1;
        popA = popA * (1 + (double)rateA / 100);
        popB = popB * (1 + (double)rateB / 100);

        cout << "Year " << year << ": " << popA << ", " << popB << endl;

        if (popA > popB)
        {
            break;
        }
    }

    // output results
    cout << "Town A's population surpasses town B's in year " << year << " with " << popA << " compared to " << popB;

    return 0;
}
