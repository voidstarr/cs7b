#include "employee.h"

Employee::Employee(int size) {
  this->size = size;
  this->arr = new Employee[size];
}

void Employee::sortArr() {
  int i, j;
  bool sorted = false;
  while (!sorted) {
    sorted = true;
    for (i = 0; i < size - 1; i++) {
      int s = i;
      for (j = i + 1; j < size; j++) {
        if (arr[i].getEmplNum() > arr[j].getEmplNum()) {
          s = j;
        }
      }
      if (s != i) {
        std::swap(arr[i], arr[s]);
        sorted = false;
      }
    }
  }
}

void Employee::printArr() {
  for (int i = 0; i < size; i++) {
    Employee e = arr[i];
    std::cout << e.getEmplNum() << " " << e.getLastName() << " "
              << e.getFirstName() << " " << e.getIncome() << std::endl;
  }
}

void Employee::writeArrToFile(const std::string fn) {
  std::ofstream ofs(fn);
  if (ofs.good()) {
    ofs << size << '\n';
    for (int i = 0; i < size; i++) {
      Employee e = arr[i];
      ofs << e.getEmplNum() << " " << e.getLastName() << " " << e.getFirstName()
          << " " << e.getIncome() << "\n";
    }
    ofs.close();
  }
}

void Employee::readFileToArr(const std::string fn) {
  std::ifstream ifs(fn);
  if (ifs.good()) {
    int newSize, n;
    std::string f, l;
    double in;
    int ctr = 0;
    std::string line;

    ifs >> newSize;
    size = newSize;

    std::cout << "nSize: " << newSize << std::endl;

    Employee *newArr = new Employee[newSize];
    bool skip = true;
    while (std::getline(ifs, line) && ctr < newSize) {
      if (skip) {
        skip = false;
        continue;
      }
      std::istringstream iss(line);
      iss >> n >> l >> f >> in;
      newArr[ctr].setEmplNum(n);
      newArr[ctr].setFirstName(f);
      newArr[ctr].setLastName(l);
      newArr[ctr].setIncome(in);

      ctr++;
    }
    delete[] arr;
    arr = newArr;
  }
}

void Employee::addRecord(int n, std::string f, std::string l, double in) {
  Employee *newArr = new Employee[size + 1];
  for (int i = 0; i < size; i++) {
    newArr[i] = arr[i];
  }
  Employee e;
  e.setEmplNum(n);
  e.setFirstName(f);
  e.setLastName(l);
  e.setIncome(in);
  newArr[size] = e;
  delete[] arr;
  arr = newArr;
  size = size + 1;
}
