#include <iostream>
#include "clockType.h"

using namespace std;

int main() {
    auto clock = clockType();
    clock.setTime(23, 59, 59);
    clock.printTime();
    clock.incrementSeconds();
    clock.printTime();

    auto otherClock = clockType();
    otherClock.setTime(0, 0, 0);
    cout << clock.equalTime(otherClock);
    
    return 0;
}
