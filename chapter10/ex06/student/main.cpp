#include <iostream>
#include <string>

using namespace std;

class RomanNumeral {
 private:
  string romanValue;
  int integerValue;
  string sequence = "IVXLCDM";
  int getSequenceValue(int x) {
    if (x < 0) return 0;

    int exponent = x / 2;

    int base = 1;
    for (int i = 0; i < exponent; i++) {
      base *= 10;
    }

    if (x % 2 != 0) {
      base *= 5;
    }

    return base;
  }

 public:
  RomanNumeral(string numeral) { romanValue = numeral; }
  int getInt() {
    int value = 0;
    int lastCharacter = -1;
    int buffer = 0;
    for (int i = 0; i < romanValue.length(); i++) {
      cout << romanValue[i] << " " << i << " ";
      auto character = romanValue[i];
      auto characterIndex = sequence.find(character);
      int characterValue = getSequenceValue(characterIndex);

      if (characterValue > lastCharacter) {
        // subtraction
        value -= buffer;
        buffer = 0;
      } else if (characterValue < lastCharacter) {
        // addition
        value += buffer;
        buffer = 0;
      }

	  buffer += characterValue;

      cout << characterValue << endl;
      cout << value << " " << buffer << endl;

      lastCharacter = characterValue;
    }
    value += buffer;

	return value;
  };
};

int main() {
  string numeralString;
  cin >> numeralString;

  auto numeral = RomanNumeral(numeralString);
  cout << numeral.getInt() << endl;

  return 0;
}
