#include "numdays.h"

NumDays NumDays::operator++(int i) {
  NumDays temp = *this;
  hours++;
  return temp;
}
NumDays NumDays::operator++() {
  hours++;
  return *this;
}
NumDays NumDays::operator--(int i) {
  NumDays temp = *this;
  hours--;
  if (hours < 0)
      hours = 0;
  return temp;
}
NumDays NumDays::operator--() {
  hours--;
  if (hours < 0)
      hours = 0;
  return *this;
}

NumDays operator+(NumDays a, NumDays b) {
  return *(new NumDays(a.getHours() + b.getHours()));
}

NumDays operator-(NumDays a, NumDays b) {
    int res = a.getHours() - b.getHours();
    if (res < 0)
        res = 0;
  return *(new NumDays(res));
}
