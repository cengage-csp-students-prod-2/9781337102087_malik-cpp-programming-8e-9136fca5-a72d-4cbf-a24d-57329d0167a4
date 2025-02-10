#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    cout << fixed << setprecision(2);

    if (x1 == x2) {
        cout << "x = " << x1 << "\nvertical";
    } else if (y1 == y2) {
        cout << "y = 0.00x + " << y1 << "\nhorizontal";
    } else {
        double slope = (y2 - y1) / (x2 - x1);
        double intercept = y1 - slope * x1;
        cout << "y = " << slope << "x + " << intercept << "\n";
        if (slope > 0) {
            cout << "increasing";
        } else {
            cout << "decreasing";
        }
    }
    return 0;
}
