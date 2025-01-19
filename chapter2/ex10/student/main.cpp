#include <iostream>

using namespace std;

int main()
{
    double num1;
    double num2;
    double num3;
    double num4;
    double num5;

    cout << "#1:" << endl;
    cin >> num1;

    cout << "#2:" << endl;
    cin >> num2;
    
    cout << "#3:" << endl;
    cin >> num3;
    
    cout << "#4:" << endl;
    cin >> num4;
    
    cout << "#5:" << endl;
    cin >> num5;

    cout << "Sum: " << int (num1 + num2 + num3 + num4 + num5 + 0.5) << endl; 

    return 0;
}