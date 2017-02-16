#include <iostream>
#include <string>

#include <stdio.h>
#include <sys/ioctl.h>
#include <unistd.h>


void getData(double[]);
void displayReport(double[],int);
void centerString(std::string, int width);

double totalRainfall(double[]);
double averageRainfall(double[]);
int driestMonth(double[]);
int wettestMonth(double[]);

const std::string months[12] = {"January","February","March","April","May","June","July","August","September","October","November","December"};

int main() {
    // get console width
    int width;
    struct winsize w;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
    width = w.ws_col;
    // -----------------
    double rainfallData[12];
    getData(rainfallData);
    displayReport(rainfallData, width);

    return 0;
}

void centerString(std::string s, int consoleWidth) {
    int l = s.length();
    int pos = (int)((consoleWidth - l) / 2);
    for (int i = 0; i < pos; i++)
        std::cout << " ";
    std::cout << s << std::endl;
}

void getData(double monthStats[12]) {
    std::cout << "Please input the amount of rainfall for each month:" << std::endl;
    for (int i = 0; i < 12; i++) {
        std::cout << months[i] << ": ";
        std::cin >> monthStats[i];
    }
}

void displayReport(double year[], int w) {
    centerString("2017 Rain Report for Coachella Valley",w);
    centerString("Total rainfall: " + std::to_string(totalRainfall(year)) + " inches.", w);
    centerString("Average rainfall: " + std::to_string(averageRainfall(year)) + " inches.",w);
    int least = driestMonth(year);
    centerString("The least rain fell in " + (months[least]) + " with " + std::to_string(year[least]) + " inches.",w);
    int most = wettestMonth(year);
    centerString("The most rain fell in " + (months[most]) + " with " + std::to_string(year[most]) + " inches.",w);
}

double totalRainfall(double year[]){
    double total;
    for (int i = 0; i < 12; i++)
        total += year[i];
    return total;
}
double averageRainfall(double year[]){
    return totalRainfall(year) / 12;
}
int driestMonth(double year[]){
    int driest = year[0];
    for (int i = 1; i < 12; i++)
        if (driest > year[i])
            driest = i;
    return driest;
}
int wettestMonth(double year[]){
    int wettest = year[0];
    for (int i = 1; i < 12; i++)
        if (wettest < year[i])
            wettest = i;
    return wettest;
}

