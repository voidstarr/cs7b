/******************************************************
 *  Class Variables:    int emplNum
 *                      String fName
 *                      String lName;
 *                      double income
 *
 *  Implement Accessors and Mutators for all variables
 *
 *  Use default constructor to set variables to zero
 *  or empty string
 *
 *  Your overloaded constructor is using your implemented
 *  Mutators to set the values of the variables.
 *
 *  Use this -> where you think it is appropriate
 *
 *  To read records back into the array, look into
 *  istringstream. There are other ways to do it, but I
 *  find it particularly easy to use.
 *
 *  DUE THURSDAY MARCH 23.
 *******************************************************
*/

#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <random>

using namespace std;

class Employee {
private:
  int emplNum;
  string fName;
  string lName;
  double income;

public:
  int getEmplNum() const { return this->emplNum; }
  void setEmplNum(int e) { this->emplNum = e; }

  string getFirstName() const { return this->fName; }
  void setFirstName(string f) { this->fName = f; }

  string getLastName() const { return this->lName; }
  void setLastName(string l) { this->lName = l; }

  double getIncome() const { return this->income; }
  void setIncome(double i) { this->income = i; }

  Employee() : emplNum(0), fName(""), lName(""), income(0) {}

  Employee(int n, string f, string l, double i) {
    setEmplNum(n);
    setFirstName(f);
    setLastName(l);
    setIncome(i);
  }
};

/// Function Prototypes
void printArr(const Employee[], const int);
void sortArray(Employee[], const int);
void WriteArrToFile(const string, const Employee[], const int);
void readClassDataToArray(Employee[], int&);
int getRand(int min, int max) {return min + (rand() % (max - min + 1));}


ostream &operator<<(ostream &o, const Employee &e);

int main() {
  int SIZE = 8;
  Employee emplArr[] = {Employee(5, "John", "Doe", 2000),
                        Employee(2, "Peter", "Doe", 2500),
                        Employee(1, "George", "Turner", 7450),
                        Employee(7, "Hannah", "Johnson", 10988),
                        Employee(4, "Betty", "Peterson", 10000),
                        Employee(1, "Peter", "Ture", 17450),
                        Employee(7, "Colin", "Johnson", 10988),
                        Employee(4, "Holy", "shit", 100000)};

  cout << "This is the records in the Employee Array" << endl;
  printArr(emplArr, SIZE);

  /// Write the records to the a file called emplUnsort.txt
  WriteArrToFile("emplUnsort.txt", emplArr, SIZE);

  /// Sort by income, Highest to lowest.
  cout << "\nThis is the SORTED records in the Employee Array" << endl;
  sortArray(emplArr, SIZE);

  printArr(emplArr, SIZE);

  /// Write the records to the a file called emplSort.txt
  WriteArrToFile("emplSort.txt", emplArr, SIZE);

  /// Use this function to read data from file into the array.
  /// Create a txt file by copying the data from emplUnsort and add 10 new
  /// records.
  readClassDataToArray(emplArr, SIZE);

  return 0;
}

/// Function implementation
void printArr(const Employee arr[], const int SIZE) {
  for (int i = 0; i < SIZE; i++) {
    cout << arr[i] << endl;
  }
}

void WriteArrToFile(const string fn, const Employee arr[], const int SIZE) {
  ofstream ofs(fn);
  if (ofs.good()) {
    for (int i = 0; i < SIZE; i++) {
      ofs << arr[i] << "\n";
    }
    ofs.close();
  }
}

void readClassDataToArray(Employee arr[], int& SIZE) {
  SIZE += 10;
  int pos = 0;
  Employee* newArr = new Employee[SIZE];

  ifstream ifs("emplUnsort.txt");
  if (ifs.good()) {
    string line;
    while (getline(ifs, line)) {
      int n; string f; string l; double i;
      istringstream iss(line);
      iss >> n >> l >> f >> i;
      newArr[pos] = Employee(n, f, l, i);
      pos++;
    }
  }

  for (int i = pos; i < SIZE; i++) {
    newArr[i] = Employee(getRand(1,14), "asdf", "jones", getRand(50000,200000));
  }
  
  cout << "unsorted array with new elements: " << endl;
  printArr(newArr, SIZE);
  cout << "sorted array with new elements: " << endl;
  sortArray(newArr, SIZE);
  printArr(newArr, SIZE);

  delete[] newArr;
}

void sortArray(Employee arr[], const int SIZE) {
  int i, j;
  bool sorted = false;
  while (!sorted) {
    sorted = true;
    for (i = 0; i < SIZE - 1; i++) {
      int s = i;
      for (j = i + 1; j < SIZE; j++) {
        if (arr[i].getEmplNum() > arr[j].getEmplNum()) {
          s = j;
        }
      }
      if (s != i) {
        swap(arr[i], arr[s]);
        sorted = false;
      }
    }
  }
}

ostream &operator<<(ostream &o, const Employee &e) {
  o << e.getEmplNum() << " " << e.getLastName() << " " << e.getFirstName()
    << " " << e.getIncome();
  return o;
}
