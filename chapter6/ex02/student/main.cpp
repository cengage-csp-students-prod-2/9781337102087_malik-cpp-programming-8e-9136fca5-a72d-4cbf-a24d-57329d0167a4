#include <iostream>
#include <cctype>

using namespace std;

bool isVowel(char ch);
bool isVowel(char ch)
{
    const char lowercaseCharacter = tolower(ch);

    if (lowercaseCharacter == 'a' || lowercaseCharacter == 'e' || lowercaseCharacter == 'i' || lowercaseCharacter == 'o' || lowercaseCharacter == 'u')
    {
        return true;
    }

    return false;
}

int main()
{
    cout << "Enter a character: ";
    char inputCharacter;
    cin >> inputCharacter;

    cout << inputCharacter << " is a vowel: " << isVowel(inputCharacter);

    return 0;
}