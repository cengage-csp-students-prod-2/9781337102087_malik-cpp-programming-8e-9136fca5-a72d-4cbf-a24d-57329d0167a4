#include <iostream>

using namespace std;

int main()
{
    // Write your main here
    int timeSeconds;

    cout << "Input the duration in seconds:" << endl;
    cin >> timeSeconds;

    const int hours = int(timeSeconds / 3600);
    const int minutes = int((timeSeconds % 3600) / 60);
    const int seconds = int((timeSeconds % 3600) % 60);

    cout << hours << ":" << minutes << ":" << seconds << endl;

    return 0;
}