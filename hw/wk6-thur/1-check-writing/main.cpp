#include "number.h"
#include <iostream>

int main() {
  int input;
  do {
    std::cout << "Enter a number between 0 and 9999, and it will be translated "
                 "to words."
              << std::endl
              << "Enter a negative value to exit." << std::endl
              << ">> ";
    std::cin >> input;
    if (input < 0)
        break;
    if (input > 9999) {
        std::cout << "Input must be less than 9999." << std::endl << std::endl;
        continue;
    }
    
    Number n(input);
    n.print();
    std::cout << std::endl << std::endl;
  } while (true);
  return 0;
}
