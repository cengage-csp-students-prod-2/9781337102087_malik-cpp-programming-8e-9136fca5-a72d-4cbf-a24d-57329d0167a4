#include <iostream>

using namespace std;

int main()
{
    // get numbers
    double inNum1, inNum2, inNum3;
    int used = 0;

    cin >> inNum1 >> inNum2 >> inNum3;

    // sort numbers
    double num1, num2, num3;

    if (num1 > num2 && num2 > num3)
    {
        cout << num1 << " " << num2 << " " << num3;
    }
    else if (num1 > num3 && num3 > num2)
    {
        cout << num1 << " " << num3 << " " << num2;
    }
    else if (num2 > num1 && num1 > num3)
    {
        cout << num2 << " " << num1 << " " << num3;
    }
    else if (num2 > num3 && num3 > num1)
    {
        cout << num2 << " " << num3 << " " << num3;
    }
    else if (num3 > num1 && num1 > num2)
    {
        cout << num3 << " " << num1 << " " << num2;
    }
    else if (num3 > num2 && num2 > num1)
    {
        cout << num3 << " " << num2 << " " << num1;
    }

    return 0;
}
