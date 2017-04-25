#include <iostream>

template<class T>
T max(T a, T b) {
    return (a > b) ? a : b;
}

template<class T>
T min(T a, T b) {
    return (a < b) ? a : b;
}

int main() {
    int a(4), b(6);
    char c(45), d(65);
    long e(423), f(5254);

    std::cout << "max(" << a << "," << b << ") = " << max(a,b) << std::endl;
    std::cout << "max(" << c << "," << d << ") = " << max(c,d) << std::endl;
    std::cout << "max(" << e << "," << f << ") = " << max(e,f) << std::endl;

    std::cout << "min(" << a << "," << b << ") = " << min(a,b) << std::endl;
    std::cout << "min(" << d << "," << d << ") = " << min(c,d) << std::endl;
    std::cout << "min(" << e << "," << f << ") = " << min(e,f) << std::endl;

    return 0;
}


