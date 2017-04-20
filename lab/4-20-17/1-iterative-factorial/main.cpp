#include <iostream>

int main() {
    int factorial = 1;
    int input = 3;
    for (int i = input; i > 1; i--) {
        factorial *= i;
    }
    std::cout << input << "! is " << factorial << std::endl;
}
