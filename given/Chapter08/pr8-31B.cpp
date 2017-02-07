// This version of Program 8-30 demonstrates how the default
// constructor initializes values for each object in an array.
#include <iostream>
#include <iomanip>
#include "Circle.h"              // Circle class declaration file
using namespace std;

const int NUM_CIRCLES = 4;

int main()
{	
	Circle circle[NUM_CIRCLES];  // Define an array of Circle objects
	   	              
	// Use a loop to initialize the radius of each object
	//	for (int index = 0; index < NUM_CIRCLES; index++)
	//	{   double r; 
	//		cout << "Enter the radius for circle " << (index+1) << ": ";
	//		cin  >> r;
	//		circle[index].setRadius(r);
	//	}
	
	// Use a loop to get and print out the area of each object
	cout << fixed << showpoint << setprecision(2);
	cout << "\nHere are the areas of the " << NUM_CIRCLES 
         << " circles.\n";
	for (int index = 0; index < NUM_CIRCLES; index++)
	{  cout << "circle " << (index+1) << setw(8)
            << circle[index].findArea() << endl;
	}
	return 0;
}
