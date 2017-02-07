#ifndef INTRANGE3_H
#define INTRANGE3_H  

#include <iostream>
using namespace std;

class IntRange3
{
private:
   int input;	// For user input
   int lower;	// Lower limit of range
   int upper;	// Upper limit of range
public:
   // Exception class
   class OutOfRange
   {	
   public:
	 int value;	
	 OutOfRange(int i) { value = i; }
   };
   // Member functions
   IntRange3(int low, int high)	// Constructor
   { 
      lower = low; 
      upper = high;
   }
   int getInput()
   { 
	cin >> input;
	if (input < lower || input > upper)
	   throw OutOfRange(input);
	return input;
   }
};
#endif