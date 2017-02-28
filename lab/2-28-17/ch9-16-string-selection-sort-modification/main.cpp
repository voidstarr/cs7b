#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>

void printArray(std::vector<std::string>);
void selectionSort(std::vector<std::string>&);
int binarySearch(std::vector<std::string>, std::string);
void readFile(std::vector<std::string>&);

int main() {
  /*std::string name[SIZE] = {
      "Collins, Bill",  "Smith, Bart",  "Michalski, Joe", "Griffin, Jim",
      "Sanchez, Manny", "Rubin, Sarah", "Taylor, Tyrone", "Johnson, Jill",
      "Allison, Jeff",  "Moreno, Juan", "Wolfe, Bill",    "Whitman, Jean",
      "Moretti, Bella", "Wu, Hong",     "Patel, Renee",   "Harrison, Rose",
      "Smith, Cathy",   "Conroy, Pat",  "Kelly, Sean",    "Holland, Beth"};*/
  std::vector<std::string> name;

  readFile(name);

  std::cout << "unsorted:" << std::cout;

  printArray(name);

  selectionSort(name);

  std::cout << "sorted:" << std::endl;

  printArray(name);

  std::string searchName;
  std::cout << "enter name for which to search: ";
  std::getline(std::cin, searchName);
  int idx = binarySearch(name, searchName);

  if (idx > -1)
    std::cout << "Found " << searchName << " at idx(" << idx << ")"
              << std::endl;
  else
    std::cout << "Unable to find " << searchName << "." << std::endl;

  return 0;
}

void readFile(std::vector<std::string> &arr) {
    std::ifstream ifs("names.dat");
    if (ifs.good()) {
      std::string first, last, line;
      while (std::getline(ifs, line)) {
          //std::cout << line << std::endl;
          arr.push_back(line);
      }
      std::cout << "arr size after read: " << arr.size() << std::endl;
      ifs.close();
    }
}

void printArray(std::vector<std::string> arr) {
  /*for (int i = 0; i < arr.size(); i++) {
    std::cout << arr[i];
    if ((i + 1) % 4 == 0)
      std::cout << std::endl;
    else
      std::cout << " ";
  }*/
  for (std::string s : arr) {
    std::cout << s << std::endl;
  }
}

void selectionSort(std::vector<std::string> &array) {
  int startScan, minIndex;
  std::string minValue;

    std::cout << "in selectionSort. arr size: " << array.size() << std::endl;

  for (startScan = 0; startScan < (array.size() - 1); startScan++) {
    minIndex = startScan;
    minValue = array[startScan];
    for (int index = startScan + 1; index < array.size(); index++) {
      if (array[index] < minValue) {
        minValue = array[index];
        minIndex = index;
      }
    }
    array[minIndex] = array[startScan];
    array[startScan] = minValue;
  }
}

int binarySearch(const std::vector<std::string> arr, std::string val) {
  int start = 0;
  int end = arr.size() - 1;
  int mid = -1;
  bool found = false;

  while (!found && start <= end) {
    mid = (start + end) / 2;
    if (arr.at(mid) == val) {
        std::cout << "arrat(mid)1 :" << arr.at(mid) << std::endl;
      found = true;
    } else if (arr.at(mid) < val) {
        std::cout << "arrat(mid)2 :" << arr.at(mid) << std::endl;
      start = mid + 1;
    } else {
        std::cout << "arrat(mid)3 :" << arr.at(mid) << std::endl;
      end = mid - 1;
    }
  }
  return found ? mid : -1;
}
