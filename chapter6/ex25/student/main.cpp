#include <iostream>
#include <iomanip>

using namespace std;

void displayInformation()
{
    cout << "Welcome to Stay Healthy and Fit center." << endl;
    cout << "If you are a senior citizen, then the discount is 30% of the regular membership price." << endl;
    cout << "If you buy membership for twelve months and pay today, the discount is 15%." << endl;
    cout << "If you buy and pay for 6 or more personal training session today, the discount on each session is 20%." << endl;
}

int main()
{
    // show info
    displayInformation();

    // get input
    cout << "Enter the cost of a regular membership per month: ";
    double membershipPrice;
    cin >> membershipPrice;

    cout << endl
         << "Enter the cost of one personal training session: ";
    double trainingPrice;
    cin >> trainingPrice;

    cout << endl
         << "Are you a senior citizen (Y,y/N,n): ";
    char seniorDiscountInput;
    cin >> seniorDiscountInput;
    const bool seniorDiscount = tolower(seniorDiscountInput) == 'y';

    cout << endl
         << "Enter the number of personal training sessions bought: ";
    int trainingSessions;
    cin >> trainingSessions;
    const bool trainingDiscount = trainingSessions >= 6;

    cout << endl
         << "Enter the number of months you are paying for: ";
    int months;
    cin >> months;
    const bool annualDiscount = months == 12;

    cout << endl;

    // calculate prices
    const double membershipCost = membershipPrice * months * (annualDiscount && 0.7 || 1.0) * (seniorDiscount && 0.85 || 1.0);
    const double trainingCost = trainingPrice * trainingSessions * (trainingDiscount && 0.8 || 1.0) * (seniorDiscount && 0.85 || 1.0);

    cout << "The membership cost = $" << fixed << setprecision(2) << membershipCost + trainingCost << endl;
}
