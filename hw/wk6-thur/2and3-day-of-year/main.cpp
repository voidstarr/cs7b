#include <iostream>
#include "dayofyear.h"

int main() {
    int day;
    do {
        std::cout << "Enter a positive number less than 366!" 
                  << std::endl << ">> ";
        std::cin >> day;
        
        if (day < 1) {
            std::cout << "positive numbers only!" 
                      << std::endl << std::endl;
            continue;
        }
        if (day > 365){
            std::cout << "numbers less than 366 only!"
                      << std::endl << std::endl;
            continue;
        }

        DayOfYear doy(day);
        doy.print();
        
        std::cout << std::endl << std::endl;
    } while (true);
    return 0;
}
