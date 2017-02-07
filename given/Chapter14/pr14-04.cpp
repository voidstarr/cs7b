// This program demonstrates a recursive function 
// to calculate the factorial of a number.  
#include <iostream>
using namespace std;

// Function prototype
int factorial(int);

int main()
{
   int number;

   cout << "Enter an integer value and I will display\n";
   cout << "its factorial: ";
   cin  >> number;
   cout << "The factorial of " << number << " is ";
   cout << factorial(number)   << endl;
   return 0;
}

//****************************************************
// Definition of factorial. A recursive function to  *
// calculate the factorial of the parameter, num.    *
//****************************************************
int factorial(int num)
{
  if (num == 0)  //base case
    return 1;
  else
    return num * factorial(num - 1);
}