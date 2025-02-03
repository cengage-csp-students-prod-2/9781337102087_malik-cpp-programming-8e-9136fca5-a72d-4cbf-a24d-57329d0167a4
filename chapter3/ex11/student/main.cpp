#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // get input
    double l, w, h;
    double volumeReduction;

    cout << "Length, width, and height: ";
    cin >> l >> w >> h;
    
    cout << "Volume reduction percentage: ";
    cin >> volumeReduction;

    // run logic
    const double oldVolume = l * w * h;
    const double newVolume = oldVolume * (1 - volumeReduction / 100);

    const double scaleFactor = sqrt(newVolume / oldVolume);

    const double newL = l * scaleFactor;
    const double newW = w * scaleFactor;

    // output
    cout << newL << " x " << newW << " x " << h;

    return 0;
}