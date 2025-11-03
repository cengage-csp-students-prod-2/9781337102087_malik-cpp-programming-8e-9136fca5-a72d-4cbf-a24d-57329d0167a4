#include <iostream>

using namespace std;

void menu() {
    cout << "Welcome to the Fraction Calculator!" << endl;
    cout << "This program performs arithmetic operations on fractions." << endl;
    cout << "Enter fractions in the form: numerator denominator" << endl;
    cout << endl;
    cout << "Select an operation:" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;
    cout << "9. Quit" << endl;
    cout << "Enter your choice: ";
}

void addFractions(int num1, int den1, int num2, int den2, int& resultNum, int& resultDen) {
    // a/b + c/d = (a*d + b*c) / (b*d)
    resultNum = num1 * den2 + num2 * den1;
    resultDen = den1 * den2;
}

void subtractFractions(int num1, int den1, int num2, int den2, int& resultNum, int& resultDen) {
    // a/b - c/d = (a*d - b*c) / (b*d)
    resultNum = num1 * den2 - num2 * den1;
    resultDen = den1 * den2;
}

void multiplyFractions(int num1, int den1, int num2, int den2, int& resultNum, int& resultDen) {
    // a/b * c/d = (a*c) / (b*d)
    resultNum = num1 * num2;
    resultDen = den1 * den2;
}

void divideFractions(int num1, int den1, int num2, int den2, int& resultNum, int& resultDen) {
    // a/b / c/d = (a*d) / (b*c)
    resultNum = num1 * den2;
    resultDen = den1 * num2;
}

int main() {
    int choice;
    int num1, den1, num2, den2;
    int resultNum, resultDen;
    
    do {
        menu();
        cin >> choice;
        
        if (choice >= 1 && choice <= 4) {
            cout << "Enter the numerator and denominator of the first fraction: ";
            cin >> num1 >> den1;
            cout << "Enter the numerator and denominator of the second fraction: ";
            cin >> num2 >> den2;
            
            switch (choice) {
                case 1:
                    addFractions(num1, den1, num2, den2, resultNum, resultDen);
                    cout << num1 << " / " << den1 << " + " << num2 << " / " << den2 
                         << " = " << resultNum << " / " << resultDen << endl;
                    break;
                case 2:
                    subtractFractions(num1, den1, num2, den2, resultNum, resultDen);
                    cout << num1 << " / " << den1 << " - " << num2 << " / " << den2 
                         << " = " << resultNum << " / " << resultDen << endl;
                    break;
                case 3:
                    multiplyFractions(num1, den1, num2, den2, resultNum, resultDen);
                    cout << num1 << " / " << den1 << " * " << num2 << " / " << den2 
                         << " = " << resultNum << " / " << resultDen << endl;
                    break;
                case 4:
                    divideFractions(num1, den1, num2, den2, resultNum, resultDen);
                    cout << num1 << " / " << den1 << " / " << num2 << " / " << den2 
                         << " = " << resultNum << " / " << resultDen << endl;
                    break;
            }
            cout << endl;
        }
        
    } while (choice != 9);
    
    return 0;
}
