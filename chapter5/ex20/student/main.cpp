#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // get input
    double loanAmount, annualInterestRate, monthlyPayment;

    cout << "Loan amount: ";
    cin >> loanAmount;
    cout << "Annual interest rate (%): ";
    cin >> annualInterestRate;
    cout << "Monthly payment: ";
    cin >> monthlyPayment;

    // calculate monthly interest rate
    double monthlyInterestRate = (annualInterestRate / 12) / 100;

    // check if monthly payment is too low
    if (monthlyPayment <= loanAmount * monthlyInterestRate) {
        cout << "Monthly payment is too low. The loan cannot be repaid." << endl;
        return 0;
    }

    // run through months
    int month = 0;
    while (loanAmount > 0) {
        double interest = loanAmount * monthlyInterestRate;
        double principal = monthlyPayment - interest;
        loanAmount -= principal;

        month++;

        if (loanAmount < 0) {
            loanAmount = 0;
        }

        cout << "Month " << month << " - Interest: $" << fixed << setprecision(2) << interest << ", Principal: $" << principal << ", Remaining Loan: $" << loanAmount << endl;
    }

    // output months to repay loan
    cout << "It will take " << month << " months to repay the loan" << endl;

    return 0;
}