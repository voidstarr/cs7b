// This program demonstrates the vector empty member function.
#include <iostream>
#include <vector>
using namespace std;

// Function prototype
double avgVector(vector<int>);

int main()
{
	vector<int> values;     // Define a vector to hold int values
	int numValues;          // Number of values to be averaged
	double average;         // Average of the stored values

	// Get the number of values to average
	cout << "How many values do you wish to average? ";
	cin  >> numValues;
	
	// Get the values and store them in a vector
	for (int count = 0; count < numValues; count++)
	{	int tempValue;
		cout << "Enter an integer value: ";
		cin  >> tempValue;
		values.push_back(tempValue);
	}
	// Get the average of the values and display it
	average = avgVector(values);
	cout << "Average: " << average << endl;
	return 0;
}

/**************************************************************
 *                        avgVector                           *
 * This function accepts an int vector as its argument. If    *
 * the vector contains values, the function returns the       *
 * average of those values. Otherwise, an error message is    *
 * displayed and the function returns 0.0.                    *
 **************************************************************/
double avgVector(vector<int> vect)
{
	int total  = 0;       // Accumulator
	double avg = 0.0;      

	if (vect.empty())	    // Determine if the vector is empty 
   	cout << "No values to average.\n";
	else
	{	for (int count = 0; count < vect.size(); count++)
			total += vect[count];
		avg = static_cast<double>(total) / vect.size();
	}
	return avg;
}
