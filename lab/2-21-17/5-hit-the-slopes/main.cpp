#include "day.h"
#include <iostream>


void bubbleSort(Day[7], int);


int main() {
  std::string month;
  int startDay, endDay;
  Day week[7] = {};

  std::cout << "Please enter the month for this report: ";
  std::cin >> month;
  std::cout << "Enter the starting date of the reporting period: ";
  std::cin >> startDay;
  std::cout << "Now, enter the ending date of the reporting period: ";
  std::cin >> endDay;

  if ((endDay - startDay) != 7) {
    std::cout << "The defined period is not 7 days in length. Please try again." 
              << std::endl;
    return -1;
  }

  for (int i = 0; i < 7; i++) {
    double val;
    std::cout << "Enter base snow depth for day " << (i + 1) << ": ";
    std::cin >> val;
    week[i].setBaseSnow(val);
    week[i].setNumDay(startDay+i);
  }

  bubbleSort(week, 7);

  std::cout << "Snow Report " << month << " " << startDay << " - " << endDay
            << std::endl << "\tDate\tBase" << std::endl;
  for (int i = 0; i < 7; i++) {
    std::cout << "\t" << week[i].getNumDay() << "\t" << week[i].getBaseSnow() 
              << std::endl;
  }



  return 0;
}

void bubbleSort(Day arr[7], int size) {
  bool swapped = true;
  while (swapped) {
    swapped = false;
    for (int i = 0; i < size - 1; i++) {
      if (arr[i].getBaseSnow() > arr[i + 1].getBaseSnow()) {
        std::swap(arr[i], arr[i + 1]);
        swapped = true;
      }
    }
  }
}
