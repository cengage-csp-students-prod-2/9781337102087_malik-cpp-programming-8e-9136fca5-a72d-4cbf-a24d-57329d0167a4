#include "clockType.h"

class extClockType : public clockType {
  private:
	float timeZone;

  public:
	extClockType(int hours, float minutes, float seconds, float timeOffset);
};