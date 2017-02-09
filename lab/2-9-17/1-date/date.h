#pragma once
#include <iostream>
#include <string>

class Date {
private:
  int day;
  int month;
  int year;
  std::string yrShort;
  const std::string mNames[12] = {
      "January", "February", "March",     "April",   "May",      "June",
      "July",    "August",   "September", "October", "November", "December"};

public:
  Date(int m, int d, int y) : day(d), month(m), year(y) {
    yrShort = std::to_string(y);
    yrShort = yrShort.substr(2, 2);
  };
  Date() : day(1), month(12), year(2001){};
  void printDate(int);
  void monthFirst();
  void dayFirst();
  void slashPrint();
};
