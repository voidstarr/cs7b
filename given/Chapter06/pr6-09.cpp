// This program demonstrates that changes to a function 
// parameter have no effect on the original argument.
#include <iostream>
using namespace std;

// Function Prototype
void changeMe(int aValue);

int main()
{
   int number = 12;

   // Display the value in number 
   cout << "In main number is " << number << endl;
   
   // Call changeMe, passing the value in number as an argument 
   changeMe(number);
   
   // Display the value in number again   
   cout << "Back in main again, number is still " << number << endl;
   return 0;
}

/*************************************
 *              changeMe             *
 *  This function changes the value  *
 *  stored in its parameter myValue  *
 *************************************/
void changeMe(int myValue)
{
   // Change the value of myValue to 0 
   myValue = 0;
   
   // Display the value in myValue 
   cout << "In changeMe, the value has been changed to "
        << myValue << endl;
}
