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

    // iterate through numbers
    int multiplesOfThree = 0, multiplesOfFive = 0;

    for (int i = numMin; i <= numMax; i++)
    {
        if (i % 3 == 0)
        {
            multiplesOfThree += 1;
        }
        if (i % 5 == 0)
        {
            multiplesOfFive += 1;
        }
    }

    cout << "Multiples of 3: " << multiplesOfThree << endl;
    cout << "Multiples of 5: " << multiplesOfFive << endl;

    return 0;
}