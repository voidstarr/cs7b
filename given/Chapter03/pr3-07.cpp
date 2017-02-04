// This program uses a type cast to avoid an integer division.
#include <iostream>
using namespace std;

int main()
{
	int    books,
		   months;
	double booksPerMonth;

	// Get user inputs
	cout << "How many books do you plan to read? ";
	cin  >> books;
	cout << "How many months will it take you to read them? ";
	cin  >> months;
	
	// Compute and display books read per month
	booksPerMonth = static_cast<double>(books) / months;
	cout << "That is " << booksPerMonth << " books per month.\n";
	return 0;
}
