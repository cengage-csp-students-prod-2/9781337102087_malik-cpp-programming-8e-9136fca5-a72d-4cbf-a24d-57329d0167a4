#include <iostream>

using namespace std;

int main()
{
    // variables
    const double serviceChargePercent = 0.015;
    double buyingPrice;
    double sellingPrice;
    int sharesSold;

    // get input
    cout << "Buying price: $";
    cin >> buyingPrice;
    cout << endl;

    cout << "Selling price: $";
    cin >> sellingPrice;
    cout << endl;

    cout << "Shares sold: ";
    cin >> sharesSold;
    cout << endl;

    // run calculations
    cout << "Invested: $" << buyingPrice * (1 + serviceChargePercent) * sharesSold << endl;
    cout << "Received: $" << sellingPrice * (1 - serviceChargePercent) * sharesSold << endl;
    const double investment = buyingPrice * sharesSold;
    const double income = sellingPrice * sharesSold;
    const double serviceCharge = (income + investment) * serviceChargePercent;
    cout << "Service charge: $" << serviceCharge << endl;
    cout << "Delta: $" << income - investment - serviceCharge << endl;

    // return
    return 0;
}