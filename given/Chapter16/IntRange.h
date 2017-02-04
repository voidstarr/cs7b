#ifndef INTRANGE_H
#define INTRANGE_H   

#include <iostream>
using namespace std;

class IntRange
{
private:
  int input;	// For user input
  int lower;	// Lower limit of range
  int upper;	// Upper limit of range
public:
// Exception class
  class OutOfRange { };	 // Empty class declaration
// Member functions
	IntRange(int low, int high)	// Constructor
	{ 
		lower = low;
	   upper = high; 
	}
	int getInput()
	{
	  cin >> input;
	  if (input < lower || input > upper)
	     throw OutOfRange();
	  return input;
   }
};
#endif