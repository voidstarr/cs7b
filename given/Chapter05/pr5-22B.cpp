// This program averages 2 test scores for each student in a class.
// It is a corrected version of Program 5-24.
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	string name;                 // Student first name
	       
	int    count = 1,            // Student counter                 
	       score,                // An individual score read in
	       totalScore;           // Total of a student's 2 scores
	double average;              // Average of a student's 2 scores

	cout << fixed << showpoint << setprecision(1);
	cout << "Enter the first name of student " << count
	     << " (or Q to quit): ";
	cin  >> name;       
	
	while (name != "Q" && name != "q")
	{	
	   // Reset totalScore to 0 for each student
       totalScore = 0;

       // Get and validate the first score
	   cout << "Enter score 1: ";
	   cin  >> score;
	   while (score < 0 || score > 100)
	   {  cout << "Score must be between 0 and 100. Please reenter: ";
	      cin  >> score;
	   }
	   totalScore += score;      // Add the first score onto the total

	   // Get and validate the second score
	   cout << "Enter score 2: ";
	   cin  >> score;
	   while (score < 0 || score > 100)
	   {  cout << "Score must be between 0 and 100. Please reenter: ";
	      cin  >> score;
	   }
	   totalScore += score;     // Add the second score onto the total

	   // Calculate and print average
	   average = totalScore / 2.0;
	   cout << name << setw(6) << average << endl;

	   // Get the next student name
	   cout << "Enter the first name of student " << ++count
	        << " (or Q to quit): ";
	   cin  >> name;
	}
	return 0;
}
