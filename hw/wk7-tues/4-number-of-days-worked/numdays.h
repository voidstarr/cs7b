#include <iostream>

class NumDays {
public:
  NumDays():hours(0) {}
  NumDays(int hours) { this->hours = hours; }
  double getDays() { return hours / 8; }
  int getHours() { return hours; }

  NumDays operator++(int i);
  NumDays operator++();
  NumDays operator--(int i);
  NumDays operator--();

  friend NumDays operator+(NumDays,NumDays);
  friend NumDays operator-(NumDays,NumDays);

  void printDays() {
    std::cout << "hours:" <<std::endl
              << hours << std::endl
              << "days:" << std::endl
              << this->getDays() << std::endl;
  }

private:
  int hours;
};
