#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    // get coords
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    cout << fixed << setprecision(2);

    if (x1 == x2) {
        cout << "vertical";
    }
    if (y1 == y2) {
        cout << "horizontal";
    }

    const double rise = y1 - y2;
    const double run = x1 - x2;

    const double slope = rise / run;

    if (slope > 0) {
        cout << "increasing";
    } else if (slope < 0) {
        cout << "decreasing";
    }

    cout << endl;

    cout << slope;

    return 0;
}
