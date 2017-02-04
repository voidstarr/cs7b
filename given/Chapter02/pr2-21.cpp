// This program converts seconds to minutes and seconds.
// It uses integer division and the modulus operator.
#include <iostream>
using namespace std;

int main()          
{
   int totalSeconds = 125,      // Number of seconds to be converted
       minutes,                 // Number of minutes in totalSeconds
	   seconds;                 // Number of seconds remaining       
   
   // Calculate the number of minutes
   minutes = totalSeconds / 60;
  
   // Calculate the remaining seconds
   seconds = totalSeconds % 60;
  
   // Display the results
   cout << totalSeconds << " seconds is equivalent to ";
   cout << minutes << " minutes and " << seconds << " seconds. \n";
   
   return 0;
}
