#pragma once
#include <iostream>

class DayOfYear {
    public:
        DayOfYear(int d) {
            doy = d;
            convert();
        }

        void print();
    private:
        void convert();

        int day;
        int month;

        int doy;
        static std::string months[];
        static int daysInMonth[];

};
