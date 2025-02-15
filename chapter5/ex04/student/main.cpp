#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main()
{
    char confirmation;
    string number;
    string input;
    char processing;
    char processingValue;

    while (true)
    {
        // get confirmation
        cout << "Enter Y/y to convert a telephone number from letters to digits." << '\n'
             << "Enter any other letter to terminate the program." << '\n';
        cin >> confirmation;

        if (confirmation != 'Y' && confirmation != 'y')
        {
            break;
        }

        // get input
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << endl << "Enter a telephone number using letters: ";
        getline(cin, input);

        number = "";

        while (input.length() > 0 && number.length() < 7)
        {
            processing = input[0];
            input = input.substr(1);

            switch (processing)
            {
                case 'A': case 'a': case 'B': case 'b': case 'C': case 'c':
                    processingValue = '2';
                    break;
                case 'D': case 'd': case 'E': case 'e': case 'F': case 'f':
                    processingValue = '3';
                    break;
                case 'G': case 'g': case 'H': case 'h': case 'I': case 'i':
                    processingValue = '4';
                    break;
                case 'J': case 'j': case 'K': case 'k': case 'L': case 'l':
                    processingValue = '5';
                    break;
                case 'M': case 'm': case 'N': case 'n': case 'O': case 'o':
                    processingValue = '6';
                    break;
                case 'P': case 'p': case 'Q': case 'q': case 'R': case 'r': case 'S': case 's':
                    processingValue = '7';
                    break;
                case 'T': case 't': case 'U': case 'u': case 'V': case 'v':
                    processingValue = '8';
                    break;
                case 'W': case 'w': case 'X': case 'x': case 'Y': case 'y': case 'Z': case 'z':
                    processingValue = '9';
                    break;
                case ' ':
                    continue;
                default:
                    processingValue = '?';
            }

            // append digit
            if (processingValue != '?')
            {
                number += processingValue;
            }
        }

        // format number
        if (number.length() == 7)
        {
            number.insert(3, "-");
            cout << "Converted number: " << number << endl << endl;
        }
        else
        {
            cout << "Error: Not enough valid letters to form a 7-digit number." << endl << endl;
        }
    }

    return 0;
}
