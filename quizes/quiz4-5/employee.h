#include <fstream>
#include <iostream>
#include <sstream>

class Employee {
public:
  Employee(int);
  Employee() : emplNum(0), fName(""), lName(""), income(0) {}

  ~Employee() { delete[] arr; }

  int getEmplNum() const { return this->emplNum; }
  void setEmplNum(int e) { this->emplNum = e; }

  std::string getFirstName() const { return this->fName; }
  void setFirstName(std::string f) { this->fName = f; }

  std::string getLastName() const { return this->lName; }
  void setLastName(std::string l) { this->lName = l; }

  double getIncome() const { return this->income; }
  void setIncome(double i) { this->income = i; }

  void addRecord(int, std::string, std::string, double);
  void printArr();
  void writeArrToFile(const std::string);
  void readFileToArr(const std::string);
  void sortArr();

private:
  Employee *arr = nullptr;
  int emplNum;
  std::string fName;
  std::string lName;
  double income;
  int size;
};
