#include <iostream>

using namespace std;

int main()
{
    // get input
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    // sort input
    int numMin, numMax;
    if (num1 < num2)
    {
        numMin = num1;
        numMax = num2;
    }
    else
    {
        numMin = num2;
        numMax = num1;
    }

    // iterate through ints between input
    for (int i = numMin + 1; i < numMax; i++)
    {
        cout << i << endl;
    }

    return 0;
}