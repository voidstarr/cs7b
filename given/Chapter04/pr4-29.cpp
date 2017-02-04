// This program determines a client's total buffet luncheon cost 
// when the number of guests and the per person cost are known. 
// It contains a logic error.
#include <iostream>
#include <iomanip>
using namespace std;

const int ADULT_MEAL_COST = 6.25; // Child meal cost = 75% of this

int main()
{
	int    numAdults,         // Number of guests ages 12 and older
	       numChildren;       // Number of guests ages 2-11
	double adultMealTotal,    // Cost for all adult meals
	       childMealTotal,    // Cost for all child meals 
	       totalMealCost;

	// Get number of adults and children attending
	cout << "This program calculates total cost " 
         << "for a buffet luncheon.\n";
	cout << "Enter the number of adult guests (age 12 and over): ";
	cin  >> numAdults;
	cout << "Enter the number of child guests (age 2-11): ";
	cin  >> numChildren;

	// Calculate meal costs
	adultMealTotal = numAdults * ADULT_MEAL_COST;
	childMealTotal = numChildren * ADULT_MEAL_COST * .75;
	totalMealCost  = adultMealTotal + childMealTotal;

	// Display total meal cost
	cout << fixed << showpoint << setprecision(2);
	cout << "\nTotal buffet cost is $" << totalMealCost << endl;
	return 0;
}
