#include <iostream>

void printArray(std::string[], int);
void selectionSort(std::string[], int);
int binarySearch(const std::string[], int, std::string);

int main() {
  const int SIZE = 20;
  std::string name[SIZE] = {
      "Collins, Bill",  "Smith, Bart",  "Michalski, Joe", "Griffin, Jim",
      "Sanchez, Manny", "Rubin, Sarah", "Taylor, Tyrone", "Johnson, Jill",
      "Allison, Jeff",  "Moreno, Juan", "Wolfe, Bill",    "Whitman, Jean",
      "Moretti, Bella", "Wu, Hong",     "Patel, Renee",   "Harrison, Rose",
      "Smith, Cathy",   "Conroy, Pat",  "Kelly, Sean",    "Holland, Beth"};
  std::cout << "unsorted:" << std::cout;

  printArray(name, SIZE);

  selectionSort(name, SIZE);

  std::cout << "sorted:" << std::endl;

  printArray(name, SIZE);

  std::string searchName;
  std::cout << "enter name for which to search: ";
  std::getline(std::cin, searchName);
  int idx = binarySearch(name, SIZE, searchName);

  if (idx > -1)
    std::cout << "Found " << searchName << " at idx(" << idx << ")" << std::endl;
  else
     std::cout << "Unable to find " << searchName << "." << std::endl;

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

int binarySearch(const std::string arr[], int size, std::string val) {
  int start = 0;
  int end = size - 1;
  int mid = -1;
  bool found = false;

  while (!found && start <= end) {
    mid = (start + end) / 2;
    if (arr[mid] == val) {
      found = true;
    } else if (arr[mid] < val) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }
  }
  return found ? mid : -1;
}
