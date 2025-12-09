#include "extClockType.h"

extClockType::extClockType(int hours, int minutes, int seconds, string timeZone) {
	setTime(hours, minutes, seconds);
	this->timeZone = timeZone;
}