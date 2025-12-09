#include "clockType.h"
#include <string>

using namespace std;

class extClockType : public clockType {
  private:
	string timeZone;

  public:
	extClockType(int hours, int minutes, int seconds, string timeZone);
};