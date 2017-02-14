#include <iostream>
#include "car.h"


int main() {
    Car car(1992, "test");
    for (int i = 0; i < 5; i++) {
        car.accelerate();
        std::cout << car.getSpeed() << std::endl;
    }

    for (int i = 0; i < 5; i++) {
        car.brake();
        std::cout << car.getSpeed() << std::endl;
    }
    return 0;
}
