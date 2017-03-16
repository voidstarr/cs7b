#pragma once
#include <iostream>
#include <stdexcept>
#include <cctype>
#include <sstream>


class DayOfYear {
    public:
        DayOfYear(int d) {
            this->doy = d;
            convert2MonthAndDay();
            monthAndDay = false;
        }

        DayOfYear(std::string m, int d) {
            this->month = m;
            int cm = -1;
            for(int i = 0; i < 12; i++)
                if (toLower(m) == toLower(months[i]))
                    cm = i;
            if (cm == -1)
                throw std::invalid_argument("month must be valid!");
            this->day = d;
            if (d > daysInMonth[cm])
                throw std::invalid_argument("day must be within valid range!");
            convert2DayOfYear();
            monthAndDay = true;
        }

        void print();
    private:
        bool monthAndDay;

        void convert2MonthAndDay();
        void convert2DayOfYear();

        int day;
        std::string month;

        int doy;
        static std::string months[];
        static int daysInMonth[];
        
        static std::string toLower(std::basic_string<char>&);


};
