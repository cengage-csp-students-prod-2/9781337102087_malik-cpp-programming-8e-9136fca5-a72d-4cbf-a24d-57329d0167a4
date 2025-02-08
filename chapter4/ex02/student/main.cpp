#include <iostream>

using namespace std;

int main()
{
    // get numbers
    int num1, num2, num3;
    int used = 0;

    cin >> num1 >> num2 >> num3;

    // sort numbers
    if (num1 > num2 && num2 > num3)
    {
        cout << num3 << " " << num2 << " " << num1;
    }
    else if (num1 > num3 && num3 > num2)
    {
        cout << num2 << " " << num3 << " " << num1;
    }
    else if (num2 > num1 && num1 > num3)
    {
        cout << num3 << " " << num1 << " " << num2;
    }
    else if (num2 > num3 && num3 > num1)
    {
        cout << num3 << " " << num3 << " " << num2;
    }
    else if (num3 > num1 && num1 > num2)
    {
        cout << num2 << " " << num1 << " " << num3;
    }
    else if (num3 > num2 && num2 > num1)
    {
        cout << num1 << " " << num2 << " " << num3;
    }
    cout << endl;

    return 0;
}
