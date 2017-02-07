#ifndef INTRANGE2_H
#define INTRANGE2_H  

#include <iostream>
using namespace std;

class IntRange2
{
private:
   int input;	// For user input
   int lower;	// Lower limit of range
   int upper;	// Upper limit of range
public:
   // Exception classes
   class TooLow { };	
   class TooHigh { };
   // Member functions
   IntRange2(int low, int high)	// Constructor
   { 
      lower = low; 
      upper = high;
   }
   int getInput()
   {
      cin >> input;
      if (input < lower)
	   throw TooLow();
      else if (input > upper)
	   throw TooHigh();
      return input;
   }
};
#endif