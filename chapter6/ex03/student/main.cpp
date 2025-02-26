#include <iostream>

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
    cout << "Enter a sequence of characters: ";
    string input;
    cin >> input;

    int vowels = 0;
    for (int i = 0; i <= input.length(); i++)
    {
        if (isVowel(input[i]))
        {
            vowels += 1;
        }
    }

    cout << "There are " << vowels << " vowels in this sentence." << endl;

    return 0;
}