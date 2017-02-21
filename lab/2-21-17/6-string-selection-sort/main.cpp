#include <iostream>

void printArray(std::string[], int);
void selectionSort(std::string[], int);

int main() {
  const int SIZE = 20;
  string name[SIZE] = {"Collins, Bill",  "Smith, Bart",  "Michalski, Joe",
                       "Sanchez, Manny", "Rubin, Sarah", "Taylor, Tyrone",
                       "Allison, Jeff",  "Moreno, Juan", "Wolfe, Bill",
                       "Moretti, Bella", "Wu, Hong",     "Patel, Renee",
                       "Smith, Cathy",   "Conroy, Pat",  "Kelly, Sean"};
  std::cout << "unsorted:" << std::cout;

  printArray(name, SIZE);

  selectionSort(name, SIZE);

  std::cout << "sorted:" << std::endl;

  printArray(name, SIZE);
  return 0;
}

void printArray(std::string arr[], int NUM_NAMES) {
  for (int i = 0; i < NUM_NAMES; i++) {
    std::cout << arr[i];
    if ((i + 1) % 4 == 0)
      std::cout << std::endl;
    else
      std::cout << " ";
  }
}

void selectionSort(std::string array[], int NUM_NAMES) {
  int startScan, minIndex;
  std::string minValue;

  for (startScan = 0; startScan < (NUM_NAMES - 1); startScan++) {
    minIndex = startScan;
    minValue = array[startScan];
    for (int index = startScan + 1; index < NUM_NAMES; index++) {
      if (array[index] < minValue) {
        minValue = array[index];
        minIndex = index;
      }
    }
    array[minIndex] = array[startScan];
    array[startScan] = minValue;
  }
}
