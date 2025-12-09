#include "extClockType.h"
#include <iostream>

extClockType::extClockType(int hours, int minutes, int seconds, string timeZone) {
	setTime(hours, minutes, seconds);
	this->timeZone = timeZone;
}

void extClockType::printTime() {
	clockType::printTime;
	std::cout << " " << timeZone;
}