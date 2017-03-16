#include "dayofyear.h"
#include <iostream>

void option1();
void option2();

int main() {
  do {
    std::cout << "Enter an option: " << std::endl
              << "1. Day of Year -> Month and Day" << std::endl
              << "2. Month and Day -> Day of Year" << std::endl;

    int choice;
    std::cin >> choice;

    if (choice == 1) {
      option1();
    } else if (choice == 2) {
      option2();
    } else {
      std::cout << "Invalid choice." << std::endl << std::endl;
    }
  } while (true);
  return 0;
}

void option2() {
  do {
    std::cout << "Enter a month:" << std::endl << ">> ";
    std::string m;
    std::cin.ignore();
    std::getline(std::cin, m);
    int d;
    std::cout << "Enter a number between 1 and 31 or not to return to menu:"
              << std::endl
              << ">> ";
    std::cin >> d;
    if (!(d > 0 && d < 32)) {
      return;
    }

    DayOfYear doy(m, d);
    doy.print();

    std::cout << std::endl << std::endl;
  } while (true);
}

void option1() {
  int d;
  do {
    std::cout << "Enter a positive number less than 366!" << std::endl << ">> ";
    std::cin >> d;

    if (d < 1) {
      std::cout << "positive numbers only!" << std::endl << std::endl;
      break;
    }
    if (d > 365) {
      std::cout << "numbers less than 366 only!" << std::endl << std::endl;
      break;
    }

    DayOfYear doy(d);
    doy.print();

    std::cout << std::endl << std::endl;
  } while (true);
}
