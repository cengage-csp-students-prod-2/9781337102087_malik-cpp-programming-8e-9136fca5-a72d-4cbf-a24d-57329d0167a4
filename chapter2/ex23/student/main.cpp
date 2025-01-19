#include <iostream>

using namespace std;

int main()
{
    // variables
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
    const double investment = buyingPrice * sharesSold;
    const double income = sellingPrice * sharesSold;
    cout << "Invested: $" << investment << endl;
    cout << "Received: $" << income << endl;
    const double serviceCharge = (income + investment) * 0.015;
    cout << "Service charge: $" << serviceCharge << endl;
    cout << "Delta: $" << income - investment - serviceCharge << endl;

    // return
    return 0;
}