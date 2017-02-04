// This program determines whether a loan applicant qualifies for
// a special loan interest rate. It uses the && logical operator.
#include <iostream>
using namespace std;

int main()
{	
	char employed,       // Currently employed? (Y or N)
		 recentGrad;     // Recent college graduate? (Y or N)

	// Is the applicant employed and a recent college graduate?
	cout << "Answer the following questions\n";
	cout << "with either Y for Yes or N for No.\n";
	
	cout << "Are you employed? ";
	cin  >> employed;
	cout << "Have you graduated from college in the past two years? ";
	cin  >> recentGrad;

	// Determine the applicant's loan qualifications
	if (employed == 'Y' && recentGrad == 'Y')   // Uses logical AND 
		cout << "\nYou qualify for the special interest rate.\n";
	else
	{   cout << "\nYou must be employed and have graduated from college\n"
		     << "in the past two years to qualify "
		     << "for the special interest rate. \n";
	}
	return 0;
}
