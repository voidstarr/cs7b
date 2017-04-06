#include <iostream> 
#include <string>
#include <sstream>
#include <iomanip>

std::string dollarFormat(std::string);
std::string dollarFormat(double);

int main() {
    std::string input;

    std::cout << "Enter dollar amount in the form nnnnn.nn : ";
    std::cin >> input;

    double in;
    std::cout << "Enter another amount in the form nnnnn.nn : ";
    std::cin >> in;

    std::cout << "Formatted amount:   " << dollarFormat(input) << std::endl;
    std::cout << "Formatted amount:   " << dollarFormat(in) << std::endl;
    return 0;
}

std::string dollarFormat(std::string original) {
    std::string formatted = original;
    int dp = formatted.find('.');
    int pos = dp;

    while (pos > 3) {
        pos = pos - 3;
        formatted.insert(pos, ",");
    }

    formatted.insert(0, "$");
    return formatted;
}

std::string dollarFormat(double amount) {
    std::stringstream orig;
    orig << std::fixed << std::setprecision(2) << amount;
    return dollarFormat(orig.str());
}
