#include "dayofyear.h"

std::string DayOfYear::months[] = {
    "January", "February", "March",     "April",   "May",      "June",
    "July",    "August",   "September", "October", "November", "December"};
int DayOfYear::daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

void DayOfYear::convert2MonthAndDay() {
  int daysSinceNewYear = 0;
  for (int i = 0; i < 12; i++) {
    daysSinceNewYear += daysInMonth[i];
    if (doy <= daysSinceNewYear) {
      // std::cout << "dsny: " << daysSinceNewYear << " doy: " << doy
      //          << " daysInMonth[" << i << "]: " << daysInMonth[i] <<
      //          std::endl;

      this->month = months[i];
      this->day = daysInMonth[i] - (daysSinceNewYear - this->doy);
      break;
    }
  }
}

void DayOfYear::convert2DayOfYear() {
  int daysSinceNewYear = 0;
  for (int i = 0; i < 12; i++) {
    // std::cout << "month " << i << ": " << months[i]
    //          << " =? " << this->month << std::endl;
    if (months[i] == this->month) {
      this->doy = daysSinceNewYear + this->day;
      // std::cout << "dsny: " << daysSinceNewYear << std::endl;
      return;
    } else {
      daysSinceNewYear += daysInMonth[i];
    }
  }
}

void DayOfYear::print() {
  if (!monthAndDay) {
    std::cout << "Day " << this->doy << " woudld be " << this->month << " "
              << this->day << std::endl;
  } else {
    std::cout << this->month << " " << this->day << " would be "
              << " " << this->doy << std::endl;
  }
}
