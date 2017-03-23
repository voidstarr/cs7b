#include "employee.h"
#include <iostream>
#include <random>
#include <ctime>

int getRand(int min, int max) { return min + (rand() % (max - min + 1)); }


int main() {
  srand(time(0));
  Employee e;
  e.readFileToArr("emplUnsort.txt");
  e.printArr();
  std::cout << std::endl << std::endl;
  e.addRecord(getRand(0,40), "andy", "jones", getRand(1000,1204105));
  e.printArr();
  std::cout << std::endl << std::endl;
  e.sortArr();
  e.printArr();
  e.writeArrToFile("emplSort.txt");
  return 0; 
}
