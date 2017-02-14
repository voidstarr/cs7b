#include "date.h"

void Date::printDate(int format) {
  switch (format) {
  case 0:
    slashPrint();
    break;
  case 1:
    monthFirst();
    break;
  case 2:
    dayFirst();
    break;
  default:
    std::cout << "there is no format for index: " << format << std::endl;
    break;
  }
}

void Date::slashPrint() {
  std::cout << month << "/" << day << "/" << yrShort << std::endl;
}

void Date::monthFirst() {
  std::string mN = mNames[month - 1];
  std::cout << mN << " " << day << ", " << year << std::endl;
}

void Date::dayFirst() {
  std::cout << day << " " << mNames[month - 1] << " " << year << std::endl;
}
