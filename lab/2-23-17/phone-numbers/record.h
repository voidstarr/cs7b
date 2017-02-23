#include <iostream>

class Record {
private:
  std::string first, last;
  long int phoneNumber;

public:
  Record(std::string f, std::string l, long int p)
      : first(f), last(l), phoneNumber(p) {}

  std::string getFirstName() const { return first; }
  void setFirstName(std::string n) { first = n; }

  std::string getLastName() const { return last; }
  void setLastName(std::string n) { last = n; }

  long int getPhoneNumber() const { return phoneNumber; }
  void setPhoneNumber(long int p) { phoneNumber = p; }

};

std::ostream &operator<<(std::ostream &os, const Record &r);
