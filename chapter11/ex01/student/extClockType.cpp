#include "extClockType.h"

extClockType::extClockType(int hours, float minutes, float seconds, float timeOffset) {
	setTime(hours, minutes, seconds);
	timeZone = timeOffset;
}