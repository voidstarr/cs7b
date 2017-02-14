//By Ivan Lopez
//Rainfall statistics: Modular program that analyzes a years worth of rainfall data. 
//needs getData:accepts total rainfall for each of 12 months, stores it in double array.
//compute and return to main: totalRainfall, averageRainfall, driestMonth, wettestMonth last two return
//number of month with lowest and highest rainfall amount.

#include <iostream>
#include <array>
#include <iomanip>
#include <string>

using namespace std;

const int YEAR = 12;
double getData(double[YEAR]);
//Computational functions
double totalRainfall(double[YEAR]);
double averageRainfall(double[YEAR]);
//Computes Numbers of month with lowest and highest rainfall amount respectively.
double driestMonth(double[YEAR]);
double wettestMonth(double[YEAR]);

int main()
{
	double rain[YEAR];
	getData(rain);
	int dryMonth = 0,
		wetMonth = 0;
	const string months[12] = 
	{ "January","February","March","April","May","June","July","August","September","October","November","December" };
	//Output
	cout << "      2017 Rain Report for Palm Desert" << endl << endl;
	cout << "Total Rainfall: " << totalRainfall(rain) << " inches" << endl;
	cout << "Average Rainfall: " << averageRainfall(rain) << " inches" << endl;
	//detects dry month pos.
	for (int j = 0; j < YEAR; j++) {
		if (driestMonth(rain) == rain[j])
			dryMonth = j;
	}
	cout << "Driest month is " << months[dryMonth] << " With " << driestMonth(rain) << " inches of rain" << endl;
	//wettest month position
	for (int j = 0; j < YEAR; j++) {
		if (wettestMonth(rain) == rain[j])
			wetMonth = j;
	}
	cout << "Wettest month is " << months[wetMonth] << " With " << wettestMonth(rain) << " inches of rain" << endl;

    return 0;
}

double getData(double rainMonth[YEAR])
{
	cout << "Please input the amount of rain in inches for all 12 months: ";
	for (int i = 0; i < YEAR; i++) {
		cin >> rainMonth[i];
	}
	return rainMonth[YEAR];
}

double totalRainfall(double ADD[YEAR])
{
	double counter = 0.0;
	for (int i = 0; i < YEAR; i++) {
		counter += ADD[i];
	}
	return counter;
}

double averageRainfall(double AVERAGE[YEAR])
{

	return (totalRainfall(AVERAGE) / YEAR);
}

double driestMonth(double DRY[YEAR])
{
	double smallest = DRY[0];
	
	for (int i = 0; i < YEAR; i++) {
		if (DRY[i] < smallest)
			smallest = DRY[i];
	}

	return smallest;
}

double wettestMonth(double WET[YEAR])
{
	double largest = WET[0];
	
	for (int i = 0; i < YEAR; i++) {
		if (WET[i] > largest)
			largest = WET[i];
	}

	
	
	return largest;
}
