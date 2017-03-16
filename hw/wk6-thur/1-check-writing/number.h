#pragma once
#include <iostream>
#include <sstream>
class Number {
    public:
        Number(int n) {
            if (n >= 0) {
                number = n;
            }
        }
        void print();
    private:
        int number;
        const static std::string lessThan20[];
        const static std::string tensPlace[];
        const static std::string hundred;
        const static std::string thousand;

};
