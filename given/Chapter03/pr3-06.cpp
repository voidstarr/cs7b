// This program calculates the area of a circle. The formula for the
// area of a circle is PI times the radius squared. PI is 3.14159.
#include <iostream>
#include <cmath>     // Needed for the pow function
using namespace std;

int main()
{
   double area, radius;

   cout << "This program calculates the area of a circle.\n";

   // Get the radius
   cout << "What is the radius of the circle? ";
   cin  >> radius;

   // Compute and display the area
   area = 3.14159 * pow(radius, 2);
   cout << "The area is " << area << endl;
   return 0;
}
