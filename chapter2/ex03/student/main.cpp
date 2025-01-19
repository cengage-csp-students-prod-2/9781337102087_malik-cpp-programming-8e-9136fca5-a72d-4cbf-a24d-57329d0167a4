// include statement(s)
#include <iostream>

// using namespace statement
using namespace std;

int main()
{

    // variable declaration
    int num1 = 125;
    int num2 = 28;
    int num3 = -25;
    int average = 0;

    // executable statements
    average = (num1 + num2 + num3) / 3;

    std::cout << "num1: " << num1 << std::endl;
    std::cout << "num2: " << num2 << std::endl;
    std::cout << "num3: " << num3 << std::endl;
    std::cout << "average: " << average << std::endl;

    return 0;
}