// This program stores employee work hours in an int array. It uses
// one loop to input the hours and another loop to display them.
#include <iostream>
using namespace std;

int main()
{
   const int NUM_EMPLOYEES = 6;    
   int hours[NUM_EMPLOYEES];      // Holds hours worked for 6 employees
   int count;                     // Loop counter

	// Input the hours worked by each employee
   cout << "Enter the hours worked by " << NUM_EMPLOYEES 
        << " employees: ";
		  
   for (count = 0; count < NUM_EMPLOYEES; count++)
      cin >> hours[count];

	// Display the contents of the array
	cout << "The hours you entered are:";
	
	for (count = 0; count < NUM_EMPLOYEES; count++)
		cout << " " << hours[count];
		
	cout << endl;
	return 0;
}
