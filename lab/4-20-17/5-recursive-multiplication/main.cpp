#include <iostream>

int multiply(int, int);

int main () {
    int x, y;
    std::cout << "x = ";
    std::cin >> x;
    std::cout << "y = ";
    std::cin >> y;

    std::cout << " x * y = " << multiply(x, y) << std::endl;
}

int multiply (int x, int y) {
    if (x == 0)
        return 0;
    if (x > 0)
        return y + multiply(x-1, y);
    else
        return -multiply(-x, y);
}
