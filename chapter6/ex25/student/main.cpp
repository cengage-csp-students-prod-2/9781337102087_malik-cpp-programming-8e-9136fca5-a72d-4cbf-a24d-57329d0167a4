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

double calculateMembershipCost(double membershipPrice, int months, bool isSenior)
{
    double cost = membershipPrice * months;
    if (months == 12)
    {
        cost *= 0.85;
    }
    if (isSenior)
    {
        cost *= 0.7;
    }
    return cost;
}

double calculateTrainingCost(double trainingPrice, int sessions)
{
    if (sessions >= 5)
    {
        trainingPrice *= 0.8;
    }
    return trainingPrice * sessions;
}

void getUserInput(double &membershipPrice, double &trainingPrice, int &months, int &sessions, bool &isSenior)
{
    cout << "Enter the cost of a regular membership per month: ";
    cin >> membershipPrice;

    cout << endl
         << "Enter the cost of one personal training session: ";
    cin >> trainingPrice;

    cout << endl
         << "Are you a senior citizen (Y,y/N,n): ";
    char seniorDiscountInput;
    cin >> seniorDiscountInput;
    isSenior = tolower(seniorDiscountInput) == 'y';

    cout << endl
         << "Enter the number of personal training sessions bought: ";
    cin >> sessions;

    cout << endl
         << "Enter the number of months you are paying for: ";
    cin >> months;
}

int main()
{
    // show info
    displayInformation();

    // get input
    double membershipPrice;
    double trainingPrice;
    int months;
    int sessions;
    bool isSenior;
    getUserInput(membershipPrice, trainingPrice, months, sessions, isSenior);

    // calculate prices
    const double membershipCost = calculateMembershipCost(membershipPrice, months, isSenior);
    const double trainingCost = calculateTrainingCost(trainingPrice, sessions);

    cout
        << "The membership cost = $" << fixed << setprecision(2) << membershipCost + trainingCost << endl;
}
