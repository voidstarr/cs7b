// This program calculates and displays the area of a rectangle.
#include <iostream>
using namespace std;

int main()
{
	int length, width, area;

	cout << "This program calculates the area of a rectangle.\n";

	// Have the user input the rectangle's length and width	
	cout << "What is the length of the rectangle? ";
	cin  >> length;
	cout << "What is the width of the rectangle? ";
	cin  >> width;
	
	// Compute and display the area
	area = length * width;
	cout << "The area of the rectangle is " << area << endl;
	return 0;
}
