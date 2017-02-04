// This program demonstrates how an overloaded constructor 
// that accepts an argument can be invoked for multiple objects 
// when an array of objects is created.
#include <iostream>
#include <iomanip>
#include "Circle.h"         // Circle class declaration file
using namespace std;

const int NUM_CIRCLES = 4;

int main()
{
	// Define an array of 4 Circle objects. Use an initialization list
	// to call the 1-argument constructor for the first 3 objects.
	// The default constructor will be called for the final object.
	Circle circle[NUM_CIRCLES] = {0.0, 2.0, 2.5};       
	              
	// Display the area of each object
	cout << fixed << showpoint << setprecision(2);
	cout << "\nHere are the areas of the " << NUM_CIRCLES 
	     << " circles.\n";
		  
	for (int index = 0; index < NUM_CIRCLES; index++)
	{	cout << "circle " << (index+1) << setw(8)
		     << circle[index].findArea() << endl;
	}
	return 0;
}
