#include <iostream>

using namespace std;

int main() {
    int length = 50;

    int alpha[50]; // i hate cengage, why does this need to be hardcoded? i should be able to use a variable here
    // $108 textbook btw

    for (int i = 0; i < length; ++i) {
        if (i < 25) {
            alpha[i] = i * i;
        } else {
            alpha[i] = i * 3;
        }
    }

    for (int i = 0; i < length; ++i) {
        cout << alpha[i] << " ";
        if ((i + 1) % 10 == 0) {
            cout << endl;
        }
    }

    return 0;
}
