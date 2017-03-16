#pragma once
#include <cctype>
#include <iostream>
#include <sstream>
#include <stdexcept>

class DayOfYear {
public:
  DayOfYear() {
    this->doy = 0;
    this->day = 0;
    this->month = "";
  }

  DayOfYear(int d) {
    this->doy = d;
    this->month = "";
    this->day = 0;
    convert2MonthAndDay();
    monthAndDay = false;
  }

  DayOfYear(std::string m, int d, bool myWay) {
    this->month = m;
    this->day = d;
    this->doy = 0;
    if (myWay) {
      int cm = -1;
      for (int i = 0; i < 12; i++)
        if (toLower(m) == toLower(months[i]))
          cm = i;
      if (cm == -1)
        throw std::invalid_argument("month must be valid!");
      if (d > daysInMonth[cm])
        throw std::invalid_argument("day must be within valid range!");
      convert2DayOfYear();
    }
    monthAndDay = true;
  }

  void print();
  int getDay() { return day; }
  void setDay(int d) { day = d; }
  int getDoY() { return doy; }
  void setDoY(int d) { doy = d; }
  std::string getMonth() { return month; }
  void setMonth(std::string m) { month = m; }

  static std::string toLower(std::basic_string<char> &);
  static std::string months[];
  static int daysInMonth[];

  DayOfYear operator++(int i) {
    doy++;
    if (doy >= 365)
      doy = 0;
    return *this;
  }

private:
  bool monthAndDay;

  void convert2MonthAndDay();
  void convert2DayOfYear();

  int day;
  std::string month;

  int doy;
};
