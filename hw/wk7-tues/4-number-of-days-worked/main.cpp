#include "numdays.h"
#include <iostream>

void option1();
void option2();
void option3();

int main() {
  int choice = 0;
  do {
    std::cout << "1: Hours to days" << std::endl
              << "2: increment and decrement NumDays" << std::endl
              << "3: add and subtract NumDays" << std::endl
              << "0: QUIT" << std::endl
              << ">> ";
    int choice;
    std::cin >> choice;
    std::cout << choice << std::endl;
    switch (choice) {
    case 1:
      option1();
      break;
    case 2:
      option2();
      break;
    case 3:
      option3();
      break;
    default:
      std::cout << "incorrect choice! try again." << std::endl << std::endl;
      break;
    }
  } while (choice > 0);
  return 0;
}

// hours to days simple
void option1() {
  int input;
  do {
    std::cout << "enter a number to be divided by 8" << std::endl << ">> ";
    std::cin >> input;
    NumDays nd(input);

    std::cout << "hours worked: " << std::endl
              << input << std::endl
              << "days worked: " << std::endl
              << nd.getDays() << std::endl;
  } while (input > 0);
}

// inc and dec
void option2() {
  int choice = 0;

  std::cout << std::endl << "enter number of hours" << std::endl << ">> ";
  std::cin >> choice;
  if (choice <= 0) {
    std::cout << "positive numbers please!" << std::endl;
    return;
  }
  NumDays nd(choice);
  nd.printDays();
  do {
    std::cout << "0: QUIT" << std::endl
              << "1: increment hours" << std::endl
              << "2: decrement hours" << std::endl
              << ">> ";

    std::cin >> choice;
    std::cout << std::endl;
    if (choice == 1) {
      nd++;
    } else if (choice == 2) {
      nd--;
    } else if (choice == 0) {
        return;
    } else {
      std::cout << "incorrect input!" << std::endl;
      continue;
    }
    nd.printDays();
    std::cout << std::endl;

  } while (choice > 0);
}

// add and subtract
void option3() {
    int input = 0;
    int op = 0;
    do {
        std::cout << "0: QUIT" << std::endl
                  << "1: add" << std::endl
                  << "2: subtract" << std::endl
                  << ">> ";
        std::cin >> op;
        std::cout << op << std::endl;

        if (op <= 0) {
            break;
        } else if (op != 2 && op != 1) {
            std::cout << "Invalid choice!" << std::endl;
            continue;
        }

        std::cout << "Input number of hours for employee 1:" << std::endl
                  << ">> ";
        std::cin >> input;
        NumDays e1(input);
        
        std::cout << "Input number of hours for employee 2:" << std::endl
                  << ">> ";
        std::cin >> input;
        NumDays e2(input);

        NumDays e3;
        if (op == 1)
            e3 = e1 + e2;
        else if (op == 2)
            e3 = e1 - e2;

        std::cout << "result: " << std::endl;
        e3.printDays();

    } while(input > 0);    

}
