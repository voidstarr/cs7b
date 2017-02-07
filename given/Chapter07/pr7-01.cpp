// This program demonstrates a simple class.
#include <iostream>
#include <cmath>
using namespace std;

// Circle class declaration
class Circle
{  private:
      double radius;
		
   public:
      void setRadius(double r)
      {  radius = r; }

      double calcArea()
      {  return 3.14 * pow(radius, 2); }
};

int main()
{
   // Define 2 Circle objects
   Circle circle1,          
          circle2;        

   // Call the setRadius function for each circle
   circle1.setRadius(1);    // This sets circle1's radius to 1.0
   circle2.setRadius(2.5);  // This sets circle2's radius to 2.5

   // Call the calcArea function for each circle and 
   // display the returned result
   cout << "The area of circle1 is " << circle1.calcArea() << endl;
   cout << "The area of circle2 is " << circle2.calcArea() << endl;

   return 0;
}
