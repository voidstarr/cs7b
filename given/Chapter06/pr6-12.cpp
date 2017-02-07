// This program demonstrates two value-returning functions.
// The square function is called in a mathematical statement.
#include <iostream>
#include <iomanip>
using namespace std;

//Function prototypes
double getRadius();
double square(double number);

int main()
{
   const double PI = 3.14159;   // Constant for pi
   double radius;               // Holds the circle's radius
   double area;                 // Holds the circle's area

   // Set the numeric output formatting
   cout << fixed << showpoint << setprecision(2);
   
   // Get the radius of the circle
	cout << "This program calculates the area of a circle.\n";
   radius = getRadius();
   
   // Caclulate the area of the circle
   area = PI * square(radius);
   
   // Display the area
   cout << "The area is " << area << endl;
   return 0;
}

/********************************************
 *               getRadius                  *
 * This function returns the circle radius  *
 * input by the user.                       *
 ********************************************/
double getRadius()
{
   double rad;

   cout << "Enter the radius of the circle: ";
   cin  >> rad;
   return rad;
}

 /********************************************
 *                   square                  *
 * This function returns the square of the   *
 * double argument sent to it                *
 *********************************************/
double square(double number)
{
   return number * number;
}
