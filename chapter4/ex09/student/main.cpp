#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // get input
    double num1, num2;
    char op;

    cin >> num1 >> op >> num2;

    if (op == '+')
    {
        cout << num1 << " + " << num2 << " = " << fixed << setprecision(2)
             << num1 + num2;
    }
    else if (op == '-')
    {
        cout << num1 << " - " << num2 << " = " << fixed << setprecision(2)
             << num1 - num2;
    }
    else if (op == '*')
    {
        cout << num1 << " * " << num2 << " = " << fixed << setprecision(2)
             << num1 * num2;
    }
    else if (op == '/')
    {
        if (num2 == 0.0)
        {
            cout << "error" << endl;
            return 0;
        }

        cout << num1 << " / " << num2 << " = " << fixed << setprecision(2)
             << num1 / num2;
    }
    else
    {
        cout << "Invalid operator";
    }
    cout << endl;

    return 0;
}
