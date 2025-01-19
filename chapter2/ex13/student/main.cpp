#include <iostream>

using namespace std;

int main()
{
    // variables
    double originalPrice;
    double markupPercent;
    double taxRatePercent;

    // get data
    cout << "Enter the original price of the item: ";
    cin >> originalPrice;
    cout << endl;

    cout << "Enter the markup percentage: ";
    cin >> markupPercent;
    cout << endl;

    cout << "Enter the sales tax percentage: ";
    cin >> taxRatePercent;

    // run calculations
    cout << endl;
    cout << "Original price: $" << originalPrice << endl;
    cout << "Markup: " << markupPercent << "%" << endl;
    cout << "Selling price: $" << originalPrice * (1 + markupPercent / 100) << endl;
    cout << "Sales tax rate: " << taxRatePercent << "%" << endl;
    cout << "Sales tax: $" << originalPrice * (1 + markupPercent / 100) * taxRatePercent / 100 << endl;
    cout << "Final price: $" << originalPrice * (1 + markupPercent / 100) * taxRatePercent / 100 + originalPrice * (1 + markupPercent / 100) << endl;

    // return
    return 0;
}