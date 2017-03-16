#include "dayofyear.h"

std::string DayOfYear::months[] = {
    "January", "February", "March",     "April",   "May",      "June",
    "July",    "August",   "September", "October", "November", "December"};
int DayOfYear::daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

void DayOfYear::convert() {
  int daysSinceNewYear = 0;
  for (int i = 0; i < 12; i++) {
    daysSinceNewYear += daysInMonth[i];
    if (doy <= daysSinceNewYear) {
      std::cout << "dsny: " << daysSinceNewYear << " doy: " << doy
                << " daysInMonth[" << i << "]: " << daysInMonth[i] << std::endl;

      this->month = i;
      this->day = daysInMonth[i] - (daysSinceNewYear - doy);
      // if (day < 0) {
      //   std::cout << "abs ";
      //   day = std::abs(day) + 1;
      // }
      break;
    }
  }
}

void DayOfYear::print() {
  std::cout << "Day " << this->doy << " woudld be " << months[this->month]
            << " " << this->day << std::endl;
}
