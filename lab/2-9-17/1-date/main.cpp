#include "date.h"
#include <iostream>

const int daysOfMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

void nope();

int main() {
  int m, d, y;
  while (true) {
    std::cout << "enter month: ";
    std::cin >> m;
    if (m < 1 || m > 12) {
      nope();
      break;
    }
    std::cout << "enter day: ";
    std::cin >> d;
    if (d < 1 || d > daysOfMonth[m - 1]) {
      nope();
      break;
    }
    std::cout << "enter year: ";
    std::cin >> y;
    if (y < 0) {
      nope();
      break;
    }

    Date date(m, d, y);
    date.printDate(0);
    date.printDate(1);
    date.printDate(2);

    std::cout << std::endl
              << "would you like to play again? (y/n)" << std::endl
              << ">> ";
    char resp;
    std::cin >> resp;
    if (resp != 'y') {
      std::cout << "KTHXBAI!" << std::endl;
      return -1;
    }
  }
  return 0;
}

void nope() { std::cout << "bad input, try again!" << std::endl; }
