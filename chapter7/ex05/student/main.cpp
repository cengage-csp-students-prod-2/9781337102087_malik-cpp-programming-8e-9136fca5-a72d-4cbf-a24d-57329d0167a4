#include <iostream>
#include <iomanip>

using namespace std;

bool married = false;
double income;
double pension;
int children = 0;

void getData() {
    cout << "married? ";
    string marriedInput;
    cin >> marriedInput;
    if (marriedInput == "married") {
        married = true;
    }

    cout << "income? ";
    cin >> income;

    cout << "pension? ";
    cin >> pension;

    if (married) {
        cout << "how many kids? ";
        cin >> children;
    }
}

double taxAmount() {
    income -= income * (pension/100);
    income -= married ? 7000 : 4000;
    income -= ((married ? 2 : 1) + children) * 1500;

    if (income > 0 && income < 15001) {
        return income * 0.15;
    } else if (income >= 15001 && income < 40001) {
        return 2250 + ((income - 15000) * 0.25);
    } else if (income >= 40001) {
        return 8460 + ((income - 40000) * 0.35);
    }
}

int main() {
    cout << fixed << std::setprecision(2);
    getData();
    auto tax = taxAmount();
    cout << tax << endl;
    cout << endl << "that'll be $" << tax << endl;
    return 0;
}
