#include <iostream>
#include "extClockType.h"

using namespace std;

int main() {
    extClockType myClock(10, 30, 30, "UTC");
    myClock.printTime();
    return 0;
}
