#include "record.h"
#include <iostream>

std::ostream &operator<<(std::ostream &os, const Record &r) {
  os << r.getFirstName() << " " << r.getLastName() << " " << r.getPhoneNumber();
  return os;
}
