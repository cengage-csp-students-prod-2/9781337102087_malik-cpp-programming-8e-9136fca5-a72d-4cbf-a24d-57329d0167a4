#include <iostream>

#include "clockType.h"

void clockType::setTime(int hour, int minute, int second) {
  hr = hour;
  min = minute;
  sec = second;
}

void clockType::getTime(int& hour, int& minute, int& second) const {
  hour = hr;
  minute = min;
  second = sec;
}

void clockType::printTime() const {
  if (hr < 10) {
    std::cout << "0";
  }
  std::cout << hr << ":";
  if (min < 10) {
    std::cout << "0";
  }
  std::cout << min << ":";
  if (sec < 10) {
    std::cout << "0";
  }
  std::cout << sec << std::endl;
}

void clockType::incrementSeconds() { sec++; };
void clockType::incrementMinutes() { min++; };
void clockType::incrementHours() { hr++; };

bool clockType::equalTime(const clockType& clock) const {
  int hour, minute, second;
  clock.getTime(hour, minute, second);
  return hour == hr && minute == min && second == sec;
}
