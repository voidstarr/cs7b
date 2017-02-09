#include "heading.h"

void Heading::printReport(int w) {
    switch (w) {
        case 0:
            oneLineReport();
            break;
        case 1:
            fourLineReport();
            break;
        default:
            return;
    }        
}

void Heading::oneLineReport() {
    centerString(companyName + " " + reportName);
    std::cout << std::endl;
}

void Heading::fourLineReport() {
    centerString(stars);
    centerString(companyName);
    centerString(reportName);
    centerString(stars);
    std::cout << std::endl;
}

void Heading::centerString(std::string s)
{
    int l = s.length();
    int pos = (int)((consoleWidth - l) / 2);
    for(int i = 0; i < pos; i++)
        std::cout << " ";
    std::cout << s << std::endl;
}

void Heading::setWidth(int w) {
    consoleWidth = w;
}
