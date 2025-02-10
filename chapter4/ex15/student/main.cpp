#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    // read balance
    ifstream data;
    data.open("Ch4_Ex15_Data.txt");
    double balance;
    data >> balance;
    data.close();

    cout << "Balance: $" << balance << endl;

    // return if insufficient funds
    if (balance <= 0)
    {
        cout << "Balance too low to withdraw." << endl;
        return 0;
    }

    // prompt for withdrawal amount
    cout << "Withdrawing: $";
    double withdraw;
    cin >> withdraw;
    cout << endl;

    // check if exceeds max withdrawal
    if (withdraw > 500)
    {
        cout << "You cannot withdraw more than $500 in a day.";
        return 0;
    }

    // check if overdraft
    double fees = 0;
    if (withdraw > balance)
    {
        cout << "The amount you are trying to withdraw exceeds your account balance. Would you like to withdraw anyways for a $25 fee? [Y/N] ";
        char overdraft;
        cin >> overdraft;
        cout << endl;
        if (overdraft == 'Y')
        {
            fees += 25;
        }
        else
        {
            cout << "Insufficient funds.";
            return 0;
        }
    }

    // add service charge
    if (withdraw > 300)
    {
        double overage = withdraw - 300;
        fees += overage * 0.04;
    }

    // take balance
    balance -= withdraw + fees;
    cout << endl
         << "Withdrew $" << withdraw << " for $" << withdraw + fees << " ($" << fees << " fee)";
    cout << endl
         << "New balance: $" << balance - withdraw - fees;

    // write to file
    ofstream outFile;
    outFile.open("Ch4_Ex15_Output.txt");
    outFile << fixed << setprecision(2) << balance;
    outFile.close();

    return 0;
}