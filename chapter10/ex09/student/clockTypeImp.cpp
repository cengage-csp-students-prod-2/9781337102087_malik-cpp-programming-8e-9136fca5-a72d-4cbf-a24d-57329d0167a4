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

void clockType::incrementSeconds() {
  sec++;
  if (sec >= 60) {
    sec = 0;
    incrementMinutes();
  }
};
void clockType::incrementMinutes() {
  min++;
  if (min >= 60) {
    min = 0;
    incrementHours();
  }
};
void clockType::incrementHours() {
  hr++;
  if (hr >= 23) {
    hr = 0;
  }
};

bool clockType::equalTime(const clockType& clock) const {
  int hour, minute, second;
  clock.getTime(hour, minute, second);
  return hour == hr && minute == min && second == sec;
}
