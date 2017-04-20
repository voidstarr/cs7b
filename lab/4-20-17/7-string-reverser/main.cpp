#include <iostream>

void reverse(const char*, int);


int main() {
    std::string asdf;
    std::cout << "gimme your best shot" << std::endl;
    std::getline(std::cin, asdf);

    reverse(asdf.c_str(), asdf.length());
    std::cout << std::endl;
}

void reverse(const char* str, int size) {
    if (size >= 0) {
        std::cout << str[size-1];
        reverse(str, size-1);
    }

}
