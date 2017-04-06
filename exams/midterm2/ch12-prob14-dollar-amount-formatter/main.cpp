/*
 * Midterm 2 - Group 2
 *
 * Chapter 12 Problem 14
 *
 * create a function that takes a double and returns a formatted string
 * 
 * The code added is str::string dollarFormat(double)
 *
 * */

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

    // take in our double
    double in;
    std::cout << "Enter another amount in the form nnnnn.nn : ";
    std::cin >> in;

    std::cout << "Formatted amount:   " << dollarFormat(input) << std::endl;
    // output our formatted string
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
    // tell the string stream we want to see all the digits and cut the decimal to 2 digits
    orig << std::fixed << std::setprecision(2) << amount;
    // use our original function and return it's output
    return dollarFormat(orig.str());
}
