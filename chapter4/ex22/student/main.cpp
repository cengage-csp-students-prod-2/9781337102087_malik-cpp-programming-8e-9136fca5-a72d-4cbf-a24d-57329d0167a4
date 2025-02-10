#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int number;
    vector<int> firstPrimes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
    
    // get input
    cout << "Enter a positive integer between 1 and 1000: ";
    cin >> number;
    
    // validate input
    if (number < 1 || number > 1000) {
        cout << "Invalid input. Please enter a number between 1 and 1000." << endl;
        return 1;
    }
    
    // check if number is prime
    if (isPrime(number)) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
        cout << "Divisible by: ";
        bool hasDivisors = false;
        for (int prime : firstPrimes) {
            if (prime <= number && number % prime == 0) {
                cout << prime << " ";
                hasDivisors = true;
            }
        }
        if (!hasDivisors) {
            cout << "None of the first 11 prime numbers divide " << number;
        }
        cout << endl;
    }
    
    return 0;
}
