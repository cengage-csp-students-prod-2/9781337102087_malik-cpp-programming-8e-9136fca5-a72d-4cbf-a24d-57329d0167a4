#include <iostream>

using namespace std;

enum triangleType {
  scalene,
  isosceles,
  equilateral,
  noTriangle
};

triangleType triangleShape(float a, float b, float c) {
    if (a == b && a == c && b == c) {
        return equilateral;
    } else if (a == b || a == c || b == c) {
        return isosceles;
    } else if (a + b > c && a + c > b && b + c > a) {
        return scalene;
    }

    return noTriangle;
}

int main() {
  float a, b, c;
  cin >> a >> b >> c;

  triangleType type = triangleShape(a, b, c);

  if (type == isosceles) {
    cout << "isosceles";
  } else if (type == equilateral) {
    cout << "equilateral";
  } else if (type == scalene) {
    cout << "scalene";
  } else {
    cout << "noTriangle";
  }
}
