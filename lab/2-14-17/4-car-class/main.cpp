#include "car.h"
#include <iostream>
#include <string>

int main() {
  while (true) {
    std::string make;
    int year;

    std::cout << "What model of car are you driving?" << std::endl << ">> ";
    std::cin >> make;

    std::cout << "In what year was it made?" << std::endl << ">> ";
    std::cin >> year;
    
    if (year <= 0) {
        std::cout << "year must be greater than 0!" << std::endl << std::endl << std::endl;
        continue;
    }

    Car car(year, make);

    std::cout << "You bump down the road in your " << car.getYear() << " "
              << car.getMake() << "." << std::endl;

    for (int i = 0; i < 5; i++) {
      car.accelerate();
      std::cout << car.getSpeed() << std::endl;
    }

    std::cout << "Time to chill by the beach." << std::endl;

    for (int i = 0; i < 5; i++) {
      car.brake();
      std::cout << car.getSpeed() << std::endl;
    }
  }
  return 0;
}
