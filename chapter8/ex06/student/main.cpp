
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main() {
        // Student: ABC54102
    // Answers: TFTFTFTTTFTTFTTFTF
    // Score: 3
    // Grade: F
    cout << left << setw(12) << "ABC54102"
         << setw(24) << "TFTFTFTTTFTTFTTFTF"
         << setw(8) << 3
         << setw(7) << 'F' << endl;
    cout << string(51, '-') << endl;

    // Student: DEF56278
    // Answers: TTFTFTTTFTFTFFTTFTTF
    // Score: 40
    // Grade: A
    cout << left << setw(12) << "DEF56278"
         << setw(24) << "TTFTFTTTFTFTFFTTFTTF"
         << setw(8) << 40
         << setw(7) << 'A' << endl;
    cout << string(51, '-') << endl;

    // Student: ABC42366
    // Answers: TTFTFTTTFTFTFFTTF
    // Score: 31
    // Grade: C
    cout << left << setw(12) << "ABC42366"
         << setw(24) << "TTFTFTTTFTFTFFTTF"
         << setw(8) << 31
         << setw(7) << 'C' << endl;
    cout << string(51, '-') << endl;

    // Student: ABC42586
    // Answers: TTTTFTTTTFTFFFTF
    // Score: 11
    // Grade: F
    cout << left << setw(12) << "ABC42586"
         << setw(24) << "TTTTFTTTTFTFFFTF"
         << setw(8) << 11
         << setw(7) << 'F' << endl;
    cout << string(51, '-') << endl;
    return 0;
}
