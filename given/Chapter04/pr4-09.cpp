// This program uses an if/else if statement to assign a letter
// grade of A, B, C, D, or F to a numeric test score. A trailing
// else is used to set a flag if a negative value is entered.
#include <iostream>
using namespace std;

int main()
{
	// Create named constants to hold minimum
	// scores required for each letter grade.
	const int MIN_A_SCORE = 90,   
	          MIN_B_SCORE = 80,
			  MIN_C_SCORE = 70,
			  MIN_D_SCORE = 60,
			  MIN_POSSIBLE_SCORE = 0;
    
	int testScore;           // Holds a numeric test score
	char grade;              // Holds a letter grade
	bool goodScore = true;

	// Get the numeric score
	cout << "Enter your numeric test score and I will\n";
	cout << "tell you the letter grade you earned: ";
	cin  >> testScore;

	// Determine the letter grade
	if (testScore >= MIN_A_SCORE)
		grade = 'A';
	else if (testScore >= MIN_B_SCORE)
		grade = 'B';
	else if (testScore >= MIN_C_SCORE)
		grade = 'C';
	else if (testScore >= MIN_D_SCORE)
		grade = 'D';
	else if (testScore >= MIN_POSSIBLE_SCORE)
		grade = 'F';
	else
		goodScore = false;  // The score was below 0
		
	// Display the letter grade
	if (goodScore)
		cout << "Your grade is " << grade << ".\n";
	else
		cout << "The score cannot be below zero. \n";
	
	return 0;
}
