#include "employee.h"
#include <ctime>
#include <iostream>
#include <random>

int getRand(int min, int max) { return min + (rand() % (max - min + 1)); }

int main() {
  srand(time(0));
  Employee e;
  e.readFileToArr("emplUnsort.txt");
  e.printArr();
  std::cout << std::endl << std::endl;
  for (int i = 0; i < 10; i++)
    e.addRecord(getRand(0, 40), "andy", "jones", getRand(1000, 1204105));
  e.printArr();
  std::cout << std::endl << std::endl;
  e.sortArr();
  e.printArr();
  e.writeArrToFile("emplSort.txt");
  return 0;
}
