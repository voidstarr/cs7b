#include <iostream>
#include "simplevector.h"

int main() {
    SimpleVector<int> test(10);
    test[0] = 10;
    test[1] = 935;
    test[2] = 958350;
    test[3] = -1584;
    test.push_back(75);
    test.print();
    std::cout << std::endl << std::endl;
    test.pop_back();
    test.print();
    return 0;
}
