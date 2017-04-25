#include <iostream>

template <class T>
T square(T num) {
    return num * num;
}

int main() {
    std::cout << square(4) << " " << square(4.5) << " " <<  std::endl;
    return 0;
}
