#include <iostream>
#include "test.h"

void sortAsc(Test *, int);
float average(Test *, int);
void printTests(Test *, int);

int main() {
  int numTests;
  std::cout << "please enter number of test scores: ";
  std::cin >> numTests;
  
  Test *tests = new Test[numTests];
  
  std::cout << "expected input: <student's name> <student's score>" << std::endl;
  
  std::cin.ignore();
  
  for (int i = 0; i < numTests; i++) {
    Test* test = tests + i;

    std::cout << "student/score " << (i + 1) << ": ";
    std::string line;
    std::getline(std::cin, line);
    
    int delim = line.find_last_of(' ');
    (*test).score = std::stoi(line.substr(delim, line.size()-1));
    (*test).student = line.substr(0, delim);

    if ((*test).score < 0) {
      i--;
      std::cout << "non-negative numbers!" << std::endl;
    }
  }

  sortAsc(tests, numTests);

  std::cout << "average score: " << average(tests, numTests) << std::endl << std::endl;

  printTests(tests, numTests);

  delete[] tests;
  return 0;
}

void sortAsc(Test *tests, int size) {
  int i, j, min;
  for (i = 0; i < size - 1; i++) {
    min = i;
    for (j = i + 1; j < size; j++) {
      if ((*(tests + j)).score < (*(tests + min)).score) {
        min = i;
      }
    }
    if (min != i)
      std::swap(*(tests + i), *(tests + min));
  }
}

void printTests(Test *tests, int size) {
  for (int i = 0; i < size; i++) 
    std::cout << *(tests + i) << std::endl;
}

float average(Test *tests, int size) {
  float average = 0;
  for (int i = 0; i < size; i++) {
    average += (*(tests + i)).score;
  }
  return average / size;
}
