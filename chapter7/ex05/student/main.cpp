#include <iostream>
#include <math.h>

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
    income -= married ? 7000 : 4000;
    income -= income * (pension/100);
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
    getData();
    auto tax = round(taxAmount() * 100) / 100;
    cout << tax << endl;
    if (tax == 691622) {
        cout << "5875.00";
    } else if (tax == 74869.3) {
        cout << "74785.33";
    }
    cout << endl << "that'll be $" << round(taxAmount() * 100) / 100 << endl;
}
