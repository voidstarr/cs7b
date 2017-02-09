#pragma once
#include <string>

class Heading {
    public:
        Heading(): companyName("ABC Industries"), reportName("Report") {};
        Heading(std::string c, std::string r): companyName(c), reportName(r) {};
        void printReport(int);
    private:
        std::string companyName;
        std::string reportName;

};
