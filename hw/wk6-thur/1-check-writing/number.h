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
        static std::string lessThan20[];
        static std::string tensPlace[];
        static std::string hundred;
        static std::string thousand;

};
