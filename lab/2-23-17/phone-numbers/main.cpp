#include "record.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <stdio.h>
#include <vector>

void readRecords(std::string, std::vector<Record> &);
void sortRecords(std::vector<Record> &);
void printRecords(std::vector<Record>);
void writeRecords(std::string, std::string, std::vector<Record>);

int main() {
  std::vector<Record> records;
  readRecords("numbers.txt", records);
  std::cout << "Unsorted:" << std::endl;
  printRecords(records);

  sortRecords(records);

  std::cout << "Sorted:" << std::endl;
  printRecords(records);

  writeRecords("temp.txt", "numbers.txt", records);

  return 0;
}

void printRecords(std::vector<Record> r) {
  for (int i = 0; i < r.size(); i++) {
    std::cout << r[i] << std::endl;
  }
  std::cout << std::endl;
}

void readRecords(std::string filename, std::vector<Record> &r) {
  std::ifstream ifs(filename);
  if (ifs.good()) {
    std::string first, last, line;
    long int number;

    while (std::getline(ifs, line)) {
      std::istringstream iss(line);
      iss >> first >> last >> number;
      if (last.find(',') != std::string::npos) {
        last = last.substr(0, last.size() - 1);
      }
      Record n(first, last, number);
      r.push_back(n);
    }
    ifs.close();
  } else {
    std::cout << filename << "file not open" << std::endl;
  }
}

void writeRecords(std::string tmpfile, std::string rewrite,
                  std::vector<Record> r) {
  std::ofstream ofs(tmpfile);
  if (ofs.good()) {
    for (Record rc : r) {
      ofs << rc << std::endl;
    }
  }
  ofs.close();

  std::rename(tmpfile.c_str(), rewrite.c_str());
}

void sortRecords(std::vector<Record> &r) {
  bool swapped = true;
  int size = r.size() - 1;
  while (swapped) {
    swapped = false;
    for (int i = 0; i < size; i++) {
      if (r[i].getLastName() > r[i + 1].getLastName()) {
        std::swap(r[i], r[i + 1]);
        swapped = true;
      }
    }
  }
}
