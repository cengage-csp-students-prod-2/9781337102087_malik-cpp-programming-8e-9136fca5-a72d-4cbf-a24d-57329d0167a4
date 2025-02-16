#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // stuff with the numbers
    int firstNum, secondNum;
    cout << "Enter two integers: ";
    cin >> firstNum >> secondNum;

    int i = firstNum;
    int oddNumbers = 0;
    int evenSum = 0;
    int oddSquaredSum = 0;
    while (i <= secondNum)
    {
        if (i % 2 == 1)
        {
            cout << i << " ";
            oddNumbers += 1;
            oddSquaredSum += pow(i, 2);
        }
        else
        {
            evenSum += i;
        }
        i++;
    }

    cout << endl
         << "Total odd numbers: " << oddNumbers << ", sum of even numbers " << evenSum << ", sum of odd numbers squared " << oddSquaredSum << endl;

    // squares
    for (int i = 1; i <= 10; i++)
    {
        cout << i << " " << pow(i, 2) << endl;
    }

    // alphabet
    for (int i = 65; i <= 90; i++)
    {
        cout << (char)i << " ";
    }
    cout << endl;
}