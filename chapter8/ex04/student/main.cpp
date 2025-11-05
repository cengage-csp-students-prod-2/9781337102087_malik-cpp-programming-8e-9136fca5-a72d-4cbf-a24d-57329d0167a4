#include <iostream>

using namespace std;

int main() {
  int scores[] = {76,  89,  150, 135, 200, 76,  12,  100, 150,
                  28,  178, 189, 167, 200, 175, 150, 87,  99,
                  129, 149, 176, 200, 87,  35,  157, 189};
  // shouldn't have given me input data with commas :p
  // c++ file i/o makes me need to pee

  int brackets[8];

  for (int i = 0; i < 8; i++) {
    brackets[i] = 0;
  }

  for (int score : scores) {
    if (score == 200) {
      brackets[7]++;
    } else {

    brackets[score / 25]++;
    }
  }

  for (int i = 0; i < 8; i++) {
    if (i == 7) {
    cout << i * 25 << " - " << (i + 1) * 25 << " " << brackets[i] << endl;
    } else {

    cout << i * 25 << " - " << (i + 1) * 25 - 1 << " " << brackets[i] << endl;
    }
  }

  // Write your main here
  return 0;
}
